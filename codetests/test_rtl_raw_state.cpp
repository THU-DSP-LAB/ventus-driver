#include "rtl_raw_state.hpp"

#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
const std::filesystem::path kRoot = "/tmp/ventus-rtl-raw-state-test";

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

void clear_environment() {
    unsetenv("VENTUS_RTL_RAW_STATE_SAVE");
    unsetenv("VENTUS_RTL_RAW_STATE_RESTORE");
}

int save_fake_simulator(const std::filesystem::path& directory) {
    std::filesystem::create_directories(directory);
    std::ofstream state(directory / "state.bin", std::ios::binary);
    state << "fake-state\n";
    state.close();
    std::ofstream manifest(directory / "manifest.json");
    manifest << "{\"schema_version\":2,\"status\":\"COMPLETE\"}\n";
    manifest.close();
    std::ofstream complete(directory / "COMPLETE");
    complete << "complete\n";
    return state && manifest && complete ? 0 : -1;
}

std::vector<ventus::rtl_state::AllocationRecord> allocations() {
    return {
        {0x90000000, 64, 4096, 1, 0, 0, 0},
        {0x90001000, 128, 4096, 0x40000000, 2, 3, 1},
    };
}
} // namespace

int main() {
    using ventus::rtl_state::RawState;

    clear_environment();
    std::filesystem::remove_all(kRoot);
    std::filesystem::create_directories(kRoot);
    std::string error;
    const auto snapshot = kRoot / "raw";
    RtlBufferAllocator allocator;
    require(allocator.alloc(64) == 0x90000000, "first allocator setup failed");
    require(allocator.alloc(128) == 0x90001000, "second allocator setup failed");
    require(
        RawState::save(
            snapshot, allocations(), allocator.snapshot(),
            save_fake_simulator, error),
        "raw state save failed");
    require(
        std::filesystem::is_regular_file(snapshot / "driver-state.bin")
            && std::filesystem::is_regular_file(
                snapshot / "simulator" / "COMPLETE"),
        "raw state components are missing");
    require(
        !std::filesystem::exists(snapshot / "manifest.json")
            && !std::filesystem::exists(snapshot / "COMPLETE"),
        "driver published framework commit metadata");

    setenv("VENTUS_RTL_RAW_STATE_RESTORE", snapshot.c_str(), 1);
    RawState restore;
    require(
        restore.configure_restore_from_env(error),
        "raw restore configuration failed");
    require(
        std::getenv("VENTUS_RTL_RAW_STATE_RESTORE") == nullptr,
        "one-shot restore request remained in the environment");
    require(restore.restoring(), "raw restore mode was not enabled");
    require(
        restore.expected_allocations().size() == 2,
        "raw allocation state was not loaded");
    const auto& second = restore.expected_allocations()[1];
    require(
        second.address == 0x90001000 && second.requested_size == 128
            && second.allocated_size == 4096
            && second.buffer_type == 0x40000000 && second.task_id == 2
            && second.kernel_id == 3 && second.sequence == 1,
        "raw allocation record changed during round trip");
    RtlBufferAllocator resumed_allocator;
    require(
        resumed_allocator.restore_state(restore.allocator_state()),
        "raw allocator state was not restored");
    require(
        allocator.alloc(4096) == resumed_allocator.alloc(4096),
        "raw allocator state changed the next address");
    require(
        restore.resume_simulator_directory() == snapshot / "simulator",
        "raw simulator restore path changed");

    {
        std::fstream state(
            snapshot / "driver-state.bin",
            std::ios::binary | std::ios::in | std::ios::out);
        const char version_one[4] = {1, 0, 0, 0};
        state.seekp(8);
        state.write(version_one, sizeof(version_one));
    }
    setenv("VENTUS_RTL_RAW_STATE_RESTORE", snapshot.c_str(), 1);
    RawState old_version_restore;
    require(
        !old_version_restore.configure_restore_from_env(error),
        "raw state schema v1 was accepted");
    require(
        std::getenv("VENTUS_RTL_RAW_STATE_RESTORE") == nullptr,
        "rejected restore request remained in the environment");
    {
        std::fstream state(
            snapshot / "driver-state.bin",
            std::ios::binary | std::ios::in | std::ios::out);
        const char version_two[4] = {2, 0, 0, 0};
        state.seekp(8);
        state.write(version_two, sizeof(version_two));
    }

    clear_environment();
    bool requested = true;
    std::filesystem::path requested_path = "stale";
    require(
        RawState::consume_save_request(requested, requested_path, error)
            && !requested && requested_path.empty(),
        "missing save request was not handled");
    const auto requested_target = kRoot / "requested";
    setenv("VENTUS_RTL_RAW_STATE_SAVE", requested_target.c_str(), 1);
    require(
        RawState::consume_save_request(requested, requested_path, error)
            && requested && requested_path == requested_target,
        "one-shot save request was not consumed");
    require(
        std::getenv("VENTUS_RTL_RAW_STATE_SAVE") == nullptr,
        "one-shot save request remained in the environment");

    {
        std::ofstream corrupt(
            snapshot / "driver-state.bin", std::ios::binary | std::ios::app);
        corrupt << 'x';
    }
    setenv("VENTUS_RTL_RAW_STATE_RESTORE", snapshot.c_str(), 1);
    RawState corrupt_restore;
    require(
        !corrupt_restore.configure_restore_from_env(error),
        "corrupt raw allocation state was accepted");
    require(
        std::getenv("VENTUS_RTL_RAW_STATE_RESTORE") == nullptr,
        "corrupt restore request remained in the environment");

    clear_environment();
    std::filesystem::remove_all(kRoot);
    std::cout << "rtl raw state tests passed\n";
    return 0;
}
