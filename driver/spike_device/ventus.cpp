/**
 * @file ventus.cpp
 * @brief 设备和OpenCL程序的交互功能的实现
 * 
 * 1. `/include/ventus.h`中声明的函数
 * 2. `spike_device`类，表示spike设备
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>
#include "ventus.h"
#include "spike_main.h"
#include "ventus_rt_wavefront_worker.h"

static_assert(sizeof(vt_kernel_metadata_t) == sizeof(meta_data),
              "Spike metadata ABI must match the driver metadata ABI");
static_assert(offsetof(vt_kernel_metadata_t, pdsResidentWgCount) ==
                 offsetof(meta_data, pdsResidentWgCount),
              "Spike resident-workgroup metadata offset mismatch");

namespace {

/* The worker only needs u32 global operations.  Keep this adapter on the
 * public spike_device copy API so the driver does not reach into sim/MMU
 * internals or accidentally apply a PDS address transform. */
class SpikeDeviceMemory {
public:
    explicit SpikeDeviceMemory(spike_device &device) : device_(device) {}

    uint32_t load_u32(uint64_t address)
    {
        uint32_t value = 0;
        (void)device_.copy_from_dev(address, sizeof(value), &value);
        return value;
    }

    void store_u32(uint64_t address, uint32_t value)
    {
        (void)device_.copy_to_dev(address, sizeof(value), &value);
    }

    uint32_t atomic_fetch_add_u32(uint64_t address, uint32_t value)
    {
        const uint32_t previous = load_u32(address);
        store_u32(address, previous + value);
        return previous;
    }

private:
    spike_device &device_;
};

struct RtGlobalSession {
    explicit RtGlobalSession(spike_device &device)
        : memory(device), consumer(memory) {}

    SpikeDeviceMemory memory;
    ventus_rt_wavefront::GlobalWavefrontConsumer<SpikeDeviceMemory> consumer;
    std::vector<vt_rt_resume_request> resume_requests;
};

std::mutex rt_global_sessions_mutex;
std::unordered_map<spike_device *, std::unique_ptr<RtGlobalSession>>
    rt_global_sessions;

RtGlobalSession &get_rt_global_session(spike_device &device)
{
    auto &session = rt_global_sessions[&device];
    if (!session)
        session = std::make_unique<RtGlobalSession>(device);
    return *session;
}

void erase_rt_global_session(spike_device *device)
{
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    rt_global_sessions.erase(device);
}

bool valid_rt_global_consume_info(const vt_rt_global_consume_info &info)
{
    return info.queue_base != 0 && info.completion_base != 0 &&
           info.hit_attribute_base != 0 &&
           info.candidate_hit_attribute_base != 0 && info.capacity_rays != 0 &&
           info.hit_attribute_stride_bytes >= 2 * sizeof(uint32_t) &&
           info.candidate_hit_attribute_stride_bytes >= 2 * sizeof(uint32_t) &&
           info.miss_sbt_base != 0 && info.miss_sbt_stride_bytes != 0 &&
           info.hit_sbt_base != 0 && info.hit_sbt_stride_bytes != 0;
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
    if(size <= 0)
        return -1;
    auto device = (spike_device*) hdevice;
    return device->copy_to_dev(dev_vaddr, size, src_addr);
}

extern int vt_copy_from_dev(vt_device_h hdevice, uint64_t dev_vaddr, void *dst_addr, uint64_t size, uint64_t taskID, uint64_t kernelID) {
    if(size <= 0)
        return -1;
    auto device = (spike_device*) hdevice;
    return device->copy_from_dev(dev_vaddr, size, dst_addr);
}

extern int vt_start(vt_device_h hdevice, vt_kernel_metadata_t* metaData, uint64_t taskID) {
    if(hdevice == nullptr)
        return -1;
    auto device = (spike_device *) hdevice;

    device->run(reinterpret_cast<meta_data*>(metaData),0x80000000);
    return 0;
}

