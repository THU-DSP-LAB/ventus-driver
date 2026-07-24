#include "rtl_buffer_allocator.hpp"

#include <cstdint>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
} // namespace

int main() {
    RtlBufferAllocator allocator;
    const uint64_t first = allocator.alloc(1);
    const uint64_t second = allocator.alloc(4097);
    require(first == RtlBufferAllocator::kBaseAddr, "unexpected first allocation");
    require(
        second == RtlBufferAllocator::kBaseAddr + RtlBufferAllocator::kPageSize,
        "unexpected second allocation");

    const auto active = allocator.active_allocations();
    require(active.size() == 2, "unexpected active allocation count");
    require(active[0].address == first, "first allocation order changed");
    require(active[0].requested_size == 1, "first requested size changed");
    require(
        active[0].allocated_size == RtlBufferAllocator::kPageSize,
        "first allocated size changed");
    require(active[1].address == second, "second allocation order changed");
    require(active[1].requested_size == 4097, "second requested size changed");
    require(
        active[1].allocated_size == 2 * RtlBufferAllocator::kPageSize,
        "second allocated size changed");
    require(active[0].sequence < active[1].sequence, "allocation sequence is not monotonic");

    require(!allocator.free(first, 2), "wrong-size free was accepted");
    require(allocator.free(first, 1), "valid free was rejected");
    require(!allocator.free(first, 1), "double free was accepted");
    const uint64_t reused = allocator.alloc(4096);
    require(reused == first, "freed page was not reused");

    const auto after_reuse = allocator.active_allocations();
    require(after_reuse.size() == 2, "unexpected count after reuse");
    require(after_reuse[0].address == second, "old allocation order changed");
    require(after_reuse[1].address == reused, "reused allocation order changed");
    require(
        after_reuse[0].sequence < after_reuse[1].sequence,
        "reused allocation sequence is not monotonic");

    RtlBufferAllocator restored;
    require(
        restored.restore_allocations(active),
        "active allocation replay was rejected");
    const auto replayed = restored.active_allocations();
    require(replayed.size() == active.size(), "allocation replay count changed");
    require(
        replayed[0].address == active[0].address
            && replayed[1].address == active[1].address,
        "allocation replay changed an address");
    auto invalid = active;
    invalid[1].address += RtlBufferAllocator::kPageSize;
    require(
        !restored.restore_allocations(invalid),
        "allocation replay accepted a wrong address");
    require(
        restored.active_allocations().empty(),
        "failed allocation replay retained reservations");

    allocator.reset();
    require(allocator.active_allocations().empty(), "reset retained allocations");
    require(
        allocator.alloc(1) == RtlBufferAllocator::kBaseAddr,
        "reset changed deterministic base address");
    std::cout << "rtl buffer allocator tests passed\n";
    return 0;
}
