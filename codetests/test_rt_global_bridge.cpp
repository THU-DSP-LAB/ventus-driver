#include "ventus.h"
#include "ventus_rt_wavefront_worker.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace ventus_rt;
using namespace ventus_rt_wavefront;

namespace {

#ifdef assert
#undef assert
#endif
#define assert(condition)                                                     \
    do {                                                                      \
        if (!(condition)) {                                                   \
            std::fprintf(stderr, "check failed: %s (%s:%d)\n", #condition,  \
                         __FILE__, __LINE__);                                  \
            std::abort();                                                     \
        }                                                                     \
    } while (false)

constexpr uint64_t kAllocationSize = 0x30000;
constexpr uint64_t kQueueOffset = 0x1000;
constexpr uint64_t kCompletionOffset = 0x4000;
constexpr uint64_t kHitAttributeOffset = 0x8000;
constexpr uint64_t kCandidateAttributeOffset = 0x9000;
constexpr uint64_t kMissSbtOffset = 0xa000;
constexpr uint64_t kHitSbtOffset = 0xb000;
constexpr uint64_t kTriangleSceneOffset = 0x10000;
constexpr uint64_t kTriangleDataOffset = 0x11000;
constexpr uint64_t kTlasOffset = 0x14000;
constexpr uint64_t kBlasOffset = 0x16000;

uint32_t float_bits(float value)
{
    uint32_t bits = 0;
    static_assert(sizeof(bits) == sizeof(value));
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

class DriverFixture {
public:
    DriverFixture() : image_(kAllocationSize, 0)
    {
        assert(vt_dev_open(&device_) == 0);
        assert(device_ != nullptr);
        assert(vt_buf_alloc(device_, kAllocationSize, &base_, 0, 0, 0) == 0);
        assert(base_ != 0);
    }

    ~DriverFixture()
    {
        if (base_)
            assert(vt_buf_free(device_, kAllocationSize, &base_, 0, 0) == 0);
        if (device_)
            assert(vt_dev_close(device_) == 0);
    }

    vt_device_h device() const { return device_; }
    uint64_t address(uint64_t offset) const { return base_ + offset; }

    void clear()
    {
        std::fill(image_.begin(), image_.end(), 0);
    }

    void store_u32(uint64_t address, uint32_t value)
    {
        const uint64_t offset = address - base_;
        assert(address >= base_ && offset + sizeof(value) <= image_.size());
        std::memcpy(image_.data() + offset, &value, sizeof(value));
    }

    void upload()
    {
        assert(vt_copy_to_dev(device_, base_, image_.data(), image_.size(), 0, 0) ==
               0);
    }

    void store_device_u32(uint64_t address, uint32_t value)
    {
        assert(vt_copy_to_dev(device_, address, &value, sizeof(value), 0, 0) == 0);
    }

    uint32_t load_device_u32(uint64_t address)
    {
        uint32_t value = 0;
        assert(vt_copy_from_dev(device_, address, &value, sizeof(value), 0, 0) ==
               0);
        return value;
    }

private:
    vt_device_h device_ = nullptr;
    uint64_t base_ = 0;
    std::vector<uint8_t> image_;
};

struct TestLayout {
    uint64_t queue;
    uint64_t completion;
    uint64_t hit_attributes;
    uint64_t candidate_attributes;
    uint64_t miss_sbt;
    uint64_t hit_sbt;
};

TestLayout make_layout(const DriverFixture &fixture)
{
    return {
        fixture.address(kQueueOffset),
        fixture.address(kCompletionOffset),
        fixture.address(kHitAttributeOffset),
        fixture.address(kCandidateAttributeOffset),
        fixture.address(kMissSbtOffset),
        fixture.address(kHitSbtOffset),
    };
}

vt_rt_global_consume_info make_consume_info(const TestLayout &layout)
{
    return {
        .queue_base = layout.queue,
        .completion_base = layout.completion,
        .hit_attribute_base = layout.hit_attributes,
        .miss_sbt_base = layout.miss_sbt,
        .hit_sbt_base = layout.hit_sbt,
        .capacity_rays = 4,
        .hit_attribute_stride_bytes = 8,
        .max_batch_rays = 1,
        .miss_sbt_stride_bytes = 64,
        .hit_sbt_stride_bytes = 96,
        .candidate_hit_attribute_base = layout.candidate_attributes,
        .candidate_hit_attribute_stride_bytes = 8,
        .reserved = 0,
    };
}

CompletionPlaneLayout make_completion_layout_for_test(
    const vt_rt_global_consume_info &info)
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

CompletionField add_field(CompletionField base, uint32_t word)
{
    return static_cast<CompletionField>(static_cast<uint32_t>(base) + word);
}

void write_vec3(DriverFixture &fixture, uint64_t address, float x, float y,
                float z)
{
    fixture.store_u32(address + 0, float_bits(x));
    fixture.store_u32(address + 4, float_bits(y));
    fixture.store_u32(address + 8, float_bits(z));
}

FieldMajorRecord make_trace_record(uint64_t accel, uint32_t generation)
{
    FieldMajorRecord record = {};
    const auto field = [&](TraceField index, uint32_t value) {
        record.fields[static_cast<uint32_t>(index)] = value;
    };
    field(TraceField::TlasAddrLo, uint32_t(accel));
    field(TraceField::TlasAddrHi, uint32_t(accel >> 32));
    field(TraceField::CullMask, 0xff);
    field(TraceField::SbtOffset, 2);
    field(TraceField::SbtStride, 3);
    field(TraceField::DirectionZ, float_bits(1.0f));
    field(TraceField::Tmax, float_bits(100.0f));
    field(TraceField::PayloadLo, 0x34567000);
    field(TraceField::PayloadHi, 0x2);
    field(TraceField::CpsFrame, 0x1234);
    field(TraceField::ParentFrame, 0x0800);
    field(TraceField::ContinuationId, 23);
    field(TraceField::CpsStackSize, 96);
    field(TraceField::LaunchIdX, 8);
    field(TraceField::LaunchIdY, 9);
    field(TraceField::LaunchIdZ, 10);
    field(TraceField::PhaseGeneration, generation);
    field(TraceField::Depth, 3);
    field(TraceField::Ready, 1);
    return record;
}

void write_queue(DriverFixture &fixture, uint64_t queue, uint32_t generation,
                 const FieldMajorRecord &record)
{
    constexpr uint32_t capacity = 4;
    fixture.store_u32(queue + kQueueCapacityWord * sizeof(uint32_t), capacity);
    fixture.store_u32(queue + kQueueReserveTailWord * sizeof(uint32_t), 1);
    fixture.store_u32(queue + kQueueConsumeHeadWord * sizeof(uint32_t), 0);
    fixture.store_u32(queue + kQueueOverflowWord * sizeof(uint32_t), 0);
    fixture.store_u32(queue + kQueueGenerationWord * sizeof(uint32_t),
                      generation);
    const uint64_t stride = queue_field_stride_bytes(capacity);
    for (uint32_t field = 0; field < kTraceFieldCount; ++field) {
        fixture.store_u32(
            queue_field_address(queue, stride, static_cast<TraceField>(field), 0),
            record.fields[field]);
    }
}

void write_triangle_scene(DriverFixture &fixture, const TestLayout &layout,
                          uint64_t accel, uint64_t triangles, bool opaque)
{
    fixture.store_u32(accel + 0, bvh_magic);
    fixture.store_u32(accel + 4, bvh_version);
    fixture.store_u32(accel + 8, geometry_triangle_list);
    fixture.store_u32(accel + 12, 1);
    fixture.store_u32(accel + 16, uint32_t(triangles));
    fixture.store_u32(accel + 20, uint32_t(triangles >> 32));
    fixture.store_u32(accel + 24, 80);
    fixture.store_u32(accel + 28, uint32_t(layout.hit_sbt));
    fixture.store_u32(accel + 32, uint32_t(layout.hit_sbt >> 32));
    fixture.store_u32(accel + 36, 32);

    write_vec3(fixture, triangles + 0, -1.0f, -1.0f, 5.0f);
    write_vec3(fixture, triangles + 12, 1.0f, -1.0f, 5.0f);
    write_vec3(fixture, triangles + 24, 0.0f, 1.0f, 5.0f);
    fixture.store_u32(triangles + 36, 77);
    fixture.store_u32(triangles + 40, 11);
    fixture.store_u32(triangles + 44, 5);
    fixture.store_u32(triangles + 48, 4);
    fixture.store_u32(triangles + 52, 0xfe);
    fixture.store_u32(triangles + 56, opaque ? 1 : 0);

    fixture.store_u32(layout.hit_sbt + 6 * 96 + 4, 7);
}

void write_identity_transform(DriverFixture &fixture, uint64_t address)
{
    for (uint32_t row = 0; row < 3; ++row) {
        for (uint32_t column = 0; column < 4; ++column) {
            fixture.store_u32(address + 4 * (row * 4 + column),
                              float_bits(row == column ? 1.0f : 0.0f));
        }
    }
}

void write_procedural_scene(DriverFixture &fixture, const TestLayout &layout,
                            uint64_t tlas, uint64_t blas)
{
    const uint64_t instance = tlas + as_header_size;
    const uint64_t aabb = blas + as_header_size;

    fixture.store_u32(tlas + as_header_magic, as_magic);
    fixture.store_u32(tlas + as_header_version, as_version);
    fixture.store_u32(tlas + as_header_type, as_type_tlas);
    fixture.store_u32(tlas + as_header_root_node_ref,
                      uint32_t(instance - tlas) | node_instance);
    fixture.store_u32(instance + instance_blas_addr_lo, uint32_t(blas));
    fixture.store_u32(instance + instance_blas_addr_lo + sizeof(uint32_t),
                      uint32_t(blas >> 32));
    fixture.store_u32(instance + instance_mask, 0xff);
    fixture.store_u32(instance + instance_sbt_record_offset, 5);
    fixture.store_u32(instance + instance_instance_id, 13);
    write_identity_transform(fixture, instance + instance_object_to_world);
    write_identity_transform(fixture, instance + instance_world_to_object);

    fixture.store_u32(blas + as_header_magic, as_magic);
    fixture.store_u32(blas + as_header_version, as_version);
    fixture.store_u32(blas + as_header_type, as_type_blas);
    fixture.store_u32(blas + as_header_root_node_ref,
                      uint32_t(aabb - blas) | node_aabb);
    write_vec3(fixture, aabb + aabb_min, -1.0f, -1.0f, 4.0f);
    write_vec3(fixture, aabb + aabb_max, 1.0f, 1.0f, 6.0f);
    fixture.store_u32(aabb + aabb_primitive_id, 19);
    fixture.store_u32(aabb + aabb_geometry_id, 3);
    fixture.store_u32(aabb + aabb_sbt_record_offset, 0);
    fixture.store_u32(aabb + aabb_flags, 1);
    fixture.store_u32(aabb + aabb_primitive_addr_lo,
                      uint32_t(fixture.address(0x18000)));
    fixture.store_u32(aabb + aabb_primitive_addr_lo + sizeof(uint32_t), 0);

    fixture.store_u32(layout.hit_sbt + 16 * 96 + 4, 9);
}

vt_rt_resume_request get_one_request(vt_device_h device)
{
    uint32_t count = 0;
    assert(vt_rt_get_resume_requests(device, nullptr, 0, &count) == 0);
    assert(count == 1);
    vt_rt_resume_request request = {};
    assert(vt_rt_get_resume_requests(device, &request, 0, &count) == -2);
    assert(count == 1);
    assert(vt_rt_get_resume_requests(device, &request, 1, &count) == 0);
    assert(count == 1);
    return request;
}

void check_common_request(const vt_rt_resume_request &request)
{
    assert(request.ray_ref == 0);
    assert(request.payload_address == 0x234567000ull);
    assert(request.cps_frame == 0x1234);
    assert(request.cps_stack_size == 96);
    assert(request.continuation_id == 23);
    assert(request.launch_id_x == 8);
    assert(request.launch_id_y == 9);
    assert(request.launch_id_z == 10);
}

void check_any_hit_resume(DriverFixture &fixture, const TestLayout &layout)
{
    fixture.clear();
    constexpr uint32_t generation = 9;
    const uint64_t accel = fixture.address(kTriangleSceneOffset);
    const uint64_t triangles = fixture.address(kTriangleDataOffset);
    write_triangle_scene(fixture, layout, accel, triangles, false);
    write_queue(fixture, layout.queue, generation,
                make_trace_record(accel, generation));
    fixture.upload();

    vt_rt_global_consume_info info = make_consume_info(layout);
    uint32_t count = 0;
    const uint64_t ready_address = queue_field_address(
        layout.queue, queue_field_stride_bytes(info.capacity_rays),
        TraceField::Ready, 0);
    fixture.store_device_u32(ready_address, 0);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    fixture.store_device_u32(ready_address, 1);
    fixture.store_device_u32(
        layout.queue + kQueueReserveTailWord * sizeof(uint32_t), 2);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    assert(fixture.load_device_u32(
               layout.queue + kQueueConsumeHeadWord * sizeof(uint32_t)) == 0);
    fixture.store_device_u32(
        layout.queue + kQueueReserveTailWord * sizeof(uint32_t), 1);
    fixture.store_device_u32(
        layout.queue + kQueueOverflowWord * sizeof(uint32_t), 1);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    fixture.store_device_u32(
        layout.queue + kQueueOverflowWord * sizeof(uint32_t), 0);
    fixture.store_device_u32(
        layout.queue + kQueueReserveTailWord * sizeof(uint32_t),
        info.capacity_rays + 1);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    fixture.store_device_u32(
        layout.queue + kQueueReserveTailWord * sizeof(uint32_t), 1);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == 0);
    assert(count == 1);
    vt_rt_resume_request request = get_one_request(fixture.device());
    check_common_request(request);
    assert(request.completed_stage == VT_RT_COMPLETED_STAGE_ANY_HIT_CANDIDATE);
    assert(request.callback_group == 7);

    const uint32_t ref = request.ray_ref;
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    const uint32_t duplicates[] = {ref, ref};
    assert(vt_rt_resume_global_candidates(fixture.device(), &info, duplicates, 2,
                                          &count) == -1);
    assert(vt_rt_resume_global_intersections(fixture.device(), &info, &ref, 1,
                                             &count) == -1);
    vt_rt_global_consume_info mismatched = info;
    mismatched.completion_base += 128;
    assert(vt_rt_resume_global_candidates(fixture.device(), &mismatched, &ref, 1,
                                          &count) == -1);

    fixture.store_device_u32(
        layout.queue + kQueueGenerationWord * sizeof(uint32_t), generation + 1);
    assert(vt_rt_resume_global_candidates(fixture.device(), &info, &ref, 1,
                                          &count) == -1);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    fixture.store_device_u32(
        layout.queue + kQueueGenerationWord * sizeof(uint32_t), generation);

    assert(vt_rt_resume_global_candidates(fixture.device(), &info, &ref, 1,
                                          &count) == 0);
    assert(count == 1);
    request = get_one_request(fixture.device());
    check_common_request(request);
    assert(request.completed_stage == VT_RT_COMPLETED_STAGE_CLOSEST_HIT);
    assert(request.callback_group == 7);
    assert(vt_rt_resume_global_candidates(fixture.device(), &info, &ref, 1,
                                          &count) == -1);
}

void check_intersection_resume(DriverFixture &fixture, const TestLayout &layout)
{
    fixture.clear();
    constexpr uint32_t generation = 10;
    const uint64_t tlas = fixture.address(kTlasOffset);
    const uint64_t blas = fixture.address(kBlasOffset);
    write_procedural_scene(fixture, layout, tlas, blas);
    write_queue(fixture, layout.queue, generation,
                make_trace_record(tlas, generation));
    fixture.upload();

    vt_rt_global_consume_info info = make_consume_info(layout);
    uint32_t count = 0;
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == 0);
    assert(count == 1);
    vt_rt_resume_request request = get_one_request(fixture.device());
    check_common_request(request);
    assert(request.completed_stage ==
           VT_RT_COMPLETED_STAGE_INTERSECTION_CANDIDATE);
    assert(request.callback_group == 9);

