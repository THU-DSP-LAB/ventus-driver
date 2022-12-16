cmake_minimum_required(VERSION 3.23)
project(ventus_driver)

set(CMAKE_CXX_STANDARD 11)

#include_directories(common)
include_directories(include)
#include_directories(obj_dir)
#include_directories(sim)
#include_directories(sim/common)
#include_directories(tests)
#include_directories(veridriver)
#include_directories(verilator/include)
#include_directories(verilator/include/gtkwav)
#include_directories(verilator/include/vltstd)
#include_directories(verilator/src)
#include_directories(verilator/src/obj_dbg)
#include_directories(verilator/src/obj_opt)
#include_directories(verilator/test_regress/t)

add_executable(ventus_driver
        tests/test_mmu.cpp)