extern int vt_rt_consume_global(vt_device_h hdevice,
                                const vt_rt_global_consume_info *info,
                                uint32_t *out_request_count)
{
    if (!hdevice || !info || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession &session = get_rt_global_session(*device);
    if (session.memory.load_u32(info->queue_base +
                                ventus_rt_wavefront::kQueueCapacityWord *
                                    sizeof(uint32_t)) != info->capacity_rays)
        return -1;

    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session.consumer.consume_producer_phase(info->queue_base,
                                                info->max_batch_rays);
    const ventus_rt_wavefront::CompletionPlaneLayout completion_layout = {
        .base_address = info->completion_base,
        .capacity = info->capacity_rays,
        .hit_attribute_base_address = info->hit_attribute_base,
        .hit_attribute_stride_bytes = info->hit_attribute_stride_bytes,
        .candidate_hit_attribute_base_address =
            info->candidate_hit_attribute_base,
        .candidate_hit_attribute_stride_bytes =
            info->candidate_hit_attribute_stride_bytes,
        .miss_sbt_base_address = info->miss_sbt_base,
        .miss_sbt_stride_bytes = info->miss_sbt_stride_bytes,
        .hit_sbt_base_address = info->hit_sbt_base,
        .hit_sbt_stride_bytes = info->hit_sbt_stride_bytes,
    };
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session.memory, completion_layout, result,
                session.consumer.completion_arena()))
            return -1;
    }

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
    *out_request_count = session.resume_requests.size();
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
    RtGlobalSession &session = get_rt_global_session(*device);
    const uint32_t count = session.resume_requests.size();
    *out_request_count = count;
    if (!requests && capacity == 0)
        return 0;
    if (!requests || capacity < count)
        return -2;
    for (uint32_t i = 0; i < count; ++i)
        requests[i] = session.resume_requests[i];
    return 0;
}

extern int vt_rt_resume_global_candidates(
    vt_device_h hdevice, const vt_rt_global_consume_info *info,
    const uint32_t *ray_refs, uint32_t ray_ref_count,
    uint32_t *out_request_count)
{
    if (!hdevice || !info || !ray_refs || !ray_ref_count || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession &session = get_rt_global_session(*device);
    const ventus_rt_wavefront::CompletionPlaneLayout completion_layout = {
        .base_address = info->completion_base,
        .capacity = info->capacity_rays,
        .hit_attribute_base_address = info->hit_attribute_base,
        .hit_attribute_stride_bytes = info->hit_attribute_stride_bytes,
        .candidate_hit_attribute_base_address =
            info->candidate_hit_attribute_base,
        .candidate_hit_attribute_stride_bytes =
            info->candidate_hit_attribute_stride_bytes,
        .miss_sbt_base_address = info->miss_sbt_base,
        .miss_sbt_stride_bytes = info->miss_sbt_stride_bytes,
        .hit_sbt_base_address = info->hit_sbt_base,
        .hit_sbt_stride_bytes = info->hit_sbt_stride_bytes,
    };

    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        const uint32_t ray_ref = ray_refs[i];
        if (ray_ref >= info->capacity_rays)
            return -1;
        const auto control = [&](uint32_t word) {
            return session.memory.load_u32(
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
        const auto action = ignore || !accept
            ? ventus_rt_wavefront::CompletionAction::Ignore
            : terminate ? ventus_rt_wavefront::CompletionAction::AcceptTerminate
                        : ventus_rt_wavefront::CompletionAction::AcceptContinue;
        if (!session.consumer.completion_arena().set_action(ray_ref, action))
            return -1;
    }

    const std::vector<uint32_t> refs(ray_refs, ray_refs + ray_ref_count);
    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session.consumer.resume_candidate_subset(refs);
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session.memory, completion_layout, result,
                session.consumer.completion_arena()))
            return -1;
    }

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
    *out_request_count = session.resume_requests.size();
    return 0;
}

