#pragma once

#include "rtl_buffer_allocator.hpp"
#include "rtl_state_contract.hpp"

#include <filesystem>
#include <functional>
#include <string>
#include <vector>

namespace ventus {
namespace rtl_state {

class RawState {
public:
    using SaveSimulator =
        std::function<int(const std::filesystem::path& directory)>;

    bool configure_restore_from_env(std::string& error);

    bool restoring() const { return restoring_; }
    std::filesystem::path resume_simulator_directory() const {
        return resume_directory_ / "simulator";
    }
    const std::vector<AllocationRecord>& expected_allocations() const {
        return expected_allocations_;
    }
    const RtlBufferAllocator::State& allocator_state() const {
        return allocator_state_;
    }

    static bool consume_save_request(
        bool& requested, std::filesystem::path& directory,
        std::string& error);
    static bool save(
        const std::filesystem::path& directory,
        const std::vector<AllocationRecord>& allocations,
        const RtlBufferAllocator::State& allocator_state,
        const SaveSimulator& save_simulator,
        std::string& error);

private:
    bool restoring_ = false;
    std::filesystem::path resume_directory_;
    std::vector<AllocationRecord> expected_allocations_;
    RtlBufferAllocator::State allocator_state_;
};

} // namespace rtl_state
} // namespace ventus
