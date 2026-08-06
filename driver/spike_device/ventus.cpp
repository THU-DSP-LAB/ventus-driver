/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 * 
 * 1. `/include/ventus.h`中声明的函数
 * 2. `spike_device`类，表示spike设备
 */

#include <stdio.h>
#include <stdlib.h>
#include <array>
#include <iostream>
#include <limits>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include "ventus.h"
#include "spike_main.h"
#include "ventus_rt_wavefront_worker.h"

static_assert(sizeof(vt_kernel_metadata_t) == sizeof(meta_data),
              "Spike metadata ABI must match the driver metadata ABI");
static_assert(offsetof(vt_kernel_metadata_t, pdsResidentWgCount) ==
                 offsetof(meta_data, pdsResidentWgCount),
              "Spike resident-workgroup metadata offset mismatch");
static_assert(sizeof(vt_rt_global_consume_info) == 88,
              "RT global consume C ABI size mismatch");
static_assert(offsetof(vt_rt_global_consume_info, capacity_rays) == 40 &&
                  offsetof(vt_rt_global_consume_info,
                           miss_sbt_stride_bytes) == 56 &&
                  offsetof(vt_rt_global_consume_info,
                           candidate_hit_attribute_base) == 72 &&
                  offsetof(vt_rt_global_consume_info, reserved) == 84,
              "RT global consume C ABI offset mismatch");
static_assert(sizeof(vt_rt_resume_request) == 48 &&
                  offsetof(vt_rt_resume_request, ray_ref) == 8 &&
                  offsetof(vt_rt_resume_request, callback_group) == 16 &&
                  offsetof(vt_rt_resume_request, launch_id_z) == 40,
              "RT resume request C ABI layout mismatch");
static_assert(
    VT_RT_COMPLETED_STAGE_MISS ==
            static_cast<int>(
                ventus_rt_wavefront::TraversalDispatchTarget::Miss) &&
        VT_RT_COMPLETED_STAGE_CLOSEST_HIT ==
            static_cast<int>(
                ventus_rt_wavefront::TraversalDispatchTarget::ClosestHit) &&
        VT_RT_COMPLETED_STAGE_ANY_HIT_CANDIDATE ==
            static_cast<int>(
                ventus_rt_wavefront::TraversalDispatchTarget::AnyHitCandidate) &&
        VT_RT_COMPLETED_STAGE_INTERSECTION_CANDIDATE ==
            static_cast<int>(ventus_rt_wavefront::TraversalDispatchTarget::
                                 IntersectionCandidate),
    "RT completed-stage C ABI mismatch");

namespace {

/* The worker only needs u32 global operations.  Keep this adapter on the
 * public spike_device copy API so the driver does not reach into sim/MMU
 * internals or accidentally apply a PDS address transform. */
class SpikeDeviceMemory {
public:
    explicit SpikeDeviceMemory(spike_device &device) : device_(device) {}

    uint32_t load_u32(uint64_t address)
    {
        if (!ok_)
            return 0;
        uint32_t value = 0;
        if (device_.copy_from_dev(address, sizeof(value), &value) != 0) {
            ok_ = false;
            return 0;
        }
        return value;
    }

    void store_u32(uint64_t address, uint32_t value)
    {
        if (!ok_ ||
            device_.copy_to_dev(address, sizeof(value), &value) != 0)
            ok_ = false;
    }

    uint32_t atomic_fetch_add_u32(uint64_t address, uint32_t value)
    {
        const uint32_t previous = load_u32(address);
        if (ok_)
            store_u32(address, previous + value);
        return previous;
    }

    bool ok() const { return ok_; }

private:
    spike_device &device_;
    bool ok_ = true;
};

struct RtGlobalSession {
    RtGlobalSession(spike_device &device,
                    const vt_rt_global_consume_info &consume_info,
                    uint32_t generation)
        : memory(device), rtcore_model(), consumer(memory, rtcore_model),
          binding(consume_info), queue_generation(generation) {}

