cmake_minimum_required(VERSION 3.20)
set(PROJECT ventus_driver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS -Wl,--whole-archive -Wl,--no-whole-archive)

include_directories(common)
include_directories(include)
include_directories(sim)
include_directories(sim/page_table)
include_directories(tests)
include_directories(veridriver)


add_subdirectory(sim)
add_subdirectory(veridriver)
add_subdirectory(tests)

if(EXISTS "${CMAKE_SOURCE_DIR}/test.cpp")
    set(CODING_TEST test)
    add_executable(${CODING_TEST} test.cpp)
endif()

