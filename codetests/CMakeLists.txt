cmake_minimum_required(VERSION 3.15)

project(codetests)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized"
        )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(test_perf_recorder test_perf_recorder.cpp)
target_link_libraries(test_perf_recorder PRIVATE driver_common_utils)
add_test(NAME perf_recorder COMMAND test_perf_recorder)

add_executable(test_rt_global_bridge test_rt_global_bridge.cpp)
set_target_properties(test_rt_global_bridge PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
target_include_directories(test_rt_global_bridge SYSTEM PRIVATE
    ${SPIKE_SRC_DIR}
    ${SPIKE_SRC_DIR}/riscv
    ${SPIKE_SRC_DIR}/build
    ${SPIKE_SRC_DIR}/softfloat
    ${SPIKE_SRC_DIR}/fesvr
)
target_link_libraries(test_rt_global_bridge PRIVATE spike_driver)
add_test(NAME rt_global_bridge COMMAND test_rt_global_bridge)
