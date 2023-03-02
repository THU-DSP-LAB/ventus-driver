cmake_minimum_required(VERSION 3.22)
set(PROJECT rtlsim)
set(PROJECT2 rtlsim2)
PROJECT(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

#MMUtest or GPGPU_top
set(TOP MMUtest)
set(RTL_DIR ${CMAKE_SOURCE_DIR}/rtl)

file(GLOB_RECURSE SRCS "*.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp" "${CMAKE_SOURCE_DIR}/sim/page_table/*.cpp")
file(GLOB RTL_SRC "${RTL_DIR}/${TOP}.v")

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
#set(VL_FLAGS
#            --cc ${TOP} --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic
#            -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP -Wno-UNUSEDSIGNAL
#            --x-initial unique --x-assign unique
#            ${RTL_SRC}
#            -I${RTL_DIR}
#            -j ${threads_var}
#            --lib-create ${PROJECT}
#            )

set(VL_FLAGS
            --cc ${TOP} --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic
            -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP -Wno-UNUSEDSIGNAL
            --x-initial unique --x-assign unique
            )

#使用verilator in cmake生成verilator动态库

find_package(verilator HINTS $ENV{VERILATOR_ROOT})
if (NOT verilator_FOUND)
    message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

#add_library(${PROJECT} STATIC ${SRCS})

#set_target_properties(${PROJECT}_static PROPERTIES OUTPUT_NAME "${PROJECT}")
#set_target_properties(${PROJECT}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

add_library(${PROJECT} OBJECT)
set_property(TARGET ${PROJECT} PROPERTY POSITION_INDEPENDENT_CODE 1)
add_library(${PROJECT}_static STATIC  $<TARGET_OBJECTS:${PROJECT}>)
set_target_properties(${PROJECT}_static PROPERTIES OUTPUT_NAME ${PROJECT})
add_library(${PROJECT}_shared SHARED  $<TARGET_OBJECTS:${PROJECT}>)
set_target_properties(${PROJECT}_shared PROPERTIES OUTPUT_NAME ${PROJECT})

verilate(${PROJECT}
        SOURCES ${RTL_SRC}
        TOP_MODULE ${TOP}
        INCLUDE_DIRS ${RTL_DIR}
        THREADS ${threads_var}
#        OPT_GLOBAL ${CXX_FLAGS}
        VERILATOR_ARGS  ${VL_FLAGS}
        )
#使用add_custom_target的方式生成verialtor动态库
#
#add_custom_target(
#        ${PROJECT}
#        ALL
#        COMMAND verilator --build ${VL_FLAGS} ${SRCS}  -CFLAGS '${CMAKE_CXX_FLAGS}'
#        COMMAND echo "[INFO] libray rtlsim build finished"
#)
#
#file(GLOB_RECURSE SRCS2 "*.cpp"
#        "${CMAKE_SOURCE_DIR}/common/*.cpp"
#        "${CMAKE_SOURCE_DIR}/sim/page_table/*.cpp"
#        "${CMAKE_SOURCE_DIR}/veridriver/*.cpp"
#        "${CMAKE_SOURCE_DIR}/include/*.cpp"
#        "${CMAKE_SOURCE_DIR}/tests/main.cpp"
#        )
#
#set(VL_FLAGS2
#            --cc ${TOP} --exe --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic
#            --debug
#            -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP -Wno-UNUSEDSIGNAL
#            --x-initial unique --x-assign unique
#            ${RTL_SRC}
#            -I${RTL_DIR}
#            -j ${threads_var}
##            --prefix all_driver
#            --Mdir veri_out_all
#        )
#message(${SRCS2})
#
#add_custom_target(
#        ${PROJECT2}
#        ALL
#        COMMAND verilator --build ${VL_FLAGS2} ${SRCS2}  -CFLAGS '${CMAKE_CXX_FLAGS} -I${CMAKE_SOURCE_DIR}/sim -I${CMAKE_SOURCE_DIR}/veridriver'
#        COMMAND echo "[INFO] libray rtlsim2 build finished"
#)
