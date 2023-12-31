set(PROJECT rtlsim)
set(PROJECT2 rtllib)
PROJECT(${PROJECT})


#MMUtest or GPGPU_top
set(TOP GPGPU_top)
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
#            --lib-create ${PROJECT2}
            --debug --trace-structs
            )

#使用verilator in cmake生成verilator动态库

find_package(verilator HINTS $ENV{VERILATOR_ROOT})
if (NOT verilator_FOUND)
    message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

set(CMAKE_POSITION_INDEPENDENT_CODE True)

add_library(${PROJECT} SHARED ${SRCS})

add_library(${PROJECT2} SHARED)
target_link_libraries(${PROJECT} PUBLIC ${PROJECT2})

verilate(${PROJECT2}
        TRACE
        SOURCES ${RTL_SRC}
        TOP_MODULE ${TOP}
        INCLUDE_DIRS ${RTL_DIR}
        THREADS ${threads_var}
        OPT_GLOBAL ${CXX_FLAGS}
        VERILATOR_ARGS  ${VL_FLAGS}
        )

if(ENABLE_INSTALL)
    install(TARGETS ${PROJECT} ${PROJECT2}  LIBRARY DESTINATION ${DRIVER_LIB_INSTALL_DIR} COMPONENT "lib")
endif()