    bool matches_binding(const vt_rt_global_consume_info &info) const
    {
        return binding.queue_base == info.queue_base &&
               binding.completion_base == info.completion_base &&
               binding.hit_attribute_base == info.hit_attribute_base &&
               binding.miss_sbt_base == info.miss_sbt_base &&
               binding.hit_sbt_base == info.hit_sbt_base &&
               binding.capacity_rays == info.capacity_rays &&
               binding.hit_attribute_stride_bytes ==
                   info.hit_attribute_stride_bytes &&
               binding.miss_sbt_stride_bytes == info.miss_sbt_stride_bytes &&
               binding.hit_sbt_stride_bytes == info.hit_sbt_stride_bytes &&
               binding.candidate_hit_attribute_base ==
                   info.candidate_hit_attribute_base &&
               binding.candidate_hit_attribute_stride_bytes ==
                   info.candidate_hit_attribute_stride_bytes;
    }

    bool matches(const vt_rt_global_consume_info &info,
                 uint32_t generation) const
    {
        return queue_generation == generation && matches_binding(info);
    }

    SpikeDeviceMemory memory;
    ventus_rt::RtCoreModel rtcore_model;
    ventus_rt_wavefront::GlobalWavefrontConsumer<SpikeDeviceMemory> consumer;
    vt_rt_global_consume_info binding;
    uint32_t queue_generation;
    std::vector<vt_rt_resume_request> resume_requests;
};

std::mutex rt_global_sessions_mutex;
std::unordered_map<spike_device *, std::unique_ptr<RtGlobalSession>>
    rt_global_sessions;

RtGlobalSession *find_rt_global_session(spike_device &device)
{
    const auto it = rt_global_sessions.find(&device);
    return it == rt_global_sessions.end() ? nullptr : it->second.get();
}

RtGlobalSession *bind_rt_global_session(
    spike_device &device, const vt_rt_global_consume_info &info,
    uint32_t generation)
{
    auto &session = rt_global_sessions[&device];
    if (!session) {
        session = std::make_unique<RtGlobalSession>(device, info, generation);
    } else if (!session->matches(info, generation)) {
        if (session->rtcore_model.debugSnapshot().private_context_count != 0)
            return nullptr;
        session = std::make_unique<RtGlobalSession>(device, info, generation);
    }
    return session.get();
}

void erase_rt_global_session(spike_device *device)
{
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    rt_global_sessions.erase(device);
}

bool valid_rt_global_consume_info(const vt_rt_global_consume_info &info)
{
    struct AddressRange {
        uint64_t begin;
        uint64_t end;
    };
    const auto aligned = [](uint64_t value, uint64_t alignment) {
        return (value & (alignment - 1)) == 0;
    };
    const auto range = [](uint64_t begin, uint64_t size,
                          AddressRange *out) {
        if (!out || size == 0 ||
            begin > std::numeric_limits<uint64_t>::max() - size)
            return false;
        *out = {begin, begin + size};
        return true;
    };
    const auto disjoint = [](const AddressRange &left,
                             const AddressRange &right) {
        return left.end <= right.begin || right.end <= left.begin;
    };
    if (info.queue_base == 0 || info.completion_base == 0 ||
        info.hit_attribute_base == 0 ||
        info.candidate_hit_attribute_base == 0 || info.capacity_rays == 0 ||
        (info.max_batch_rays != 0 &&
         info.max_batch_rays > info.capacity_rays) ||
        info.hit_attribute_stride_bytes < 2 * sizeof(uint32_t) ||
        info.candidate_hit_attribute_stride_bytes < 2 * sizeof(uint32_t) ||
        info.miss_sbt_base == 0 ||
        info.miss_sbt_stride_bytes <
            ventus_rt_wavefront::kShaderGroupHandleIndexOffset +
                sizeof(uint32_t) ||
        info.hit_sbt_base == 0 ||
        info.hit_sbt_stride_bytes <
            ventus_rt_wavefront::kShaderGroupHandleSize ||
        !aligned(info.queue_base,
                 ventus_rt_wavefront::kQueueAlignmentBytes) ||
        !aligned(info.completion_base,
                 ventus_rt_wavefront::kQueueAlignmentBytes) ||
        !aligned(info.hit_attribute_base, sizeof(uint32_t)) ||
        !aligned(info.candidate_hit_attribute_base, sizeof(uint32_t)) ||
        !aligned(info.miss_sbt_base, sizeof(uint32_t)) ||
        !aligned(info.hit_sbt_base, sizeof(uint32_t)) ||
        !aligned(info.hit_attribute_stride_bytes, sizeof(uint32_t)) ||
        !aligned(info.candidate_hit_attribute_stride_bytes,
                 sizeof(uint32_t)) ||
        !aligned(info.miss_sbt_stride_bytes, sizeof(uint32_t)) ||
        !aligned(info.hit_sbt_stride_bytes, sizeof(uint32_t)) ||
        info.reserved != 0)
        return false;

    const uint64_t queue_size =
        ventus_rt_wavefront::kQueueHeaderBytes +
        uint64_t(ventus_rt_wavefront::kTraceFieldCount) *
            ventus_rt_wavefront::queue_field_stride_bytes(
                info.capacity_rays);
    const uint64_t completion_size =
        ventus_rt_wavefront::kCompletionHeaderBytes +
        uint64_t(ventus_rt_wavefront::kCompletionFieldCount) *
            ventus_rt_wavefront::completion_field_stride_bytes(
                info.capacity_rays);
    const uint64_t hit_attribute_size =
        uint64_t(info.capacity_rays) * info.hit_attribute_stride_bytes;
    const uint64_t candidate_attribute_size =
        uint64_t(info.capacity_rays) *
        info.candidate_hit_attribute_stride_bytes;
    AddressRange queue_range = {};
    AddressRange completion_range = {};
    AddressRange hit_attribute_range = {};
    AddressRange candidate_attribute_range = {};
    AddressRange miss_sbt_range = {};
    AddressRange hit_sbt_range = {};
    if (!range(info.queue_base, queue_size, &queue_range) ||
        !range(info.completion_base, completion_size, &completion_range) ||
        !range(info.hit_attribute_base, hit_attribute_size,
               &hit_attribute_range) ||
        !range(info.candidate_hit_attribute_base, candidate_attribute_size,
               &candidate_attribute_range) ||
        !range(info.miss_sbt_base, info.miss_sbt_stride_bytes,
               &miss_sbt_range) ||
        !range(info.hit_sbt_base, info.hit_sbt_stride_bytes, &hit_sbt_range))
        return false;

    return disjoint(queue_range, completion_range) &&
           disjoint(queue_range, hit_attribute_range) &&
           disjoint(queue_range, candidate_attribute_range) &&
           disjoint(completion_range, hit_attribute_range) &&
           disjoint(completion_range, candidate_attribute_range) &&
           disjoint(hit_attribute_range, candidate_attribute_range);
}

struct RtQueueHeader {
    uint32_t capacity;
    uint32_t reserve_tail;
    uint32_t consume_head;
    uint32_t overflow;
    uint32_t generation;
};

RtQueueHeader read_queue_header(SpikeDeviceMemory &memory, uint64_t queue_base)
{
    const auto load = [&](uint32_t word) {
        return memory.load_u32(queue_base + word * sizeof(uint32_t));
    };
    return {
        load(ventus_rt_wavefront::kQueueCapacityWord),
        load(ventus_rt_wavefront::kQueueReserveTailWord),
        load(ventus_rt_wavefront::kQueueConsumeHeadWord),
        load(ventus_rt_wavefront::kQueueOverflowWord),
        load(ventus_rt_wavefront::kQueueGenerationWord),
    };
}

bool valid_queue_header(const RtQueueHeader &header,
                        const vt_rt_global_consume_info &info)
{
    return header.capacity == info.capacity_rays && header.overflow == 0 &&
           header.consume_head <= header.reserve_tail &&
           header.reserve_tail <= header.capacity;
}

bool queue_records_are_ready(SpikeDeviceMemory &memory,
                             const vt_rt_global_consume_info &info,
                             const RtQueueHeader &header)
{
    const uint64_t stride =
        ventus_rt_wavefront::queue_field_stride_bytes(info.capacity_rays);
    for (uint32_t ray_ref = header.consume_head;
         ray_ref < header.reserve_tail; ++ray_ref) {
        if (memory.load_u32(ventus_rt_wavefront::queue_field_address(
                info.queue_base, stride,
                ventus_rt_wavefront::TraceField::Ready, ray_ref)) == 0)
            return false;
    }
    return true;
}

ventus_rt_wavefront::CompletionPlaneLayout
make_completion_layout(const vt_rt_global_consume_info &info)
{
    return {
        .base_address = info.completion_base,
        .capacity = info.capacity_rays,
        .hit_attribute_base_address = info.hit_attribute_base,
        .hit_attribute_stride_bytes = info.hit_attribute_stride_bytes,
        .candidate_hit_attribute_base_address =
            info.candidate_hit_attribute_base,
        .candidate_hit_attribute_stride_bytes =
            info.candidate_hit_attribute_stride_bytes,
        .miss_sbt_base_address = info.miss_sbt_base,
        .miss_sbt_stride_bytes = info.miss_sbt_stride_bytes,
        .hit_sbt_base_address = info.hit_sbt_base,
        .hit_sbt_stride_bytes = info.hit_sbt_stride_bytes,
    };
}

void retain_resume_requests(
    RtGlobalSession &session,
    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> &results)
{
    session.resume_requests.clear();
    for (const auto &request : session.consumer.resume_requests(results)) {
        session.resume_requests.push_back({
            .payload_address = request.payload_address,
            .ray_ref = request.ray_ref,
            .completed_stage = static_cast<uint32_t>(request.completed_stage),
            .callback_group = request.callback_group,
            .cps_frame = request.cps_frame,
            .cps_stack_size = request.cps_stack_size,
            .continuation_id = request.continuation_id,
            .launch_id_x = request.launch_id_x,
            .launch_id_y = request.launch_id_y,
            .launch_id_z = request.launch_id_z,
        });
    }
}

bool session_binding_is_current(
    RtGlobalSession &session, const vt_rt_global_consume_info &info)
{
    const RtQueueHeader header =
        read_queue_header(session.memory, info.queue_base);
    return session.memory.ok() && valid_queue_header(header, info) &&
           session.matches(info, header.generation);
}

bool valid_resume_refs(
    RtGlobalSession &session, const vt_rt_global_consume_info &info,
    const uint32_t *ray_refs, uint32_t ray_ref_count,
    uint32_t expected_candidate_status)
{
    if (!session_binding_is_current(session, info))
        return false;
    if (ray_ref_count > info.capacity_rays)
        return false;

    std::unordered_set<uint32_t> unique_refs;
    unique_refs.reserve(ray_ref_count);
    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        const uint32_t ray_ref = ray_refs[i];
        if (ray_ref >= info.capacity_rays || !unique_refs.insert(ray_ref).second)
            return false;
        const auto *record = session.consumer.completion_arena().find(ray_ref);
        if (!record ||
            record->state != ventus_rt_wavefront::CompletionState::Candidate ||
            record->candidate_status != expected_candidate_status)
            return false;
    }
    return true;
}