    const uint32_t ref = request.ray_ref;
    assert(vt_rt_resume_global_candidates(fixture.device(), &info, &ref, 1,
                                          &count) == -1);
    const uint32_t duplicates[] = {ref, ref};
    assert(vt_rt_resume_global_intersections(fixture.device(), &info, duplicates,
                                             2, &count) == -1);

    const CompletionPlaneLayout completion =
        make_completion_layout_for_test(info);
    assert(fixture.load_device_u32(completion_field_address(
               completion,
               add_field(CompletionField::CandidateHitBase,
                         hit_record_sbt_index),
               ref)) == 16);
    const uint64_t shader_record = layout.hit_sbt + 16 * 96 + 32;
    assert(fixture.load_device_u32(completion_field_address(
               completion,
               add_field(CompletionField::CandidateHitBase,
                         hit_record_shader_record_ptr_lo),
               ref)) == uint32_t(shader_record));
    assert(fixture.load_device_u32(completion_field_address(
               completion,
               add_field(CompletionField::CandidateHitBase,
                         hit_record_shader_record_ptr_hi),
               ref)) == uint32_t(shader_record >> 32));
    for (uint32_t word = 0; word < kHitRecordWordCount; ++word) {
        const uint32_t value = fixture.load_device_u32(
            completion_field_address(
                completion, add_field(CompletionField::CandidateHitBase, word),
                ref));
        fixture.store_device_u32(
            completion_field_address(
                completion, add_field(CompletionField::CommittedHitBase, word),
                ref),
            value);
    }
    fixture.store_device_u32(
        completion_field_address(
            completion,
            add_field(CompletionField::CommittedHitBase, hit_record_hit_t), ref),
        float_bits(4.5f));
    fixture.store_device_u32(
        completion_field_address(
            completion,
            add_field(CompletionField::CommittedHitBase, hit_record_hit_kind),
            ref),
        3);
    fixture.store_device_u32(layout.candidate_attributes, float_bits(0.2f));
    fixture.store_device_u32(layout.candidate_attributes + 4,
                             float_bits(0.3f));
    fixture.store_device_u32(
        completion_field_address(
            completion,
            add_field(CompletionField::CandidateControlBase,
                      control_callback_decision),
            ref),
        callback_accept);

