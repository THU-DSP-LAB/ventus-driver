cmake_minimum_required(VERSION 3.22)
set(PROJECT rtlsim)
set(PROJECT2 rtllib)
PROJECT(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

#MMUtest or GPGPU_top
set(TOP MMUtest)
set(RTL_DIR ${CMAKE_SOURCE_DIR}/rtl)

include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/page_table)
file(GLOB_RECURSE SRCS "*.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/page_table/*")
file(GLOB RTL_SRC "${RTL_DIR}/${TOP}.v")

#message(${SRCS})

set(CXX_FLAGS -std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds
                    -Wno-maybe-uninitialized
                    -I${CMAKE_SOURCE_DIR}/include
                    -I${CMAKE_SOURCE_DIR}/common
                    -I${CMAKE_SOURCE_DIR}/sim/page_table
                    )
execute_process(COMMAND python -c "import multiprocessing as mp; print(mp.cpu_count())"
                TIMEOUT 2
                OUTPUT_VARIABLE threads_var
                OUTPUT_STRIP_TRAILING_WHITESPACE
                )

set(VL_FLAGS
            --cc ${TOP} --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic
            -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP -Wno-UNUSEDSIGNAL
            --x-initial unique --x-assign unique
            --debug
            --lib-create ${PROJECT2}
            )

#使用verilator in cmake生成verilator静态库

find_package(verilator HINTS $ENV{VERILATOR_ROOT})
if (NOT verilator_FOUND)
    message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

set(CMAKE_POSITION_INDEPENDENT_CODE True)

add_library(${PROJECT} STATIC ${SRCS})

add_library(${PROJECT2} STATIC)
target_link_libraries(${PROJECT} PUBLIC ${PROJECT2})



verilate(${PROJECT2}
        SOURCES ${RTL_SRC}
        TOP_MODULE ${TOP}
        INCLUDE_DIRS ${RTL_DIR}
        THREADS ${threads_var}
        OPT_GLOBAL ${CXX_FLAGS}
        VERILATOR_ARGS  ${VL_FLAGS}
        )

