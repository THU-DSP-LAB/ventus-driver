#pragma once

#include <cstdint>
#include <limits>

namespace ventus {
namespace rtlsim_wait {

inline uint64_t timeout_ticks(uint64_t timeout_ms) {
    constexpr uint64_t kTicksPerMillisecond = 1000000;
    constexpr uint64_t kMax = std::numeric_limits<uint64_t>::max();
    if (timeout_ms > kMax / kTicksPerMillisecond) return kMax;
    return timeout_ms * kTicksPerMillisecond;
}

inline uint64_t deadline(uint64_t start_time, uint64_t timeout_ms) {
    constexpr uint64_t kMax = std::numeric_limits<uint64_t>::max();
    const uint64_t budget = timeout_ticks(timeout_ms);
    if (budget > kMax - start_time) return kMax;
    return start_time + budget;
}

} // namespace rtlsim_wait
} // namespace ventus
