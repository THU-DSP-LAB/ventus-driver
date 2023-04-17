cmake_minimum_required(VERSION 3.15)

project(codetests)
set(LIBNAME spike_driver)
file(GLOB_RECURSE LIB_SRCS test*)



#add_library(${LIBNAME} SHARED ${LIB_SRCS})
#target_include_directories(${LIBNAME} PUBLIC /home/yzx/ventus-llvm/llvm-project/install/lib)


set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized"
        )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(codetests hello.cpp)
target_link_libraries(codetests PRIVATE ${LIBNAME})