extern int vt_rt_resume_global_intersections(
    vt_device_h hdevice, const vt_rt_global_consume_info *info,
    const uint32_t *ray_refs, uint32_t ray_ref_count,
    uint32_t *out_request_count)
{
    if (!hdevice || !info || !ray_refs || !ray_ref_count || !out_request_count ||
        !valid_rt_global_consume_info(*info))
        return -1;

    auto *device = static_cast<spike_device *>(hdevice);
    std::lock_guard<std::mutex> lock(rt_global_sessions_mutex);
    RtGlobalSession &session = get_rt_global_session(*device);
    const ventus_rt_wavefront::CompletionPlaneLayout completion_layout = {
        .base_address = info->completion_base,
        .capacity = info->capacity_rays,
        .hit_attribute_base_address = info->hit_attribute_base,
        .hit_attribute_stride_bytes = info->hit_attribute_stride_bytes,
        .candidate_hit_attribute_base_address =
            info->candidate_hit_attribute_base,
        .candidate_hit_attribute_stride_bytes =
            info->candidate_hit_attribute_stride_bytes,
        .miss_sbt_base_address = info->miss_sbt_base,
        .miss_sbt_stride_bytes = info->miss_sbt_stride_bytes,
        .hit_sbt_base_address = info->hit_sbt_base,
        .hit_sbt_stride_bytes = info->hit_sbt_stride_bytes,
    };
    const auto field = [&](ventus_rt_wavefront::CompletionField word,
                           uint32_t ray_ref) {
        return session.memory.load_u32(
            ventus_rt_wavefront::completion_field_address(completion_layout,
                                                            word, ray_ref));
    };
    std::vector<uint32_t> refs(ray_refs, ray_refs + ray_ref_count);
    for (uint32_t i = 0; i < ray_ref_count; ++i) {
        const uint32_t ray_ref = ray_refs[i];
        if (ray_ref >= info->capacity_rays)
            return -1;
        const bool accepted_report = field(
            static_cast<ventus_rt_wavefront::CompletionField>(
                static_cast<uint32_t>(
                    ventus_rt_wavefront::CompletionField::CandidateControlBase) +
                ventus_rt::control_done), ray_ref) != 0;
        const bool terminate = field(
            static_cast<ventus_rt_wavefront::CompletionField>(
                static_cast<uint32_t>(
                    ventus_rt_wavefront::CompletionField::CandidateControlBase) +
                ventus_rt::control_terminate_ray), ray_ref) != 0;
        if (!accepted_report) {
            if (!session.consumer.completion_arena().set_action(
                    ray_ref, ventus_rt_wavefront::CompletionAction::Ignore))
                return -1;
            continue;
        }

        std::array<uint32_t, ventus_rt_wavefront::kHitRecordWordCount> hit = {};
        std::array<uint32_t, ventus_rt_wavefront::kHitAttributeWordCount> attrs = {};
        for (uint32_t word = 0; word < hit.size(); ++word)
            hit[word] = field(
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
            for (uint32_t word = 0; word < attrs.size(); ++word)
                attrs[word] = session.memory.load_u32(attrib_addr + word * sizeof(uint32_t));
        }
        if (!session.consumer.completion_arena().replace_candidate(ray_ref, hit, attrs))
            return -1;
        if (!session.consumer.completion_arena().set_action(
                ray_ref, terminate ?
                   ventus_rt_wavefront::CompletionAction::AcceptTerminate :
                   ventus_rt_wavefront::CompletionAction::AcceptContinue))
            return -1;
    }

    const std::vector<ventus_rt_wavefront::TraversalDispatchResult> results =
        session.consumer.resume_candidate_subset(refs);
    for (const auto &result : results) {
        if (!ventus_rt_wavefront::write_global_completion(
                session.memory, completion_layout, result,
                session.consumer.completion_arena()))
            return -1;
    }

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
    *out_request_count = session.resume_requests.size();
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
