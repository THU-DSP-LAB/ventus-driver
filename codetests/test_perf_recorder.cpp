#include "ventus_perf_recorder.hpp"
#include "ventus_perf_scope.hpp"

#include <atomic>
#include <filesystem>
#include <fstream>
#include <thread>

static void test_recorder_writes_event_files() {
  namespace fs = std::filesystem;
  const fs::path out_dir = fs::temp_directory_path() / "ventus-perf-recorder-test";
  fs::remove_all(out_dir);

  vtperf::RecorderConfig config;
  config.enabled = true;
  config.experiment_id = "exp-test";
  config.pass_id = "measure-0001";
  config.pass_type = "measure";
  config.backend = "ptx";
  config.detail_level = "full";
  config.out_dir = out_dir;

  vtperf::Recorder recorder(config);

  vtperf::CompleteEvent event;
  event.stream = "vt";
  event.event_type = "vt_start";
  event.ts_start_ns = 10;
  event.ts_end_ns = 20;
  recorder.write_event(event);
  if (!fs::exists(out_dir / "events.vt.jsonl")) std::abort();
}

static void test_default_detail_skips_high_frequency_driver_events() {
  namespace fs = std::filesystem;
  const fs::path out_dir = fs::temp_directory_path() / "ventus-perf-detail-test";
  fs::remove_all(out_dir);

  vtperf::RecorderConfig config;
  config.enabled = true;
  config.experiment_id = "exp-test";
  config.pass_id = "measure-0001";
  config.pass_type = "measure";
  config.backend = "ptx";
  config.out_dir = out_dir;
  config.detail_level = "default";

  vtperf::Recorder recorder(config);

  vtperf::CompleteEvent dropped;
  dropped.stream = "vt";
  dropped.event_type = "vt_buf_alloc";
  dropped.ts_start_ns = 10;
  dropped.ts_end_ns = 20;
  recorder.write_event(dropped);
  if (fs::exists(out_dir / "events.vt.jsonl")) std::abort();

  vtperf::CompleteEvent kept;
  kept.stream = "pocl";
  kept.event_type = "kernel_submit";
  kept.ts_start_ns = 20;
  kept.ts_end_ns = 40;
  recorder.write_event(kept);
  if (!fs::exists(out_dir / "events.pocl.jsonl")) std::abort();
}

static void test_scope_parentage_and_launch_sequence() {
  namespace fs = std::filesystem;
  const fs::path out_dir = fs::temp_directory_path() / "ventus-perf-scope-test";
  fs::remove_all(out_dir);

  vtperf::RecorderConfig config;
  config.enabled = true;
  config.experiment_id = "exp-test";
  config.pass_id = "measure-0001";
  config.pass_type = "measure";
  config.backend = "ptx";
  config.out_dir = out_dir;

  vtperf::Recorder recorder(config);
  vtperf::ScopedEvent outer(recorder, "pocl", "kernel_submit");
  const auto snapshot = vtperf::current_scope_snapshot();
  if (snapshot.scope_id.empty()) std::abort();
  if (snapshot.event_id.empty()) std::abort();
  if (vtperf::next_launch_sequence() != 1) std::abort();
}

static void test_launch_sequence_is_process_wide() {
  std::atomic<uint64_t> first{0};
  std::atomic<uint64_t> second{0};
  std::thread thread_a([&first]() { first.store(vtperf::next_launch_sequence()); });
  std::thread thread_b([&second]() { second.store(vtperf::next_launch_sequence()); });
  thread_a.join();
  thread_b.join();
  if (first.load() == second.load()) std::abort();
}

int main() {
  test_recorder_writes_event_files();
  test_default_detail_skips_high_frequency_driver_events();
  test_scope_parentage_and_launch_sequence();
  test_launch_sequence_is_process_wide();
  return 0;
}
