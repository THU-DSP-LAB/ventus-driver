#ifndef VENTUS_PERF_RECORDER_HPP
#define VENTUS_PERF_RECORDER_HPP

#include "ventus_perf_schema.hpp"

#include <filesystem>
#include <fstream>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>

namespace vtperf {

struct RecorderConfig final {
    bool enabled = false;
    std::string experiment_id;
    std::string pass_id;
    std::string pass_type;
    std::string backend;
    std::string detail_level = "default";
    std::filesystem::path out_dir;
};

RecorderConfig recorder_config_from_env();
bool perf_requested_from_env();
uint64_t monotonic_time_ns();

class Recorder final {
public:
    explicit Recorder(RecorderConfig config);
    ~Recorder();

    const RecorderConfig &config() const { return config_; }

    bool enabled() const { return config_.enabled; }

    uint64_t pid() const { return pid_; }
    bool should_record_event(const std::string &stream, const std::string &event_type) const;

    std::string next_event_id();
    std::string next_scope_id();
    void write_event(const CompleteEvent &event);

private:
    CompleteEvent finalize_event(const CompleteEvent &event);
    std::filesystem::path event_path_for_stream(const std::string &stream);
    std::ofstream &output_for_stream(const std::string &stream);

    RecorderConfig config_;
    std::string producer_identity_;
    uint64_t pid_ = 0;
    uint64_t event_counter_ = 0;
    uint64_t scope_counter_ = 0;
    std::unordered_map<std::string, std::filesystem::path> event_paths_;
    std::unordered_map<std::string, std::unique_ptr<std::ofstream>> event_outputs_;
    std::mutex mutex_;
};

}  // namespace vtperf

#endif
