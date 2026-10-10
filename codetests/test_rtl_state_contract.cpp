#include "rtl_state_contract.hpp"

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

ventus::rtl_state::AllocationRecord allocation(
    uint64_t address, uint64_t size, uint64_t sequence) {
    return {address, size, 4096, 0, 0, 0, sequence};
}
} // namespace

int main() {
    using ventus::rtl_state::AllocationContract;

    AllocationContract capture;
    std::string error;
    require(
        capture.record_alloc(0x90000000, 64, 4096, 0, 0, 0, error),
        "capture allocation failed");
    require(
        capture.record_alloc(0x90001000, 128, 4096, 1, 0, 0, error),
        "second capture allocation failed");
    require(
        !capture.record_free(0x90000000, 32, error),
        "wrong-size contract free was accepted");
    require(
        capture.record_free(0x90000000, 64, error),
        "capture free failed");
    require(capture.next_sequence() == 2, "capture next sequence changed");
    const auto expected = capture.active_allocations();
    require(expected.size() == 1, "capture active contract has the wrong size");
    ventus::rtl_state::AllocationRecord active;
    require(
        capture.find_allocation(0x90001000, active),
        "active allocation lookup failed");
    require(active.sequence == expected[0].sequence, "active allocation lookup changed identity");
    require(
        !capture.find_allocation(0x90000000, active),
        "freed allocation remained discoverable");

    AllocationContract restore;
    require(
        restore.begin_restore(expected, capture.next_sequence(), error),
        "restore contract was rejected");
    require(restore.compare_only(), "restore did not enter compare-only mode");
    require(
        !restore.record_alloc(0x90001000, 127, 4096, 1, 0, 0, error),
        "mismatched restore allocation was accepted");
    require(restore.expected_cursor() == 0, "mismatch consumed an expected allocation");
    require(
        restore.record_alloc(0x90001000, 128, 4096, 1, 0, 0, error),
        "matching restore allocation was rejected");
    require(
        !restore.record_alloc(0x90002000, 64, 4096, 0, 0, 0, error),
        "extra allocation was accepted before rebind");
    require(restore.finish_rebind(error), "complete rebind was rejected");
    require(restore.rebound(), "restore did not leave compare-only mode");
    require(
        restore.record_alloc(0x90002000, 64, 4096, 0, 0, 0, error),
        "post-rebind temporary allocation was rejected");

    AllocationContract incomplete;
    const std::vector<ventus::rtl_state::AllocationRecord> two = {
        allocation(0x90000000, 64, 0),
        allocation(0x90001000, 64, 1),
    };
    require(incomplete.begin_restore(two, error), "two-entry restore was rejected");
    require(
        incomplete.record_alloc(0x90000000, 64, 4096, 0, 0, 0, error),
        "first restore allocation failed");
    require(!incomplete.finish_rebind(error), "incomplete rebind was accepted");
    require(
        !incomplete.record_free(0x90000000, 64, error),
        "free was accepted during compare-only rebind");

    AllocationContract reordered;
    const std::vector<ventus::rtl_state::AllocationRecord> reordered_expected = {
        allocation(0x90000000, 64, 0),
        allocation(0x90001000, 128, 1),
        allocation(0x90002000, 256, 2),
    };
    require(
        reordered.begin_restore(reordered_expected, error),
        "reordered restore contract was rejected");
    ventus::rtl_state::AllocationRecord claimed;
    require(
        reordered.claim_restore_allocation(64, 0, 0, 0, claimed, error)
            && claimed.address == 0x90000000,
        "first reordered allocation claim failed");
    require(
        reordered.claim_restore_allocation(256, 0, 0, 0, claimed, error)
            && claimed.address == 0x90002000,
        "out-of-order allocation claim failed");
    require(
        !reordered.finish_rebind(error),
        "strict rebind accepted an unbound allocation");

    std::cout << "rtl state contract tests passed\n";
    return 0;
}
