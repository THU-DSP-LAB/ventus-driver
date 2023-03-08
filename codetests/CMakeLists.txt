cmake_minimum_required(VERSION 3.15)

project(codetests)
set(LIBNAME testlib)
file(GLOB_RECURSE LIB_SRCS test*)



add_library(${LIBNAME} SHARED ${LIB_SRCS})
target_include_directories(${LIBNAME} PUBLIC ./)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized"
        )
add_executable(codetests hello.cpp)
target_link_directories(codetests PUBLIC ./)
target_link_libraries(codetests PUBLIC testlib)

#target_link_libraries(codetests PUBLIC rtldriver)