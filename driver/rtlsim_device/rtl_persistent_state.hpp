#pragma once

#include "rtl_state_contract.hpp"

#include <cstdint>
#include <filesystem>
#include <functional>
#include <string>
#include <vector>

namespace ventus {
namespace rtl_state {

struct ImmutableRegion {
    uint64_t address = 0;
    uint64_t size = 0;
    std::string sha256;
};

class PersistentState {
public:
    using SaveSimulator =
        std::function<int(const std::filesystem::path& directory)>;

    bool configure_from_env(std::string& error);
    void note_kernel_complete();

    bool capture_enabled() const { return capture_enabled_; }
    bool restoring() const { return restoring_; }
    bool pending_save() const { return pending_save_; }
    bool force_save_failure() const { return force_save_failure_; }
    uint64_t graph_dispatch_base() const { return graph_dispatch_base_; }
    uint64_t local_completed_dispatches() const {
        return local_completed_dispatches_;
    }
    uint64_t completed_dispatches() const { return completed_dispatches_; }
    const std::filesystem::path& resume_simulator_directory() const {
        return resume_simulator_directory_;
    }
    const std::vector<AllocationRecord>& expected_allocations() const {
        return expected_allocations_;
    }
    const std::vector<ImmutableRegion>& expected_immutable_regions() const {
        return expected_immutable_regions_;
    }

    bool publish_pending(
        uint64_t saved_time,
        const std::vector<AllocationRecord>& allocations,
        const std::vector<ImmutableRegion>& immutable_regions,
        const SaveSimulator& save_simulator,
        std::string& error);

    static std::string sha256_bytes(const void* data, size_t size);

private:
    bool load_resume(const std::filesystem::path& directory, std::string& error);
    bool prune_snapshots(std::string& error) const;

    bool capture_enabled_ = false;
    bool restoring_ = false;
    bool pending_save_ = false;
    bool force_save_failure_ = false;
    uint64_t interval_ = 1;
    uint64_t retain_ = 2;
    uint64_t graph_dispatch_base_ = 0;
    uint64_t local_completed_dispatches_ = 0;
    uint64_t completed_dispatches_ = 0;
    std::string run_id_;
    std::filesystem::path state_root_;
    std::filesystem::path resume_simulator_directory_;
    std::vector<AllocationRecord> expected_allocations_;
    std::vector<ImmutableRegion> expected_immutable_regions_;
};

} // namespace rtl_state
} // namespace ventus