    assert(vt_rt_resume_global_intersections(fixture.device(), &info, &ref, 1,
                                             &count) == 0);
    assert(count == 1);
    request = get_one_request(fixture.device());
    check_common_request(request);
    assert(request.completed_stage == VT_RT_COMPLETED_STAGE_CLOSEST_HIT);
    assert(request.callback_group == 9);
    assert(fixture.load_device_u32(completion_field_address(
               completion,
               add_field(CompletionField::CommittedHitBase, hit_record_hit_t),
               ref)) == float_bits(4.5f));
}

void check_terminal_miss(DriverFixture &fixture, const TestLayout &layout)
{
    fixture.clear();
    constexpr uint32_t generation = 11;
    fixture.store_u32(layout.miss_sbt + 4, 5);
    write_queue(fixture, layout.queue, generation,
                make_trace_record(0, generation));
    fixture.upload();

    vt_rt_global_consume_info info = make_consume_info(layout);
    uint32_t count = 0;
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == 0);
    assert(count == 1);
    const vt_rt_resume_request request = get_one_request(fixture.device());
    check_common_request(request);
    assert(request.completed_stage == VT_RT_COMPLETED_STAGE_MISS);
    assert(request.callback_group == 5);
    assert(vt_rt_end_global(fixture.device(), &info) == 0);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);
    assert(count == 0);
    assert(vt_rt_end_global(fixture.device(), &info) == 0);
}

