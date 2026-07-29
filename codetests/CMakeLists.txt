cmake_minimum_required(VERSION 3.15)

project(codetests)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized"
        )

find_package(nlohmann_json CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(test_perf_recorder test_perf_recorder.cpp)
target_link_libraries(test_perf_recorder PRIVATE driver_common_utils)
add_test(NAME perf_recorder COMMAND test_perf_recorder)

add_executable(test_rtl_buffer_allocator test_rtl_buffer_allocator.cpp)
add_test(NAME rtl_buffer_allocator COMMAND test_rtl_buffer_allocator)

add_executable(test_rtl_state_contract test_rtl_state_contract.cpp)
add_test(NAME rtl_state_contract COMMAND test_rtl_state_contract)

add_executable(test_rtlsim_wait_deadline test_rtlsim_wait_deadline.cpp)
target_include_directories(
    test_rtlsim_wait_deadline PRIVATE ../driver/rtlsim_device
)
add_test(NAME rtlsim_wait_deadline COMMAND test_rtlsim_wait_deadline)

add_executable(
    test_rtl_persistent_state
    test_rtl_persistent_state.cpp
    ../driver/rtlsim_device/rtl_persistent_state.cpp
)
target_include_directories(
    test_rtl_persistent_state PRIVATE ../driver/rtlsim_device
)
target_compile_features(test_rtl_persistent_state PRIVATE cxx_std_17)
target_link_libraries(
    test_rtl_persistent_state
    PRIVATE nlohmann_json::nlohmann_json OpenSSL::Crypto
)
add_test(NAME rtl_persistent_state COMMAND test_rtl_persistent_state)
