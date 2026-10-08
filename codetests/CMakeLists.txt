cmake_minimum_required(VERSION 3.15)

project(codetests)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized"
        )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(test_perf_recorder test_perf_recorder.cpp)
target_link_libraries(test_perf_recorder PRIVATE driver_common_utils)
add_test(NAME perf_recorder COMMAND test_perf_recorder)

add_executable(test_rt_spill_pool test_rt_spill_pool.cpp)
add_test(NAME rt_spill_pool COMMAND test_rt_spill_pool)