void check_session_abort_and_reuse(DriverFixture &fixture,
                                   const TestLayout &layout)
{
    fixture.clear();
    constexpr uint32_t first_generation = 12;
    const uint64_t accel = fixture.address(kTriangleSceneOffset);
    const uint64_t triangles = fixture.address(kTriangleDataOffset);
    write_triangle_scene(fixture, layout, accel, triangles, false);
    write_queue(fixture, layout.queue, first_generation,
                make_trace_record(accel, first_generation));
    fixture.upload();

    vt_rt_global_consume_info info = make_consume_info(layout);
    uint32_t count = 0;
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == 0);
    assert(count == 1);
    assert(get_one_request(fixture.device()).completed_stage ==
           VT_RT_COMPLETED_STAGE_ANY_HIT_CANDIDATE);

    vt_rt_global_consume_info mismatched = info;
    mismatched.completion_base += 128;
    assert(vt_rt_end_global(fixture.device(), &mismatched) == -1);
    assert(get_one_request(fixture.device()).completed_stage ==
           VT_RT_COMPLETED_STAGE_ANY_HIT_CANDIDATE);

    assert(vt_rt_end_global(fixture.device(), &info) == 0);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);
    assert(count == 0);

    constexpr uint32_t second_generation = 13;
    fixture.clear();
    write_triangle_scene(fixture, layout, accel, triangles, false);
    write_queue(fixture, layout.queue, second_generation,
                make_trace_record(accel, second_generation));
    fixture.upload();
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == 0);
    assert(count == 1);
    assert(vt_rt_end_global(fixture.device(), &info) == 0);
}

