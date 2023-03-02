cmake_minimum_required(VERSION 3.22)
set(PROJECT ventus_driver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS -Wl,--whole-archive -Wl,--no-whole-archive)

include_directories(common)
include_directories(include)
include_directories(devices)
include_directories(devices/verilating_device/page_table)
include_directories(tests)
include_directories(driver)


add_subdirectory(devices)
add_subdirectory(driver)
add_subdirectory(tests)

if(EXISTS "${CMAKE_SOURCE_DIR}/test.cpp")
    set(CODING_TEST test)
    add_executable(${CODING_TEST} test.cpp)
endif()

