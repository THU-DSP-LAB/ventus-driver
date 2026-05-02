#pragma once

#include "rtlsim_backend_loader.hpp"
#include "utils.hpp"
#include "ventus_rtlsim.h"
#include <cstdint>
#include <cstdlib>
#include <memory>
#include <spdlog/logger.h>
#include <spdlog/spdlog.h>

namespace ventus::rtlsim_watchdog {

constexpr uint64_t DEFAULT_HANG_TIMEOUT = 1000000;
constexpr int FLUSH_TAIL_STEPS = 5000;

inline uint64_t hang_timeout_from_env() {
    return parse_u64(std::getenv("VENTUS_WATCHDOG_TIMEOUT")).value_or(DEFAULT_HANG_TIMEOUT);
}

inline int check_step_result(
    const rtlsim_backend::Api &api, ventus_rtlsim_t *device,
    const ventus_rtlsim_step_result_t *result, const char *phase,
    const std::shared_ptr<spdlog::logger> &logger
) {
    if (result == nullptr) {
        SPDLOG_LOGGER_ERROR(logger, "rtlsim step returned null during {}", phase);
        return -1;
    }
    if (result->hang) {
        SPDLOG_LOGGER_ERROR(
            logger, "rtlsim PMU watchdog reported hang during {}, time={}", phase,
            api.get_time(device)
        );
        return -1;
    }
    if (result->error) {
        SPDLOG_LOGGER_ERROR(
            logger, "rtlsim reported fatal error during {}, time={}", phase,
            api.get_time(device)
        );
        return -1;
    }
    if (result->time_exceed) {
        SPDLOG_LOGGER_ERROR(
            logger, "rtlsim time limit exceeded during {}, time={}", phase,
            api.get_time(device)
        );
        return -1;
    }
    return 0;
}

} // namespace ventus::rtlsim_watchdog
