#ifndef VENTUS_PERF_SCOPE_HPP
#define VENTUS_PERF_SCOPE_HPP

#include "ventus_perf_recorder.hpp"

#include <atomic>
#include <utility>
#include <vector>

namespace vtperf {

struct ScopeSnapshot final {
    std::string scope_id;
    std::string event_id;
    uint64_t launch_seq = 0;
};

inline std::vector<ScopeSnapshot> &scope_stack_storage() {
    static thread_local std::vector<ScopeSnapshot> stack;
    return stack;
}

inline std::atomic<uint64_t> &launch_sequence_storage() {
    static std::atomic<uint64_t> counter{0};
    return counter;
}

ScopeSnapshot current_scope_snapshot();
uint64_t next_launch_sequence();

class ScopedEvent final {
public:
    ScopedEvent(Recorder &recorder, std::string stream, std::string event_type)
        : recorder_(recorder), event_{} {
        event_.stream = std::move(stream);
        event_.event_type = std::move(event_type);
        event_.ts_start_ns = monotonic_time_ns();
        event_.event_id = recorder_.next_event_id();
        event_.scope_id = recorder_.next_scope_id();
        event_.pid = recorder_.pid();
        const ScopeSnapshot parent = current_scope_snapshot();
        event_.parent_event_id = parent.event_id;
        if (event_.launch_seq == 0) event_.launch_seq = parent.launch_seq;
        push_scope({event_.scope_id, event_.event_id, event_.launch_seq});
    }

    ~ScopedEvent() {
        event_.ts_end_ns = monotonic_time_ns();
        pop_scope();
        recorder_.write_event(event_);
    }

    CompleteEvent &event() { return event_; }

private:
    static void push_scope(ScopeSnapshot snapshot) {
        scope_stack_storage().push_back(std::move(snapshot));
    }

    static void pop_scope() {
        auto &stack = scope_stack_storage();
        if (!stack.empty()) stack.pop_back();
    }

    Recorder &recorder_;
    CompleteEvent event_;
};

inline ScopeSnapshot current_scope_snapshot() {
    auto &stack = scope_stack_storage();
    if (stack.empty()) return {};
    return stack.back();
}

inline uint64_t next_launch_sequence() {
    return launch_sequence_storage().fetch_add(1, std::memory_order_relaxed) + 1;
}

}  // namespace vtperf

#endif
