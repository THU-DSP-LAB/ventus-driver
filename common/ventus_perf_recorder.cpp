#include "ventus_perf_recorder.hpp"

#include "ventus_perf_scope.hpp"

#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <system_error>
#include <type_traits>

#include <sys/syscall.h>
#include <unistd.h>

namespace vtperf {
namespace {

constexpr std::string_view kEnvEnabled = "VENTUS_PERF";
constexpr std::string_view kEnvExperimentId = "VENTUS_PERF_EXPERIMENT_ID";
constexpr std::string_view kEnvPassId = "VENTUS_PERF_PASS_ID";
constexpr std::string_view kEnvPassType = "VENTUS_PERF_PASS_TYPE";
constexpr std::string_view kEnvBackend = "VENTUS_BACKEND";
constexpr std::string_view kEnvOutDir = "VENTUS_PERF_OUT_DIR";
constexpr std::string_view kEnvDetail = "VENTUS_PERF_DETAIL";

constexpr std::string_view kDetailDefault = "default";
constexpr std::string_view kDetailFull = "full";

bool detail_level_is_valid(std::string_view value) {
    return value == kDetailDefault || value == kDetailFull;
}

bool detail_level_records_all(std::string_view value) {
    return value == kDetailFull;
}

bool default_detail_keeps_event(std::string_view stream, std::string_view event_type) {
    if (event_type == "kernel_submit" || event_type == "kernel_wait") return true;
    if (event_type == "compiler") return stream == "pocl";
    if (event_type == "buffer_write" || event_type == "buffer_read" ||
        event_type == "buffer_copy" || event_type == "buffer_fill" ||
        event_type == "map_mem" || event_type == "unmap_mem") {
        return stream == "pocl";
    }
    if (event_type == "vt_copy_to_dev" || event_type == "vt_copy_from_dev") {
        return stream == "vt";
    }
    return false;
}

bool env_enabled(const char *value) {
    return value != nullptr && value[0] == '1' && value[1] == '\0';
}

std::string require_env(std::string_view name) {
    const char *value = std::getenv(std::string(name).c_str());
    if (value == nullptr || value[0] == '\0') {
        throw std::runtime_error("missing required perf env: " + std::string(name));
    }
    return std::string(value);
}

uint64_t current_tid() {
    return static_cast<uint64_t>(::syscall(SYS_gettid));
}

std::string hex_id(uint64_t value) {
    std::ostringstream stream;
    stream << std::hex << value;
    return stream.str();
}

std::string make_producer_identity() {
    const uint64_t pid = static_cast<uint64_t>(::getpid());
    const uint64_t now = monotonic_time_ns();
    const uint64_t fn_addr = reinterpret_cast<uint64_t>(&make_producer_identity);
    return "p" + hex_id(pid) + "-t" + hex_id(now) + "-m" + hex_id(fn_addr);
}

std::string json_escape(const std::string &value) {
    std::ostringstream stream;
    for (const unsigned char c : value) {
        switch (c) {
        case '"': stream << "\\\""; break;
        case '\\': stream << "\\\\"; break;
        case '\b': stream << "\\b"; break;
        case '\f': stream << "\\f"; break;
        case '\n': stream << "\\n"; break;
        case '\r': stream << "\\r"; break;
        case '\t': stream << "\\t"; break;
        default:
            if (c < 0x20) {
                stream << "\\u" << std::hex << std::setw(4) << std::setfill('0')
                       << static_cast<unsigned>(c);
            } else {
                stream << static_cast<char>(c);
            }
            break;
        }
    }
    return stream.str();
}

void append_optional_string(
    std::ostringstream &stream, const char *key, const std::string &value
) {
    stream << ",\"" << key << "\":";
    if (value.empty()) {
        stream << "null";
        return;
    }
    stream << "\"" << json_escape(value) << "\"";
}

void append_attr_value(std::ostringstream &stream, const AttrValue &value) {
    std::visit(
        [&stream](const auto &current) {
            using T = std::decay_t<decltype(current)>;
            if constexpr (std::is_same_v<T, std::nullptr_t>) {
                stream << "null";
            } else if constexpr (std::is_same_v<T, bool>) {
                stream << (current ? "true" : "false");
            } else if constexpr (std::is_same_v<T, std::string>) {
                stream << "\"" << json_escape(current) << "\"";
            } else {
                stream << current;
            }
        },
        value
    );
}

bool entry_is_allowed_wrapper_artifact(const std::filesystem::path &entry) {
    const std::string name = entry.filename().string();
    return name == "pass.begin.json" || name == "pass.json" || name == "stdout.log" ||
           name == "stderr.log" || name == "artifacts";
}

void validate_out_dir(const std::filesystem::path &out_dir) {
    namespace fs = std::filesystem;
    if (!fs::exists(out_dir)) {
        fs::create_directories(out_dir);
        return;
    }
    if (!fs::is_directory(out_dir)) {
        throw std::runtime_error("VENTUS_PERF_OUT_DIR is not a directory: " + out_dir.string());
    }
    for (const fs::directory_entry &entry : fs::directory_iterator(out_dir)) {
        if (entry_is_allowed_wrapper_artifact(entry.path())) continue;
        throw std::runtime_error(
            "VENTUS_PERF_OUT_DIR already exists and contains unexpected content: " +
            entry.path().filename().string()
        );
    }
}

}  // namespace

bool perf_requested_from_env() {
    return env_enabled(std::getenv(std::string(kEnvEnabled).c_str()));
}

uint64_t monotonic_time_ns() {
    return static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now().time_since_epoch()
        )
            .count()
    );
}

