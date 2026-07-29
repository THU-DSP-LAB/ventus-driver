#include "rtlsim_wait_deadline.hpp"

#include <cstdint>
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

} // namespace

int main() {
    using ventus::rtlsim_wait::deadline;
    using ventus::rtlsim_wait::timeout_ticks;

    require(timeout_ticks(1000) == 1000000000, "timeout conversion is wrong");
    require(deadline(0, 1000) == 1000000000, "zero-origin deadline is wrong");
    require(
        deadline(994754805, 1000) == 1994754805,
        "restored sim-time was treated as an absolute timeout");
    require(deadline(1234, 0) == 1234, "zero timeout deadline is wrong");

    const uint64_t max = std::numeric_limits<uint64_t>::max();
    require(timeout_ticks(max) == max, "timeout conversion did not saturate");
    require(deadline(max - 10, 1000) == max, "deadline did not saturate");

    std::cout << "rtlsim wait deadline tests passed\n";
    return 0;
}
