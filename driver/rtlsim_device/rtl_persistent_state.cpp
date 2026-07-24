#include "rtl_persistent_state.hpp"

#include "utils.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cerrno>
#include <fcntl.h>
#include <fstream>
#include <iomanip>
#include <limits>
#include <nlohmann/json.hpp>
#include <openssl/evp.h>
#include <sstream>
#include <system_error>
#include <unistd.h>

namespace ventus {
namespace rtl_state {
namespace {
constexpr uint32_t kSchemaVersion = 1;
constexpr const char* kAllocationsFilename = "driver-allocations.json";
constexpr const char* kManifestFilename = "manifest.json";
constexpr const char* kCompleteFilename = "COMPLETE";
constexpr const char* kSimulatorDirectory = "simulator";

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

std::string sha256_file(const std::filesystem::path& path) {
    std::ifstream input(path, std::ios::binary);
    if (!input) return {};
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    if (context == nullptr
        || EVP_DigestInit_ex(context, EVP_sha256(), nullptr) != 1) {
        EVP_MD_CTX_free(context);
        return {};
    }
    std::array<char, 1024 * 1024> buffer{};
    while (input) {
        input.read(buffer.data(), buffer.size());
        const std::streamsize count = input.gcount();
        if (count > 0
            && EVP_DigestUpdate(
                   context, buffer.data(), static_cast<size_t>(count))
                != 1) {
            EVP_MD_CTX_free(context);
            return {};
        }
    }
    if (!input.eof()) {
        EVP_MD_CTX_free(context);
        return {};
    }
    std::array<unsigned char, EVP_MAX_MD_SIZE> digest{};
    unsigned int digest_size = 0;
    if (EVP_DigestFinal_ex(context, digest.data(), &digest_size) != 1) {
        EVP_MD_CTX_free(context);
        return {};
    }
    EVP_MD_CTX_free(context);
    std::ostringstream output;
    output << std::hex << std::setfill('0');
    for (unsigned int index = 0; index < digest_size; ++index) {
        output << std::setw(2) << static_cast<unsigned int>(digest[index]);
    }
    return output.str();
}

bool write_json(
    const std::filesystem::path& path, const nlohmann::json& value) {
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    if (!output) return false;
    output << value.dump(2) << '\n';
    output.close();
    return static_cast<bool>(output) && fsync_path(path, false);
}

bool write_complete(const std::filesystem::path& path) {
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    if (!output) return false;
    output << "complete\n";
    output.close();
    return static_cast<bool>(output) && fsync_path(path, false);
}

bool parse_positive_env(
    const char* name, uint64_t default_value, uint64_t& value,
    std::string& error) {
    const char* raw = std::getenv(name);
    if (raw == nullptr) {
        value = default_value;
        return true;
    }
    const auto parsed = parse_u64(raw);
    if (!parsed.has_value() || *parsed == 0) {
        error = std::string(name) + " must be a positive integer";
        return false;
    }
    value = *parsed;
    return true;
}

bool valid_run_id(const std::string& run_id) {
    return run_id.size() == 32
        && std::all_of(
            run_id.begin(), run_id.end(),
            [](unsigned char value) { return std::isxdigit(value); });
}

nlohmann::json allocation_json(const AllocationRecord& record) {
    return {
        {"address", record.address},
        {"allocated_size", record.allocated_size},
        {"buffer_type", record.buffer_type},
        {"kernel_id", record.kernel_id},
        {"requested_size", record.requested_size},
        {"sequence", record.sequence},
        {"task_id", record.task_id},
    };
}

nlohmann::json immutable_json(const ImmutableRegion& region) {
    return {
        {"address", region.address},
        {"sha256", region.sha256},
        {"size", region.size},
    };
}

bool read_json(const std::filesystem::path& path, nlohmann::json& value) {
    try {
        if (!is_regular_nosymlink(path)) return false;
        std::ifstream input(path);
        if (!input) return false;
        input >> value;
        return true;
    } catch (const std::exception&) {
        return false;
    }
}

bool parse_dispatch_name(const std::string& name, uint64_t& ordinal) {
    static constexpr const char* prefix = "dispatch-";
    if (name.size() != 15 || name.compare(0, 9, prefix) != 0) return false;
    const std::string digits = name.substr(9);
    if (!std::all_of(digits.begin(), digits.end(), ::isdigit)) return false;
    try {
        ordinal = std::stoull(digits);
        return true;
    } catch (const std::exception&) {
        return false;
    }
}
} // namespace

std::string PersistentState::sha256_bytes(const void* data, size_t size) {
    if (data == nullptr && size != 0) return {};
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    if (context == nullptr
        || EVP_DigestInit_ex(context, EVP_sha256(), nullptr) != 1
        || EVP_DigestUpdate(context, data, size) != 1) {
        EVP_MD_CTX_free(context);
        return {};
    }
    std::array<unsigned char, EVP_MAX_MD_SIZE> digest{};
    unsigned int digest_size = 0;
    if (EVP_DigestFinal_ex(context, digest.data(), &digest_size) != 1) {
        EVP_MD_CTX_free(context);
        return {};
    }
    EVP_MD_CTX_free(context);
    std::ostringstream output;
    output << std::hex << std::setfill('0');
    for (unsigned int index = 0; index < digest_size; ++index) {
        output << std::setw(2) << static_cast<unsigned int>(digest[index]);
    }
    return output.str();
}

bool PersistentState::configure_from_env(std::string& error) {
    *this = {};
    const char* root_raw = std::getenv("VENTUS_RTL_STATE_DIR");
    const char* resume_raw = std::getenv("VENTUS_RTL_STATE_RESUME");
    const char* run_id_raw = std::getenv("VENTUS_RTL_STATE_RUN_ID");
    const char* interval_raw = std::getenv("VENTUS_RTL_STATE_INTERVAL");
    const char* retain_raw = std::getenv("VENTUS_RTL_STATE_RETAIN");
    const char* force_raw = std::getenv("VENTUS_RTL_STATE_FORCE_SAVE_FAILURE");

    if (root_raw == nullptr && resume_raw == nullptr) {
        if (run_id_raw != nullptr || interval_raw != nullptr
            || retain_raw != nullptr || force_raw != nullptr) {
            error = "RTL state options require VENTUS_RTL_STATE_DIR or VENTUS_RTL_STATE_RESUME";
            return false;
        }
        return true;
    }
    if (!parse_positive_env("VENTUS_RTL_STATE_INTERVAL", 1, interval_, error)
        || !parse_positive_env("VENTUS_RTL_STATE_RETAIN", 2, retain_, error)) {
        return false;
    }
    if (retain_ > 1024) {
        error = "VENTUS_RTL_STATE_RETAIN exceeds 1024";
        return false;
    }
    if (force_raw != nullptr) {
        const auto parsed = parse_bool(force_raw);
        if (!parsed.has_value()) {
            error = "VENTUS_RTL_STATE_FORCE_SAVE_FAILURE must be a boolean";
            return false;
        }
        force_save_failure_ = *parsed;
    }
    if (root_raw != nullptr) {
        if (root_raw[0] == '\0') {
            error = "VENTUS_RTL_STATE_DIR must not be empty";
            return false;
        }
        if (run_id_raw == nullptr || !valid_run_id(run_id_raw)) {
            error = "VENTUS_RTL_STATE_RUN_ID must contain 32 hexadecimal characters";
            return false;
        }
        run_id_ = run_id_raw;
        state_root_ = std::filesystem::absolute(root_raw);
        std::error_code filesystem_error;
        std::filesystem::create_directories(state_root_, filesystem_error);
        if (filesystem_error || !is_directory_nosymlink(state_root_)) {
            error = "cannot create RTL state root";
            return false;
        }
        capture_enabled_ = true;
    } else if (interval_raw != nullptr || retain_raw != nullptr
               || force_save_failure_) {
        error = "capture-only RTL state options require VENTUS_RTL_STATE_DIR";
        return false;
    }
    if (resume_raw != nullptr) {
        if (resume_raw[0] == '\0') {
            error = "VENTUS_RTL_STATE_RESUME must not be empty";
            return false;
        }
        if (!load_resume(std::filesystem::absolute(resume_raw), error)) {
            return false;
        }
        restoring_ = true;
    }
    return true;
}

bool PersistentState::load_resume(
    const std::filesystem::path& directory, std::string& error) {
    try {
        if (!is_directory_nosymlink(directory)
            || !is_regular_nosymlink(directory / kCompleteFilename)) {
            error = "RTL state resume directory is incomplete";
            return false;
        }
        nlohmann::json manifest;
        if (!read_json(directory / kManifestFilename, manifest)
            || manifest.at("schema_version") != kSchemaVersion
            || manifest.at("status") != "COMPLETE") {
            error = "RTL state manifest is invalid";
            return false;
        }
        const std::string manifest_run_id = manifest.at("run_id");
        if (!valid_run_id(manifest_run_id)) {
            error = "RTL state manifest run ID is invalid";
            return false;
        }
        if (run_id_.empty()) run_id_ = manifest_run_id;
        if (run_id_ != manifest_run_id) {
            error = "RTL state run ID mismatch";
            return false;
        }
        completed_dispatches_ = manifest.at("completed_dispatches");
        if (completed_dispatches_ == 0) {
            error = "RTL state completed dispatch count is invalid";
            return false;
        }
        const auto allocations_path = directory / kAllocationsFilename;
        const auto simulator_path = directory / kSimulatorDirectory;
        if (!is_directory_nosymlink(simulator_path)
            || sha256_file(allocations_path)
                != manifest.at("allocations_sha256").get<std::string>()
            || sha256_file(simulator_path / kManifestFilename)
                != manifest.at("simulator_manifest_sha256").get<std::string>()) {
            error = "RTL state component hash mismatch";
            return false;
        }
        nlohmann::json allocations;
        if (!read_json(allocations_path, allocations)
            || allocations.at("schema_version") != kSchemaVersion) {
            error = "RTL allocation contract is invalid";
            return false;
        }
        expected_allocations_.clear();
        for (const auto& item : allocations.at("allocations")) {
            expected_allocations_.push_back({
                item.at("address"),
                item.at("requested_size"),
                item.at("allocated_size"),
                item.at("buffer_type"),
                item.at("task_id"),
                item.at("kernel_id"),
                item.at("sequence"),
            });
        }
        expected_immutable_regions_.clear();
        for (const auto& item : allocations.at("immutable_regions")) {
            const ImmutableRegion region = {
                item.at("address"),
                item.at("size"),
                item.at("sha256"),
            };
            if (region.address == 0 || region.size == 0
                || region.sha256.size() != 64) {
                error = "RTL immutable region contract is invalid";
                return false;
            }
            expected_immutable_regions_.push_back(region);
        }
        if (expected_allocations_.size()
                != manifest.at("allocation_count").get<size_t>()
            || expected_immutable_regions_.size()
                != manifest.at("immutable_region_count").get<size_t>()) {
            error = "RTL state contract count mismatch";
            return false;
        }
        resume_simulator_directory_ = simulator_path;
        return true;
    } catch (const std::exception& exception) {
        error = std::string("cannot load RTL state resume: ") + exception.what();
        return false;
    }
}

void PersistentState::note_kernel_complete() {
    ++completed_dispatches_;
    if (capture_enabled_ && completed_dispatches_ % interval_ == 0) {
        pending_save_ = true;
    }
}

bool PersistentState::publish_pending(
    uint64_t saved_time,
    const std::vector<AllocationRecord>& allocations,
    const std::vector<ImmutableRegion>& immutable_regions,
    const SaveSimulator& save_simulator,
    std::string& error) {
    if (!capture_enabled_ || !pending_save_ || !save_simulator) {
        error = "no RTL state save is pending";
        return false;
    }
    std::ostringstream name;
    name << "dispatch-" << std::setfill('0') << std::setw(6)
         << completed_dispatches_;
    const auto target = state_root_ / name.str();
    const auto partial = state_root_
        / (name.str() + ".partial-" + std::to_string(getpid()));
    std::error_code filesystem_error;
    if (std::filesystem::exists(target)
        || std::filesystem::exists(partial)
        || !std::filesystem::create_directory(partial, filesystem_error)
        || filesystem_error) {
        error = "RTL state target is unavailable";
        return false;
    }
    bool published = false;
    bool latest_published = false;
    bool keep_partial = false;
    try {
        if (save_simulator(partial / kSimulatorDirectory) != 0) {
            throw std::runtime_error("simulator state save failed");
        }
        nlohmann::json allocation_entries = nlohmann::json::array();
        for (const auto& allocation : allocations) {
            allocation_entries.push_back(allocation_json(allocation));
        }
        nlohmann::json immutable_entries = nlohmann::json::array();
        for (const auto& region : immutable_regions) {
            immutable_entries.push_back(immutable_json(region));
        }
        const nlohmann::json allocation_contract = {
            {"allocations", std::move(allocation_entries)},
            {"immutable_regions", std::move(immutable_entries)},
            {"schema_version", kSchemaVersion},
        };
        const auto allocations_path = partial / kAllocationsFilename;
        if (!write_json(allocations_path, allocation_contract)) {
            throw std::runtime_error("allocation contract write failed");
        }
        if (force_save_failure_) {
            keep_partial = true;
            throw std::runtime_error("forced RTL state save failure");
        }
        const std::string allocations_sha = sha256_file(allocations_path);
        const std::string simulator_manifest_sha =
            sha256_file(partial / kSimulatorDirectory / kManifestFilename);
        if (allocations_sha.empty() || simulator_manifest_sha.empty()) {
            throw std::runtime_error("RTL state component hash failed");
        }
        const nlohmann::json manifest = {
            {"allocation_count", allocations.size()},
            {"allocations_sha256", allocations_sha},
            {"completed_dispatches", completed_dispatches_},
            {"immutable_region_count", immutable_regions.size()},
            {"run_id", run_id_},
            {"saved_time", saved_time},
            {"schema_version", kSchemaVersion},
            {"simulator_manifest_sha256", simulator_manifest_sha},
            {"status", "COMPLETE"},
        };
        if (!write_json(partial / kManifestFilename, manifest)
            || !write_complete(partial / kCompleteFilename)
            || !fsync_path(partial, true)) {
            throw std::runtime_error("RTL state commit metadata failed");
        }
        std::filesystem::rename(partial, target);
        published = true;
        if (!fsync_path(state_root_, true)) {
            throw std::runtime_error("RTL state root fsync failed");
        }
        const nlohmann::json latest = {
            {"completed_dispatches", completed_dispatches_},
            {"manifest_sha256", sha256_file(target / kManifestFilename)},
            {"path", target.filename().string()},
            {"schema_version", kSchemaVersion},
        };
        const auto latest_partial =
            state_root_ / ("latest.partial-" + std::to_string(getpid()));
        if (!write_json(latest_partial, latest)) {
            throw std::runtime_error("latest index write failed");
        }
        std::filesystem::rename(latest_partial, state_root_ / "latest.json");
        latest_published = true;
        if (!fsync_path(state_root_, true) || !prune_snapshots(error)) {
            if (error.empty()) error = "latest index commit failed";
            throw std::runtime_error(error);
        }
        pending_save_ = false;
        return true;
    } catch (const std::exception& exception) {
        error = exception.what();
    }
    if (!keep_partial && !latest_published) {
        std::filesystem::remove_all(published ? target : partial, filesystem_error);
        fsync_path(state_root_, true);
    }
    return false;
}

bool PersistentState::prune_snapshots(std::string& error) const {
    std::vector<std::pair<uint64_t, std::filesystem::path>> snapshots;
    try {
        for (const auto& entry : std::filesystem::directory_iterator(state_root_)) {
            uint64_t ordinal = 0;
            if (!entry.is_directory() || entry.is_symlink()
                || !parse_dispatch_name(entry.path().filename().string(), ordinal)
                || !is_regular_nosymlink(entry.path() / kCompleteFilename)) {
                continue;
            }
            snapshots.emplace_back(ordinal, entry.path());
        }
        std::sort(snapshots.begin(), snapshots.end());
        while (snapshots.size() > retain_) {
            std::filesystem::remove_all(snapshots.front().second);
            snapshots.erase(snapshots.begin());
        }
        return fsync_path(state_root_, true);
    } catch (const std::exception& exception) {
        error = std::string("RTL state retention failed: ") + exception.what();
        return false;
    }
}

} // namespace rtl_state
} // namespace ventus