RecorderConfig recorder_config_from_env() {
    RecorderConfig config;
    config.enabled = perf_requested_from_env();
    if (!config.enabled) return config;
    config.experiment_id = require_env(kEnvExperimentId);
    config.pass_id = require_env(kEnvPassId);
    config.pass_type = require_env(kEnvPassType);
    config.backend = require_env(kEnvBackend);
    config.detail_level = std::getenv(std::string(kEnvDetail).c_str()) == nullptr
                              ? std::string(kDetailDefault)
                              : require_env(kEnvDetail);
    if (!detail_level_is_valid(config.detail_level)) {
        throw std::runtime_error("unsupported perf detail level: " + config.detail_level);
    }
    config.out_dir = require_env(kEnvOutDir);
    return config;
}

std::string serialize_event_json(const CompleteEvent &event) {
    std::ostringstream stream;
    stream << "{";
    stream << "\"stream\":\"" << json_escape(event.stream) << "\"";
    stream << ",\"event_type\":\"" << json_escape(event.event_type) << "\"";
    stream << ",\"ts_start_ns\":" << event.ts_start_ns;
    stream << ",\"ts_end_ns\":" << event.ts_end_ns;
    append_optional_string(stream, "event_id", event.event_id);
    append_optional_string(stream, "parent_event_id", event.parent_event_id);
    append_optional_string(stream, "scope_id", event.scope_id);
    stream << ",\"pid\":" << event.pid;
    stream << ",\"tid\":" << event.tid;
    append_optional_string(stream, "queue_id", event.queue_id);
    stream << ",\"launch_seq\":" << event.launch_seq;
    stream << ",\"kernel_occurrence\":" << event.kernel_occurrence;
    stream << ",\"kernel_signature_hash\":" << event.kernel_signature_hash;
    append_optional_string(stream, "kernel_name", event.kernel_name);
    stream << ",\"attrs\":{";
    bool first = true;
    for (const auto &[key, value] : event.attrs) {
        if (!first) stream << ",";
        first = false;
        stream << "\"" << json_escape(key) << "\":";
        append_attr_value(stream, value);
    }
    stream << "}}";
    return stream.str();
}