void check_device_copy_failures(DriverFixture &fixture)
{
    const uint32_t source = 0x12345678;
    uint32_t destination = 0xa5a5a5a5;
    const uint64_t unmapped = fixture.address(kAllocationSize + 0x1000);
    assert(vt_copy_to_dev(fixture.device(), unmapped, &source, sizeof(source),
                          0, 0) == -1);
    assert(vt_copy_from_dev(fixture.device(), unmapped, &destination,
                            sizeof(destination), 0, 0) == -1);
    assert(destination == 0xa5a5a5a5);

    const uint64_t crossing = fixture.address(kAllocationSize - 2);
    assert(vt_copy_to_dev(fixture.device(), crossing, &source, sizeof(source),
                          0, 0) == -1);
    assert(vt_copy_from_dev(fixture.device(), crossing, &destination,
                            sizeof(destination), 0, 0) == -1);
    assert(vt_copy_to_dev(fixture.device(), UINT64_MAX - 1, &source,
                          sizeof(source), 0, 0) == -1);
    assert(vt_copy_from_dev(fixture.device(), UINT64_MAX - 1, &destination,
                            sizeof(destination), 0, 0) == -1);
    assert(vt_copy_to_dev(fixture.device(), fixture.address(0), nullptr,
                          sizeof(source), 0, 0) == -1);
    assert(vt_copy_from_dev(fixture.device(), fixture.address(0), nullptr,
                            sizeof(destination), 0, 0) == -1);
}

