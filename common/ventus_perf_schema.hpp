#ifndef VENTUS_PERF_SCHEMA_HPP
#define VENTUS_PERF_SCHEMA_HPP

#include <cstdint>
#include <map>
#include <string>
#include <variant>

namespace vtperf {

using AttrValue = std::variant<std::nullptr_t, bool, int64_t, uint64_t, double, std::string>;
using AttrMap = std::map<std::string, AttrValue>;

struct CompleteEvent final {
    std::string stream;
    std::string event_type;
    uint64_t ts_start_ns = 0;
    uint64_t ts_end_ns = 0;
    std::string event_id;
    std::string parent_event_id;
    std::string scope_id;
    uint64_t pid = 0;
    uint64_t tid = 0;
    std::string queue_id;
    uint64_t launch_seq = 0;
    uint64_t kernel_occurrence = 0;
    uint64_t kernel_signature_hash = 0;
    std::string kernel_name;
    AttrMap attrs;
};

std::string serialize_event_json(const CompleteEvent &event);

}  // namespace vtperf

#endif