Recorder::Recorder(RecorderConfig config)
    : config_(std::move(config)),
      producer_identity_(make_producer_identity()),
      pid_(static_cast<uint64_t>(::getpid())) {
    if (!config_.enabled) return;
    if (config_.experiment_id.empty() || config_.pass_id.empty() ||
        config_.pass_type.empty() || config_.backend.empty() || config_.detail_level.empty() ||
        config_.out_dir.empty()) {
        throw std::runtime_error("perf recorder config is missing required fields");
    }
    if (!detail_level_is_valid(config_.detail_level)) {
        throw std::runtime_error("unsupported perf detail level: " + config_.detail_level);
    }
    validate_out_dir(config_.out_dir);
}

Recorder::~Recorder() {
    std::lock_guard<std::mutex> lock(mutex_);
    for (auto &[_, output] : event_outputs_) {
        if (output) output->flush();
    }
}

std::string Recorder::next_event_id() {
    std::lock_guard<std::mutex> lock(mutex_);
    event_counter_ += 1;
    return producer_identity_ + "-e" + std::to_string(event_counter_);
}

std::string Recorder::next_scope_id() {
    std::lock_guard<std::mutex> lock(mutex_);
    scope_counter_ += 1;
    return producer_identity_ + "-s" + std::to_string(scope_counter_);
}

std::filesystem::path Recorder::event_path_for_stream(const std::string &stream_name) {
    auto it = event_paths_.find(stream_name);
    if (it != event_paths_.end()) return it->second;
    const auto path = config_.out_dir / ("events." + stream_name + ".jsonl");
    event_paths_.emplace(stream_name, path);
    return path;
}

std::ofstream &Recorder::output_for_stream(const std::string &stream_name) {
    auto it = event_outputs_.find(stream_name);
    if (it != event_outputs_.end()) return *it->second;
    const auto path = event_path_for_stream(stream_name);
    auto output = std::make_unique<std::ofstream>(path, std::ios::out | std::ios::app);
    if (!output || !*output) {
        throw std::runtime_error("failed to open perf event file: " + path.string());
    }
    auto [inserted_it, _] = event_outputs_.emplace(stream_name, std::move(output));
    return *inserted_it->second;
}

bool Recorder::should_record_event(const std::string &stream, const std::string &event_type) const {
    if (!config_.enabled) return false;
    if (detail_level_records_all(config_.detail_level)) return true;
    return default_detail_keeps_event(stream, event_type);
}

CompleteEvent Recorder::finalize_event(const CompleteEvent &event) {
    CompleteEvent finalized = event;
    if (finalized.stream.empty()) {
        throw std::runtime_error("perf event stream must not be empty");
    }
    if (finalized.event_type.empty()) {
        throw std::runtime_error("perf event_type must not be empty");
    }
    if (finalized.ts_start_ns == 0) finalized.ts_start_ns = monotonic_time_ns();
    if (finalized.ts_end_ns == 0) finalized.ts_end_ns = finalized.ts_start_ns;
    if (finalized.ts_end_ns < finalized.ts_start_ns) {
        throw std::runtime_error("perf event end timestamp is earlier than start");
    }
    if (finalized.event_id.empty()) finalized.event_id = next_event_id();
    if (finalized.pid == 0) finalized.pid = pid_;
    if (finalized.tid == 0) finalized.tid = current_tid();
    if (finalized.scope_id.empty()) {
        const ScopeSnapshot snapshot = current_scope_snapshot();
        finalized.scope_id = snapshot.scope_id;
        if (finalized.parent_event_id.empty()) finalized.parent_event_id = snapshot.event_id;
        if (finalized.launch_seq == 0) finalized.launch_seq = snapshot.launch_seq;
    }
    return finalized;
}

void Recorder::write_event(const CompleteEvent &event) {
    if (!config_.enabled) return;
    if (!should_record_event(event.stream, event.event_type)) return;
    const CompleteEvent finalized = finalize_event(event);
    const std::string line = serialize_event_json(finalized);
    std::lock_guard<std::mutex> lock(mutex_);
    std::ofstream &output = output_for_stream(finalized.stream);
    output << line << '\n';
    if (!output) {
        throw std::runtime_error(
            "failed to append perf event file: " + event_path_for_stream(finalized.stream).string()
        );
    }
}

}  // namespace vtperf
