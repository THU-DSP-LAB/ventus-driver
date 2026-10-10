#include "rt_spill_pool.hpp"
#include "rtl_buffer_allocator.hpp"
#include "rtl_state_contract.hpp"
#ifdef NDEBUG
#undef NDEBUG // Checks (including allocation calls) must run in release tests.
#endif
#include <cassert>
#include <cstdio>

struct FailingAllocator {
    uint64_t alloc(uint64_t) { return 0; }
    bool free(uint64_t, uint64_t) { assert(false); return false; }
};

int main() {
    static_assert(RtSpillPool::kSpillBytes == 96 * 1024, "fixed spill capacity");
    static_assert(RtSpillPool::kCoreStride == 96 * 1024, "fixed slots, no ring");
    RtlBufferAllocator allocator;
    RtSpillPool pool;
    assert(!pool.prepare_dispatch(allocator, 0));
    assert(pool.prepare_dispatch(allocator, 2));
    const uint64_t base = pool.spill_base();
    assert(base && base % 128 == 0);
    assert(pool.lane_pointer(0, 0, 0) == base);
    assert(pool.lane_pointer(1, 7, 31) + 384 == base + 2 * RtSpillPool::kCoreStride);
    assert(!pool.lane_pointer(2, 0, 0));
    assert(!pool.lane_pointer(0, 8, 0));
    assert(!pool.lane_pointer(0, 0, 32));
    assert(pool.epoch() == 1);
    const uint64_t parent_pointer = pool.lane_pointer(1, 5, 29);
    assert(pool.prepare_dispatch(allocator, 2));
    assert(pool.spill_base() == base && pool.epoch() == 2);
    assert(pool.lane_pointer(1, 5, 29) == parent_pointer);
    assert(!pool.prepare_dispatch(allocator, 1));
    assert(pool.epoch() == 2);
    pool.release(allocator);
    assert(!pool.spill_base() && !pool.lane_pointer(0, 0, 0) && !pool.epoch());
    assert(pool.prepare_dispatch(allocator, 2));
    assert(pool.epoch() == 1);
    pool.release(allocator);
    FailingAllocator failing;
    assert(!pool.prepare_dispatch(failing, 2));
    assert(!pool.spill_base() && !pool.epoch());

    // Device-open registers hidden storage first. Restore claims it before
    // replaying application allocations, then closes the rebind contract.
    assert(pool.prepare_dispatch(allocator, 2));
    RtlBufferAllocator::Allocation hidden;
    assert(allocator.find_allocation(pool.spill_base(), hidden));
    const uint64_t application = allocator.alloc(64);
    RtlBufferAllocator::Allocation app;
    assert(allocator.find_allocation(application, app));
    ventus::rtl_state::AllocationContract captured;
    std::string error;
    assert(captured.record_alloc(pool.spill_base(), hidden.requested_size,
        hidden.allocated_size, 0, 0, 0, error));
    assert(captured.record_alloc(application, app.requested_size,
        app.allocated_size, 0, 0, 0, error));
    ventus::rtl_state::AllocationContract restored;
    assert(restored.begin_restore(captured.active_allocations(),
        captured.next_sequence(), error));
    ventus::rtl_state::AllocationRecord claimed;
    assert(restored.claim_restore_allocation(hidden.requested_size,
        0, 0, 0, claimed, error));
    assert(claimed.address == pool.spill_base());
    assert(!restored.finish_rebind(error));
    assert(restored.claim_restore_allocation(app.requested_size,
        0, 0, 0, claimed, error));
    assert(claimed.address == application && restored.finish_rebind(error));
    pool.release(allocator);
    assert(allocator.free(application, app.requested_size));
    std::puts("PASS driver-private RT spill allocation, partitioning, reuse and release");
}