void check_reusable_device_address_ranges()
{
    vt_device_h device = nullptr;
    assert(vt_dev_open(&device) == 0);

    uint64_t first = 0;
    uint64_t middle = 0;
    uint64_t last = 0;
    assert(vt_buf_alloc(device, 1, &first, 0, 0, 0) == 0);
    assert(vt_buf_alloc(device, 5000, &middle, 0, 0, 0) == 0);
    assert(vt_buf_alloc(device, 1, &last, 0, 0, 0) == 0);
    assert((first & 4095) == 0);
    assert((middle & 4095) == 0);
    assert((last & 4095) == 0);
    assert(first < middle && middle < last);

    uint64_t released_middle = middle;
    assert(vt_one_buf_free(device, 5000, &released_middle, 0, 0) == 0);
    uint64_t reused = 0;
    assert(vt_buf_alloc(device, 5000, &reused, 0, 0, 0) == 0);
    assert(reused == middle);

    assert(vt_one_buf_free(device, 5000, &reused, 0, 0) == 0);
    assert(vt_one_buf_free(device, 1, &last, 0, 0) == 0);
    assert(vt_one_buf_free(device, 1, &first, 0, 0) == 0);
    assert(vt_one_buf_free(device, 1, &first, 0, 0) == -1);

    uint64_t overflow = 0;
    assert(vt_buf_alloc(device, UINT64_MAX, &overflow, 0, 0, 0) == -1);
    assert(vt_dev_close(device) == 0);
}