int fail_rt_global_session(spike_device *device, uint32_t *out_request_count)
{
    rt_global_sessions.erase(device);
    if (out_request_count)
        *out_request_count = 0;
    return -1;
}

} // namespace


/// open the device and connect to it
extern int vt_dev_open(vt_device_h* hdevice){
    if(hdevice == nullptr)
        return -1;
    PCOUT_INFO << "vt_dev_open : hello world from ventus.cpp" << std::endl;
    *hdevice = new spike_device();
    return 0;
}
/// Close the device when all the operations are done
extern int vt_dev_close(vt_device_h hdevice){
    if(hdevice == nullptr)
        return -1;
    auto* device = (spike_device*) hdevice;
    erase_rt_global_session(device);
    delete device;
    return 0;
}
extern int vt_dev_caps(vt_device_h* hdevice, host_port_t* input_sig){
    // if(hdevice == nullptr)
    //     return -1;
    // vt_device* device = (vt_device*) hdevice;
    // //set spike_device id to 1
    return 0;
}

int vt_dev_caps(vt_device_h* hdevice, uint64_t caps_id, uint64_t *value) {
    (void)hdevice;
    if (value == nullptr) return -1;
    switch (caps_id) {
    case VT_CAPS_MAX_CORES:
        *value = 1;
        return 0;
    case VT_CAPS_MAX_WARPS:
        *value = 8;
        return 0;
    case VT_CAPS_MAX_THREADS:
        *value = 32;
        return 0;
    case VT_CAPS_MAX_WG_SLOTS:
        *value = 1;
        return 0;
    case VT_CAPS_DVA_ADDRESS_BITS:
        *value = 32;
        return 0;
    case VT_CAPS_DVA_BASE_ADDR:
        *value = 0x90000000ull;
        return 0;
    case VT_CAPS_DVA_WINDOW_SIZE:
        *value = 0x70000000ull;
        return 0;
    case VT_CAPS_DVA_ALLOC_GRANULE:
        *value = 4096;
        return 0;
    default:
        return -1;
    }
}

