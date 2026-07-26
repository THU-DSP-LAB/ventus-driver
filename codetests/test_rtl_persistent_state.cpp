#include "rtl_persistent_state.hpp"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <stdexcept>
#include <string>
#include <unistd.h>

namespace {
const std::filesystem::path kRoot = "/tmp/ventus-rtl-state-manager-test";
constexpr const char* kRunId = "0123456789abcdef0123456789abcdef";

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

void clear_environment() {
    unsetenv("VENTUS_RTL_STATE_DIR");
    unsetenv("VENTUS_RTL_STATE_INTERVAL");
    unsetenv("VENTUS_RTL_STATE_RETAIN");
    unsetenv("VENTUS_RTL_STATE_RESUME");
    unsetenv("VENTUS_RTL_STATE_RUN_ID");
    unsetenv("VENTUS_RTL_STATE_GRAPH_DISPATCH_BASE");
    unsetenv("VENTUS_RTL_STATE_FORCE_SAVE_FAILURE");
}

void configure_capture_environment(
    const std::filesystem::path& root, bool force_failure = false,
    uint64_t graph_dispatch_base = 0) {
    clear_environment();
    setenv("VENTUS_RTL_STATE_DIR", root.c_str(), 1);
    setenv("VENTUS_RTL_STATE_INTERVAL", "1", 1);
    setenv("VENTUS_RTL_STATE_RETAIN", "2", 1);
    setenv("VENTUS_RTL_STATE_RUN_ID", kRunId, 1);
    const std::string graph_base = std::to_string(graph_dispatch_base);
    setenv(
        "VENTUS_RTL_STATE_GRAPH_DISPATCH_BASE", graph_base.c_str(), 1);
    if (force_failure) {
        setenv("VENTUS_RTL_STATE_FORCE_SAVE_FAILURE", "true", 1);
    }
}

int save_fake_simulator(const std::filesystem::path& directory) {
    std::filesystem::create_directories(directory);
    std::ofstream state(directory / "state.bin", std::ios::binary);
    state << "fake-state\n";
    state.close();
    std::ofstream manifest(directory / "manifest.json");
    manifest << "{\"schema_version\":1,\"status\":\"COMPLETE\"}\n";
    manifest.close();
    std::ofstream complete(directory / "COMPLETE");
    complete << "complete\n";
    return state && manifest && complete ? 0 : -1;
}

std::vector<ventus::rtl_state::AllocationRecord> allocations() {
    return {
        {0x90000000, 64, 4096, 1, 0, 0, 0},
        {0x90001000, 128, 4096, 0, 0, 0, 1},
    };
}

std::vector<ventus::rtl_state::ImmutableRegion> immutable_regions() {
    return {
        {0x80000000, 16, std::string(64, 'a')},
    };
}
} // namespace

int main() {
    using ventus::rtl_state::PersistentState;

    std::filesystem::remove_all(kRoot);
    configure_capture_environment(kRoot);
    PersistentState capture;
    std::string error;
    require(capture.configure_from_env(error), "capture configuration failed");
    for (uint64_t dispatch = 1; dispatch <= 3; ++dispatch) {
        capture.note_kernel_complete();
        require(capture.pending_save(), "dispatch did not request a state save");
        require(
            capture.publish_pending(
                100 + dispatch, allocations(), immutable_regions(),
                save_fake_simulator, error),
            "state publication failed");
    }
    require(
        !std::filesystem::exists(kRoot / "dispatch-000001"),
        "retention kept an obsolete snapshot");
    require(
        std::filesystem::exists(kRoot / "dispatch-000002" / "COMPLETE")
            && std::filesystem::exists(kRoot / "dispatch-000003" / "COMPLETE"),
        "retention removed a current snapshot");
    require(
        std::filesystem::exists(kRoot / "latest.json"),
        "latest index was not published");

    const auto resumed_capture_root = kRoot / "graph-base";
    configure_capture_environment(resumed_capture_root, false, 16);
    PersistentState resumed_capture;
    require(
        resumed_capture.configure_from_env(error),
        "graph-base capture configuration failed");
    require(
        resumed_capture.graph_dispatch_base() == 16
            && resumed_capture.completed_dispatches() == 16
            && resumed_capture.local_completed_dispatches() == 0,
        "graph-base capture did not initialize global dispatch numbering");
    resumed_capture.note_kernel_complete();
    require(
        resumed_capture.publish_pending(
            116, allocations(), immutable_regions(), save_fake_simulator,
            error),
        "graph-base state publication failed");
    require(
        std::filesystem::exists(
            resumed_capture_root / "dispatch-000017" / "COMPLETE"),
        "graph-base capture used a local snapshot ordinal");
    nlohmann::json resumed_manifest;
    {
        std::ifstream input(
            resumed_capture_root / "dispatch-000017" / "manifest.json");
        input >> resumed_manifest;
    }
    require(
        resumed_manifest.at("graph_dispatch_base") == 16
            && resumed_manifest.at("local_completed_dispatches") == 1
            && resumed_manifest.at("completed_dispatches") == 17,
        "graph-base manifest counters are inconsistent");

    clear_environment();
    setenv(
        "VENTUS_RTL_STATE_RESUME",
        (kRoot / "dispatch-000003").c_str(), 1);
    PersistentState restore;
    require(restore.configure_from_env(error), "resume configuration failed");
    require(restore.restoring(), "resume mode was not enabled");
    require(
        restore.completed_dispatches() == 3,
        "resume dispatch ordinal was not restored");
    require(
        restore.graph_dispatch_base() == 3
            && restore.local_completed_dispatches() == 0,
        "resume did not start a new local dispatch suffix");
    require(
        restore.expected_allocations().size() == 2,
        "resume allocation contract was not loaded");
    require(
        restore.expected_immutable_regions().size() == 1,
        "resume immutable contract was not loaded");
    require(
        restore.resume_simulator_directory()
            == kRoot / "dispatch-000003" / "simulator",
        "resume simulator path changed");

    {
        std::ofstream corrupt(
            kRoot / "dispatch-000003" / "driver-allocations.json",
            std::ios::app);
        corrupt << 'x';
    }
    PersistentState corrupt_restore;
    require(
        !corrupt_restore.configure_from_env(error),
        "corrupt allocation contract was accepted");

    const auto failure_root = kRoot / "forced-failure";
    configure_capture_environment(failure_root, true);
    PersistentState forced;
    require(forced.configure_from_env(error), "forced configuration failed");
    forced.note_kernel_complete();
    require(
        !forced.publish_pending(
            200, allocations(), immutable_regions(), save_fake_simulator,
            error),
        "forced save failure was ignored");
    const auto partial = failure_root
        / ("dispatch-000001.partial-" + std::to_string(getpid()));
    require(
        std::filesystem::exists(partial / "simulator" / "COMPLETE"),
        "forced failure did not retain simulator evidence");
    require(
        !std::filesystem::exists(partial / "COMPLETE"),
        "forced failure published an outer COMPLETE marker");

    clear_environment();
    std::filesystem::remove_all(kRoot);
    std::cout << "rtl persistent state tests passed\n";
    return 0;
}