void check_invalid_rt_data_addresses(DriverFixture &fixture,
                                     const TestLayout &layout)
{
    uint32_t count = 99;
    vt_rt_global_consume_info info = make_consume_info(layout);

    fixture.clear();
    constexpr uint32_t invalid_as_generation = 14;
    write_queue(
        fixture, layout.queue, invalid_as_generation,
        make_trace_record(fixture.address(kAllocationSize + 0x1000),
                          invalid_as_generation));
    fixture.upload();
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);

    fixture.clear();
    constexpr uint32_t invalid_sbt_generation = 15;
    write_queue(fixture, layout.queue, invalid_sbt_generation,
                make_trace_record(0, invalid_sbt_generation));
    fixture.upload();
    info = make_consume_info(layout);
    info.miss_sbt_base = fixture.address(kAllocationSize + 0x2000);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);

    fixture.clear();
    constexpr uint32_t invalid_completion_generation = 16;
    write_queue(fixture, layout.queue, invalid_completion_generation,
                make_trace_record(0, invalid_completion_generation));
    fixture.upload();
    info = make_consume_info(layout);
    info.completion_base = fixture.address(kAllocationSize + 0x3000);
    assert(vt_rt_consume_global(fixture.device(), &info, &count) == -1);
    assert(count == 0);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);
}

} // namespace

int main()
{
    uint32_t count = 99;
    assert(vt_rt_consume_global(nullptr, nullptr, &count) == -1);
    assert(count == 0);
    assert(vt_rt_end_global(nullptr, nullptr) == -1);

    check_reusable_device_address_ranges();

    DriverFixture fixture;
    const TestLayout layout = make_layout(fixture);
    assert(vt_rt_get_resume_requests(fixture.device(), nullptr, 0, &count) == -1);
    assert(count == 0);

    vt_rt_global_consume_info invalid = make_consume_info(layout);
    invalid.reserved = 1;
    assert(vt_rt_consume_global(fixture.device(), &invalid, &count) == -1);
    assert(count == 0);
    invalid = make_consume_info(layout);
    invalid.max_batch_rays = invalid.capacity_rays + 1;
    assert(vt_rt_consume_global(fixture.device(), &invalid, &count) == -1);
    invalid = make_consume_info(layout);
    invalid.queue_base += sizeof(uint32_t);
    assert(vt_rt_consume_global(fixture.device(), &invalid, &count) == -1);
    invalid = make_consume_info(layout);
    invalid.completion_base = invalid.queue_base;
    assert(vt_rt_consume_global(fixture.device(), &invalid, &count) == -1);

    check_device_copy_failures(fixture);
    check_any_hit_resume(fixture, layout);
    check_intersection_resume(fixture, layout);
    check_terminal_miss(fixture, layout);
    check_session_abort_and_reuse(fixture, layout);
    check_invalid_rt_data_addresses(fixture, layout);
    return 0;
}