extern int vt_buf_alloc(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, int BUF_TYPE, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || hdevice == nullptr)
        return -1;
    auto device = ((spike_device*) hdevice);
    return device->alloc_local_mem(size, vaddr);

}
extern int vt_buf_free(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID) {
    if(hdevice == nullptr)
        return -1;
    auto device = ((spike_device*) hdevice);
    return device->free_local_mem();

}

extern int vt_one_buf_free(vt_device_h hdevice, uint64_t size, uint64_t *vaddr, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0 || hdevice == nullptr)
        return -1;
    auto device = ((spike_device*) hdevice);
    return device->free_local_mem(*vaddr);
}

/**
 * @brief  为设备分配内存，返回根页表的地址
 * @param  hdevice           
 * @param  size              
 * @param  dev_vaddr    申请物理地址时的虚拟地址         
 * @return int 
 */
extern int vt_root_mem_alloc(vt_device_h hdevice, int taskID) {
    return -1;
}

/**
 * 释放taskID（对应context）的根页表
 * @param hdevice
 * @param taskID
 * @return
 */
extern int vt_root_mem_free(vt_device_h hdevice, int taskID) {
    return -1;
}

//extern int vt_create_kernel(vt_device_h hdevice, int taskID, int kernelID) {
//    if(hdevice == nullptr)
//        return -1;
//    auto device = (vt_device*) hdevice;
//    return device->push_kernel(taskID, kernelID);
//}

