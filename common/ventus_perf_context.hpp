#ifndef VENTUS_PERF_CONTEXT_HPP
#define VENTUS_PERF_CONTEXT_HPP

#include <stdint.h>

#ifdef __cplusplus
#include <cstring>
#include <string>
#else
#include <string.h>
#endif

#define VT_PERF_CONTEXT_STRING_CAPACITY 128

#ifdef __cplusplus
extern "C" {
#endif

typedef struct vt_perf_context_t {
    uint64_t launch_seq;
    uint64_t kernel_occurrence;
    uint64_t kernel_signature_hash;
    char kernel_name[VT_PERF_CONTEXT_STRING_CAPACITY];
    char scope_id[VT_PERF_CONTEXT_STRING_CAPACITY];
    char parent_event_id[VT_PERF_CONTEXT_STRING_CAPACITY];
} vt_perf_context_t;

#ifdef __cplusplus
}

namespace vtperf {

inline void clear_perf_context(vt_perf_context_t *context) {
    if (context == nullptr) return;
    std::memset(context, 0, sizeof(*context));
}

inline void copy_perf_context_string(
    char (&buffer)[VT_PERF_CONTEXT_STRING_CAPACITY], const std::string &value
) {
    std::memset(buffer, 0, sizeof(buffer));
    if (value.empty()) return;
    const size_t limit = sizeof(buffer) - 1;
    const size_t count = value.size() < limit ? value.size() : limit;
    std::memcpy(buffer, value.data(), count);
}

inline std::string read_perf_context_string(
    const char (&buffer)[VT_PERF_CONTEXT_STRING_CAPACITY]
) {
    return std::string(buffer, strnlen(buffer, sizeof(buffer)));
}

}  // namespace vtperf

#endif

#endif
