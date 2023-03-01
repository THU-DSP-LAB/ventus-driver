cmake_minimum_required(VERSION 3.22)
set(PROJECT rtlsim)
set(PROJECT2 rtlsim2)
PROJECT(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

set(TOP MMUtest)
set(RTL_DIR ${CMAKE_SOURCE_DIR}/rtl)

file(GLOB_RECURSE SRCS "*.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp" "${CMAKE_SOURCE_DIR}/sim/page_table/*.cpp")
file(GLOB RTL_SRC "${RTL_DIR}/${TOP}.v")

set(CMAKE_CXX_FLAGS -std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds
                    -fPIC -Wno-maybe-uninitialized
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
            ${RTL_SRC}
            -I${RTL_DIR}
            -j ${threads_var}
            --lib-create ${PROJECT}
            )
add_custom_target(
        ${PROJECT}
        ALL
        COMMAND verilator --build ${VL_FLAGS} ${SRCS}  -CFLAGS '${CMAKE_CXX_FLAGS}'
        COMMAND echo "[INFO] libray rtlsim build finished"
)

file(GLOB_RECURSE SRCS2 "*.cpp"
        "${CMAKE_SOURCE_DIR}/common/*.cpp"
        "${CMAKE_SOURCE_DIR}/sim/page_table/*.cpp"
        "${CMAKE_SOURCE_DIR}/veridriver/*.cpp"
        "${CMAKE_SOURCE_DIR}/include/*.cpp"
        "${CMAKE_SOURCE_DIR}/tests/main.cpp"
        )

set(VL_FLAGS2
            --cc ${TOP} --exe --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic
            --debug
            -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP -Wno-UNUSEDSIGNAL
            --x-initial unique --x-assign unique
            ${RTL_SRC}
            -I${RTL_DIR}
            -j ${threads_var}
#            --prefix all_driver
            --Mdir veri_out_all
        )
message(${SRCS2})

add_custom_target(
        ${PROJECT2}
        ALL
        COMMAND verilator --build ${VL_FLAGS2} ${SRCS2}  -CFLAGS '${CMAKE_CXX_FLAGS} -I${CMAKE_SOURCE_DIR}/sim -I${CMAKE_SOURCE_DIR}/veridriver'
        COMMAND echo "[INFO] libray rtlsim2 build finished"
)