extern int vt_copy_to_dev(vt_device_h hdevice, uint64_t dev_vaddr,const void *src_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
    if(size == 0 || hdevice == nullptr || src_addr == nullptr)
        return -1;
    auto device = (spike_device*) hdevice;
    return device->copy_to_dev(dev_vaddr, size, src_addr);
}

extern int vt_copy_from_dev(vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
    if(size == 0 || hdevice == nullptr || dst_addr == nullptr)
        return -1;
    auto device = (spike_device*) hdevice;
    return device->copy_from_dev(dev_vaddr, size, dst_addr);
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t* metaData, uint64_t taskID) {
    if(hdevice == nullptr || metaData == nullptr)
        return -1;
    auto device = (spike_device *) hdevice;
    if (metaData->pdsSize > UINT32_MAX) {
        std::cerr << "vt_start: pdsSize exceeds the RV32 kernel metadata ABI"
                  << std::endl;
        return -1;
    }
    uint32_t kernel_pds_size_per_thread = 0;
    uint32_t kernel_pds_stack_base_per_thread = 0;
    if (device->copy_from_dev(
            metaData->metaDataBaseAddr + KNL_PDS_SIZE_PER_THREAD,
            sizeof(kernel_pds_size_per_thread),
            &kernel_pds_size_per_thread) != 0 ||
        kernel_pds_size_per_thread != static_cast<uint32_t>(metaData->pdsSize)) {
        std::cerr << "vt_start: kernel and host PDS metadata disagree"
                  << std::endl;
        return -1;
    }
    if (device->copy_from_dev(
            metaData->metaDataBaseAddr + KNL_PDS_STACK_BASE_PER_THREAD,
            sizeof(kernel_pds_stack_base_per_thread),
            &kernel_pds_stack_base_per_thread) != 0 ||
        kernel_pds_stack_base_per_thread > kernel_pds_size_per_thread) {
        std::cerr << "vt_start: invalid kernel PDS stack base" << std::endl;
        return -1;
    }

    device->run(reinterpret_cast<meta_data*>(metaData),0x80000000);
    return 0;
}

