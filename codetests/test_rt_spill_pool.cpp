#include "rt_spill_pool.hpp"
#include "rtl_buffer_allocator.hpp"
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
    std::puts("PASS driver-private RT spill allocation, partitioning, reuse and release");
}
