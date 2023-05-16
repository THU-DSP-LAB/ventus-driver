cmake_minimum_required(VERSION 3.22)
set(PROJECT ventus_driver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_FLAGS -Wl,--whole-archive -Wl,--no-whole-archive)

include_directories(common)
include_directories(include)
include_directories(devices)
include_directories(devices/verilating_device/page_table)
include_directories(tests)
include_directories(driver)


set(CMAKE_BUILD_TYPE "Debug")

if(CMAKE_BUILD_TYPE AND (CMAKE_BUILD_TYPE STREQUAL "Debug"))
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -O0 -g -ggdb")
    message("Debug mode:${CMAKE_CXX_FLAGS_DEBUG}")
#    add_executable(test_debug ${src_dirs})


elseif(CMAKE_BUILD_TYPE AND (CMAKE_BUILD_TYPE STREQUAL "Release"))
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -O3")
    message("Release mode:${CMAKE_CXX_FLAGS_RELEASE}")
#    add_executable(test_release ${src_dirs})
else()
    message("else:${CMAKE_BUILD_TYPE}")
    message("else:${CMAKE_CXX_FLAGS_RELEASE}")
#    add_executable(test_release ${src_dirs})
endif()

if(EXISTS "${CMAKE_SOURCE_DIR}/test.cpp")
    set(CODING_TEST test)
    add_executable(${CODING_TEST} test.cpp)
endif()

option(ENABLE_INSTALL "if install driver library to install dir" OFF)

set(DRIVER_LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib/)
message(STATUS "DRIVER_LIB_INSTALL_DIR:" ${DRIVER_LIB_INSTALL_DIR} "\n")

add_subdirectory(devices)
add_subdirectory(driver)
add_subdirectory(tests)
add_subdirectory(codetests)