extern int vt_rt_consume_global(vt_device_h hdevice,
                                const vt_rt_global_consume_info *info,
                                uint32_t *out_request_count)
{
    if (out_request_count)
        *out_request_count = 0;
    if (!hdevice || !info || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    SpikeDeviceMemory probe(*device);
    const RtQueueHeader header = read_queue_header(probe, info->queue_base);
    if (!probe.ok() || !valid_queue_header(header, *info) ||
        !queue_records_are_ready(probe, *info, header) || !probe.ok())
        return -1;
    RtGlobalSession *session =
        bind_rt_global_session(*device, *info, header.generation);
    if (!session ||
        session->rtcore_model.debugSnapshot().private_context_count != 0)
        return -1;
    session->resume_requests.clear();

    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session->consumer.consume_producer_phase(info->queue_base,
                                                 info->max_batch_rays);
    if (!session->memory.ok())
        return fail_rt_global_session(device, out_request_count);
    const RtQueueHeader consumed =
        read_queue_header(session->memory, info->queue_base);
    if (!session->memory.ok() || !valid_queue_header(consumed, *info) ||
        consumed.generation != header.generation ||
        consumed.consume_head != consumed.reserve_tail)
        return fail_rt_global_session(device, out_request_count);
    const auto completion_layout = make_completion_layout(*info);
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session->memory, completion_layout, result,
                session->consumer.completion_arena()) ||
            !session->memory.ok())
            return fail_rt_global_session(device, out_request_count);
    }

    retain_resume_requests(*session, results);
    *out_request_count =
        static_cast<uint32_t>(session->resume_requests.size());
    return 0;
}

extern int vt_rt_get_resume_requests(vt_device_h hdevice,
                                     vt_rt_resume_request *requests,
                                     uint32_t capacity,
                                     uint32_t *out_request_count)
{
    if (!hdevice || !out_request_count)
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession *session = find_rt_global_session(*device);
    if (!session) {
        *out_request_count = 0;
        return -1;
    }
    const uint32_t count =
        static_cast<uint32_t>(session->resume_requests.size());
    *out_request_count = count;
    if (!requests && capacity == 0)
        return 0;
    if (!requests || capacity < count)
        return -2;
    for (uint32_t i = 0; i < count; ++i)
        requests[i] = session->resume_requests[i];
    return 0;
}

extern int vt_rt_resume_global_candidates(
    vt_device_h hdevice, const vt_rt_global_consume_info *info,
    const uint32_t *ray_refs, uint32_t ray_ref_count,
    uint32_t *out_request_count)
{
    if (out_request_count)
        *out_request_count = 0;
    if (!hdevice || !info || !ray_refs || !ray_ref_count || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession *session = find_rt_global_session(*device);
    if (!session)
        return -1;
    if (!valid_resume_refs(
            *session, *info, ray_refs, ray_ref_count,
            ventus_rt::traversal_candidate_non_opaque_triangle)) {
        return session->memory.ok()
                   ? -1
                   : fail_rt_global_session(device, out_request_count);
    }
    const auto completion_layout = make_completion_layout(*info);

    std::vector<ventus_rt_wavefront::CompletionAction> actions;
    actions.reserve(ray_ref_count);
    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        const uint32_t ray_ref = ray_refs[i];
        const auto control = [&](uint32_t word) {
            return session->memory.load_u32(
                ventus_rt_wavefront::completion_field_address(
                    completion_layout,
                    static_cast<ventus_rt_wavefront::CompletionField>(
                        static_cast<uint32_t>(
                            ventus_rt_wavefront::CompletionField::CandidateControlBase) +
                        word),
                    ray_ref));
        };
        const bool accept = control(ventus_rt::control_accept_hit) != 0;
        const bool ignore = control(ventus_rt::control_ignore_hit) != 0;
        const bool terminate = control(ventus_rt::control_terminate_ray) != 0;
        actions.push_back(ignore || !accept
            ? ventus_rt_wavefront::CompletionAction::Ignore
            : terminate ? ventus_rt_wavefront::CompletionAction::AcceptTerminate
                        : ventus_rt_wavefront::CompletionAction::AcceptContinue);
    }
    if (!session->memory.ok())
        return fail_rt_global_session(device, out_request_count);
    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        if (!session->consumer.completion_arena().set_action(ray_refs[i],
                                                              actions[i]))
            return fail_rt_global_session(device, out_request_count);
    }

    const std::vector<uint32_t> refs(ray_refs, ray_refs + ray_ref_count);
    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session->consumer.resume_candidate_subset(refs);
    if (!session->memory.ok())
        return fail_rt_global_session(device, out_request_count);
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session->memory, completion_layout, result,
                session->consumer.completion_arena()) ||
            !session->memory.ok())
            return fail_rt_global_session(device, out_request_count);
    }

    retain_resume_requests(*session, results);
    *out_request_count =
        static_cast<uint32_t>(session->resume_requests.size());
    return 0;
}

