#include "rtl_raw_state.hpp"

#include <cerrno>
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <limits>
#include <stdexcept>
#include <string>
#include <system_error>
#include <fcntl.h>
#include <unistd.h>

namespace ventus {
namespace rtl_state {
namespace {
constexpr uint64_t kMagic = 0x5654524157535441ull;
constexpr uint32_t kVersion = 2;
constexpr uint32_t kRecordBytes = 56;
constexpr uint64_t kMaximumAllocations = 1ull << 20;
constexpr uint64_t kMaximumFreeBlocks = 1ull << 20;
constexpr const char* kDriverStateFilename = "driver-state.bin";
constexpr const char* kSimulatorDirectory = "simulator";
constexpr const char* kRestoreEnvironment =
    "VENTUS_RTL_RAW_STATE_RESTORE";
constexpr const char* kSaveEnvironment = "VENTUS_RTL_RAW_STATE_SAVE";

static_assert(sizeof(int) == sizeof(int32_t), "buffer type requires 32-bit int");

bool fsync_path(const std::filesystem::path& path, bool directory) {
    const int flags = directory ? O_RDONLY | O_DIRECTORY : O_RDONLY;
    const int fd = open(path.c_str(), flags);
    if (fd < 0) return false;
    const bool success = fsync(fd) == 0;
    close(fd);
    return success;
}

bool is_regular_nosymlink(const std::filesystem::path& path) {
    std::error_code error;
    return std::filesystem::symlink_status(path, error).type()
        == std::filesystem::file_type::regular && !error;
}

bool is_directory_nosymlink(const std::filesystem::path& path) {
    std::error_code error;
    return std::filesystem::symlink_status(path, error).type()
        == std::filesystem::file_type::directory && !error;
}

void write_u32(std::ostream& output, uint32_t value) {
    for (unsigned int shift = 0; shift < 32; shift += 8) {
        output.put(static_cast<char>((value >> shift) & 0xffU));
    }
}

void write_u64(std::ostream& output, uint64_t value) {
    for (unsigned int shift = 0; shift < 64; shift += 8) {
        output.put(static_cast<char>((value >> shift) & 0xffU));
    }
}

bool read_u32(std::istream& input, uint32_t& value) {
    value = 0;
    for (unsigned int shift = 0; shift < 32; shift += 8) {
        const int byte = input.get();
        if (byte == std::char_traits<char>::eof()) return false;
        value |= static_cast<uint32_t>(static_cast<unsigned char>(byte))
            << shift;
    }
    return true;
}

bool read_u64(std::istream& input, uint64_t& value) {
    value = 0;
    for (unsigned int shift = 0; shift < 64; shift += 8) {
        const int byte = input.get();
        if (byte == std::char_traits<char>::eof()) return false;
        value |= static_cast<uint64_t>(static_cast<unsigned char>(byte))
            << shift;
    }
    return true;
}

bool allocation_states_match(
    const std::vector<AllocationRecord>& allocations,
    const RtlBufferAllocator::State& allocator_state) {
    if (allocations.size() != allocator_state.allocations.size()) {
        return false;
    }
    for (size_t index = 0; index < allocations.size(); ++index) {
        const auto& contract = allocations[index];
        const auto& allocator = allocator_state.allocations[index];
        if (contract.address != allocator.address
            || contract.requested_size != allocator.requested_size
            || contract.allocated_size != allocator.allocated_size
            || contract.sequence != allocator.sequence) {
            return false;
        }
    }
    return true;
}

bool write_driver_state(
    const std::filesystem::path& path,
    const std::vector<AllocationRecord>& allocations,
    const RtlBufferAllocator::State& allocator_state) {
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    if (!output) return false;
    write_u64(output, kMagic);
    write_u32(output, kVersion);
    write_u32(output, kRecordBytes);
    write_u64(output, allocations.size());
    write_u64(output, allocator_state.used_pages);
    write_u64(output, allocator_state.next_sequence);
    write_u32(output, allocator_state.free_lists.size());
    write_u32(output, 0);
    for (const auto& allocation : allocations) {
        write_u64(output, allocation.address);
        write_u64(output, allocation.requested_size);
        write_u64(output, allocation.allocated_size);
        write_u32(
            output,
            static_cast<uint32_t>(static_cast<int32_t>(allocation.buffer_type)));
        write_u32(output, 0);
        write_u64(output, allocation.task_id);
        write_u64(output, allocation.kernel_id);
        write_u64(output, allocation.sequence);
    }
    for (const auto& free_list : allocator_state.free_lists) {
        write_u64(output, free_list.size());
        for (const uint32_t block : free_list) write_u32(output, block);
    }
    output.close();
    return static_cast<bool>(output) && fsync_path(path, false);
}

bool read_driver_state(
    const std::filesystem::path& path,
    std::vector<AllocationRecord>& allocations,
    RtlBufferAllocator::State& allocator_state) {
    if (!is_regular_nosymlink(path)) return false;
    std::ifstream input(path, std::ios::binary);
    uint64_t magic = 0;
    uint32_t version = 0;
    uint32_t record_bytes = 0;
    uint64_t count = 0;
    uint32_t free_list_count = 0;
    uint32_t reserved = 0;
    if (!input || !read_u64(input, magic) || !read_u32(input, version)
        || !read_u32(input, record_bytes) || !read_u64(input, count)
        || !read_u64(input, allocator_state.used_pages)
        || !read_u64(input, allocator_state.next_sequence)
        || !read_u32(input, free_list_count)
        || !read_u32(input, reserved)
        || magic != kMagic || version != kVersion
        || record_bytes != kRecordBytes || count > kMaximumAllocations
        || count > std::numeric_limits<size_t>::max()
        || free_list_count != RtlBufferAllocator::kMaxOrder + 1
        || reserved != 0) {
        return false;
    }
    allocations.clear();
    allocations.reserve(static_cast<size_t>(count));
    allocator_state.allocations.clear();
    allocator_state.allocations.reserve(static_cast<size_t>(count));
    for (uint64_t index = 0; index < count; ++index) {
        AllocationRecord allocation;
        uint32_t buffer_type = 0;
        uint32_t reserved = 0;
        if (!read_u64(input, allocation.address)
            || !read_u64(input, allocation.requested_size)
            || !read_u64(input, allocation.allocated_size)
            || !read_u32(input, buffer_type) || !read_u32(input, reserved)
            || !read_u64(input, allocation.task_id)
            || !read_u64(input, allocation.kernel_id)
            || !read_u64(input, allocation.sequence)
            || reserved != 0) {
            allocations.clear();
            return false;
        }
        allocation.buffer_type = static_cast<int32_t>(buffer_type);
        allocations.push_back(allocation);
        allocator_state.allocations.push_back({
            allocation.address,
            allocation.requested_size,
            allocation.allocated_size,
            allocation.sequence,
        });
    }
    allocator_state.free_lists.assign(free_list_count, {});
    uint64_t total_free_blocks = 0;
    for (auto& free_list : allocator_state.free_lists) {
        uint64_t block_count = 0;
        if (!read_u64(input, block_count)
            || block_count > kMaximumFreeBlocks - total_free_blocks
            || block_count > std::numeric_limits<size_t>::max()) {
            allocations.clear();
            allocator_state = {};
            return false;
        }
        total_free_blocks += block_count;
        free_list.reserve(static_cast<size_t>(block_count));
        for (uint64_t index = 0; index < block_count; ++index) {
            uint32_t block = 0;
            if (!read_u32(input, block)) {
                allocations.clear();
                allocator_state = {};
                return false;
            }
            free_list.push_back(block);
        }
    }
    if (input.get() != std::char_traits<char>::eof()) {
        allocations.clear();
        allocator_state = {};
        return false;
    }
    return true;
}
} // namespace

bool RawState::configure_restore_from_env(std::string& error) {
    error.clear();
    *this = {};
    const char* raw = std::getenv(kRestoreEnvironment);
    if (raw == nullptr) return true;
    const std::string value(raw);
    if (unsetenv(kRestoreEnvironment) != 0) {
        error = std::string("cannot consume ") + kRestoreEnvironment;
        return false;
    }
    if (value.empty()) {
        error = std::string(kRestoreEnvironment) + " must not be empty";
        return false;
    }
    std::error_code path_error;
    resume_directory_ = std::filesystem::absolute(value, path_error);
    if (path_error) {
        error = "raw RTL restore path is invalid";
        *this = {};
        return false;
    }
    if (!is_directory_nosymlink(resume_directory_)
        || !is_directory_nosymlink(resume_directory_ / kSimulatorDirectory)
        || !read_driver_state(
            resume_directory_ / kDriverStateFilename,
            expected_allocations_, allocator_state_)) {
        error = "raw RTL restore state is invalid";
        *this = {};
        return false;
    }
    AllocationContract validation;
    RtlBufferAllocator allocator_validation;
    if (!allocation_states_match(expected_allocations_, allocator_state_)
        || !validation.begin_restore(
            expected_allocations_, allocator_state_.next_sequence, error)
        || !allocator_validation.restore_state(allocator_state_)) {
        if (error.empty()) error = "raw allocator state is invalid";
        *this = {};
        return false;
    }
    restoring_ = true;
    return true;
}

bool RawState::consume_save_request(
    bool& requested, std::filesystem::path& directory,
    std::string& error) {
    error.clear();
    requested = false;
    directory.clear();
    const char* raw = std::getenv(kSaveEnvironment);
    if (raw == nullptr) return true;
    const std::string value(raw);
    if (unsetenv(kSaveEnvironment) != 0) {
        error = std::string("cannot consume ") + kSaveEnvironment;
        return false;
    }
    if (value.empty()) {
        error = std::string(kSaveEnvironment) + " must not be empty";
        return false;
    }
    std::error_code path_error;
    directory = std::filesystem::absolute(value, path_error);
    if (path_error) {
        error = "raw RTL state save path is invalid";
        return false;
    }
    requested = true;
    return true;
}

bool RawState::save(
    const std::filesystem::path& directory,
    const std::vector<AllocationRecord>& allocations,
    const RtlBufferAllocator::State& allocator_state,
    const SaveSimulator& save_simulator,
    std::string& error) {
    error.clear();
    if (directory.empty() || !save_simulator) {
        error = "raw RTL state save request is invalid";
        return false;
    }
    AllocationContract validation;
    RtlBufferAllocator allocator_validation;
    if (!allocation_states_match(allocations, allocator_state)
        || !validation.begin_restore(
            allocations, allocator_state.next_sequence, error)
        || !allocator_validation.restore_state(allocator_state)) {
        if (error.empty()) error = "raw allocator state is invalid";
        return false;
    }
    const auto parent = directory.parent_path().empty()
        ? std::filesystem::path(".") : directory.parent_path();
    std::error_code filesystem_error;
    if (!is_directory_nosymlink(parent)
        || std::filesystem::exists(directory)
        || !std::filesystem::create_directory(directory, filesystem_error)
        || filesystem_error) {
        error = "raw RTL state target is unavailable";
        return false;
    }
    bool success = false;
    try {
        if (save_simulator(directory / kSimulatorDirectory) != 0) {
            throw std::runtime_error("simulator state save failed");
        }
        if (!write_driver_state(
                directory / kDriverStateFilename,
                allocations, allocator_state)
            || !fsync_path(directory, true)
            || !fsync_path(parent, true)) {
            throw std::runtime_error("driver allocation state save failed");
        }
        success = true;
    } catch (const std::exception& exception) {
        error = exception.what();
    }
    if (!success) {
        std::filesystem::remove_all(directory, filesystem_error);
    }
    return success;
}

} // namespace rtl_state
} // namespace ventus