extern int vt_rt_resume_global_intersections(
    vt_device_h hdevice, const vt_rt_global_consume_info *info,
    const uint32_t *ray_refs, uint32_t ray_ref_count,
    uint32_t *out_request_count)
{
    if (out_request_count)
        *out_request_count = 0;
    if (!hdevice || !info || !ray_refs || !ray_ref_count || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession *session = find_rt_global_session(*device);
    if (!session)
        return -1;
    if (!valid_resume_refs(
            *session, *info, ray_refs, ray_ref_count,
            ventus_rt::traversal_candidate_procedural_aabb)) {
        return session->memory.ok()
                   ? -1
                   : fail_rt_global_session(device, out_request_count);
    }
    const auto completion_layout = make_completion_layout(*info);
    const auto field = [&](ventus_rt_wavefront::CompletionField word,
                           uint32_t ray_ref) {
        return session->memory.load_u32(
            ventus_rt_wavefront::completion_field_address(completion_layout,
                                                            word, ray_ref));
    };
    struct ReportedIntersection {
        uint32_t ray_ref;
        bool accepted;
        bool terminate;
        std::array<uint32_t, ventus_rt_wavefront::kHitRecordWordCount> hit;
        std::array<uint32_t, ventus_rt_wavefront::kHitAttributeWordCount> attrs;
    };
    std::vector<ReportedIntersection> reported;
    reported.reserve(ray_ref_count);
    std::vector<uint32_t> refs(ray_refs, ray_refs + ray_ref_count);
    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        const uint32_t ray_ref = ray_refs[i];
        ReportedIntersection report = {};
        report.ray_ref = ray_ref;
        report.accepted = field(
            static_cast<ventus_rt_wavefront::CompletionField>(
                static_cast<uint32_t>(
                    ventus_rt_wavefront::CompletionField::CandidateControlBase) +
                ventus_rt::control_done), ray_ref) != 0;
        report.terminate = field(
            static_cast<ventus_rt_wavefront::CompletionField>(
                static_cast<uint32_t>(
                    ventus_rt_wavefront::CompletionField::CandidateControlBase) +
                ventus_rt::control_terminate_ray), ray_ref) != 0;
        if (!report.accepted) {
            reported.push_back(report);
            continue;
        }
        for (uint32_t word = 0; word < report.hit.size(); ++word)
            report.hit[word] = field(
                static_cast<ventus_rt_wavefront::CompletionField>(
                    static_cast<uint32_t>(
                        ventus_rt_wavefront::CompletionField::CommittedHitBase) +
                    word), ray_ref);
        const uint64_t attrib_addr =
            (uint64_t(field(ventus_rt_wavefront::CompletionField::CandidateHitAttributeAddrHi,
                            ray_ref)) << 32) |
            field(ventus_rt_wavefront::CompletionField::CandidateHitAttributeAddrLo,
                  ray_ref);
        if (attrib_addr) {
            for (uint32_t word = 0; word < report.attrs.size(); ++word)
                report.attrs[word] =
                    session->memory.load_u32(attrib_addr +
                                             word * sizeof(uint32_t));
        }
        reported.push_back(report);
    }
    if (!session->memory.ok())
        return fail_rt_global_session(device, out_request_count);
    for (const auto &report : reported) {
        if (!report.accepted) {
            if (!session->consumer.completion_arena().set_action(
                    report.ray_ref,
                    ventus_rt_wavefront::CompletionAction::Ignore))
                return fail_rt_global_session(device, out_request_count);
            continue;
        }
        if (!session->consumer.completion_arena().replace_candidate(
                report.ray_ref, report.hit, report.attrs) ||
            !session->consumer.completion_arena().set_action(
                report.ray_ref,
                report.terminate
                    ? ventus_rt_wavefront::CompletionAction::AcceptTerminate
                    : ventus_rt_wavefront::CompletionAction::AcceptContinue))
            return fail_rt_global_session(device, out_request_count);
    }

    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session->consumer.resume_candidate_subset(refs);
    if (!session->memory.ok())
        return fail_rt_global_session(device, out_request_count);
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session->memory, completion_layout, result,
                session->consumer.completion_arena()) ||
            !session->memory.ok())
            return fail_rt_global_session(device, out_request_count);
    }

    retain_resume_requests(*session, results);
    *out_request_count =
        static_cast<uint32_t>(session->resume_requests.size());
    return 0;
}

extern int vt_rt_end_global(vt_device_h hdevice,
                            const vt_rt_global_consume_info *info)
{
    if (!hdevice || !info || !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession *session = find_rt_global_session(*device);
    if (!session)
        return 0;
    if (!session->matches_binding(*info))
        return -1;
    rt_global_sessions.erase(device);
    return 0;
}

extern int vt_ready_wait(vt_device_h hdevice, uint64_t timeout) {
    return 0;
}

extern int vt_finish_all_kernel(vt_device_h hdevice, std::queue<int> *finished_kernel_list) {
    return 0;
}

extern int vt_upload_kernel_file(vt_device_h hdevice, const char* filename, int taskID) {
  /*std::ifstream ifs(filename);
  if (!ifs) {
    std::cout << "error: " << filename << " not found" << std::endl;
    return -1;
  }
  ifs.close();*/
  if(hdevice == nullptr)
        return -1;
    auto device = (spike_device *) hdevice;
    device->set_filename(filename);
  return 0;
}

/*
extern int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size, int taskID) {
  int err = 0;

  if (NULL == content || 0 == size)
    return -1;

  uint32_t buffer_transfer_size = 65536; ///< 64 KB
  uint64_t kernel_base_addr = GLOBALMEM_BASE;
//   err = vt_dev_caps(device, VT_CAPS_KERNEL_BASE_ADDR, &kernel_base_addr);
//   if (err != 0)
//     return -1;

  // allocate device buffer
  vt_buffer_h buffer;
  err = vt_buf_alloc(device, buffer_transfer_size, &buffer);
  if (err != 0)
    return -1;

  // get buffer address
  auto buf_ptr = (uint8_t*)vt_host_ptr(buffer);

  //
  // upload content
  //

  uint64_t offset = 0;
  while (offset < size) {
    auto chunk_size = std::min<uint64_t>(buffer_transfer_size, size - offset);
    std::memcpy(buf_ptr, (uint8_t*)content + offset, chunk_size);

    */
/*printf("***  Upload Kernel to 0x%0x: data=", kernel_base_addr + offset);
    for (int i = 0, n = ((chunk_size+7)/8); i < n; ++i) {
      printf("%08x", ((uint64_t*)((uint8_t*)content + offset))[n-1-i]);
    }
    printf("\n");*//*



    err = vt_copy_to_dev(buffer, kernel_base_addr + offset, chunk_size, taskID);
    if (err != 0) {
      vt_buf_free(buffer);
      return err;
    }
    offset += chunk_size;
  }

  vt_buf_free(buffer);

  return 0;
}

extern int vt_upload_kernel_file(vt_device_h device, const char* filename, int taskID) {
  std::ifstream ifs(filename);
  if (!ifs) {
    std::cout << "error: " << filename << " not found" << std::endl;
    return -1;
  }

  // read file content
  ifs.seekg(0, ifs.end);
  auto size = ifs.tellg();
  auto content = new char [size];
  ifs.seekg(0, ifs.beg);
  ifs.read(content, size);

  // upload
  int err = vt_upload_kernel_bytes(device, content, size, taskID);

  // release buffer
  delete[] content;

  return err;
}
*/

int vt_upload_kernel_bytes(vt_device_h device, const void* content, uint64_t size, int taskID) { return 0; }
int vt_dump_perf(vt_device_h device, FILE* stream) { return 0; }
