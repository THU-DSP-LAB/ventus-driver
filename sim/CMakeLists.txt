cmake_minimum_required(VERSION 3.22)
set(PROJECT rtlsim)
PROJECT(${PROJECT})

set(CMAKE_CXX_STANDARD 11)

set(TOP MMUtest)
set(RTL_DIR ${CMAKE_SOURCE_DIR}/rtl)
# set(RTL_DIR ${RTL_DIR}\ ${CMAKE_SOURCE_DIR}/../test)
file(GLOB_RECURSE SRCS "*.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp")
file(GLOB_RECURSE HEADER "*.h" "${CMAKE_SOURCE_DIR}/include/*.h" "${CMAKE_SOURCE_DIR}/common/*.h")
file(GLOB RTL_SRC "${RTL_DIR}/${TOP}.v")

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds\
                    -fPIC -Wno-maybe-uninitialized\
                    -I${CMAKE_SOURCE_DIR}/include\
                    -I${CMAKE_SOURCE_DIR}/common")



execute_process(COMMAND python -c "import multiprocessing as mp; print(mp.cpu_count())"
                WORKING_DIRECTORY .
                TIMEOUT 2
                OUTPUT_VARIABLE threads_var
                OUTPUT_STRIP_TRAILING_WHITESPACE
                )
set(VL_FLAGS 
    "--exe --cc ${TOP} --top-module ${TOP} -O2 --language 1800-2009 --assert -Wall -Wpedantic\
    -Wno-DECLFILENAME -Wno-REDEFMACRO -Wno-MODDUP\
    --x-initial unique --x-assign unique\
    ${RTL_SRC}\
    -j ${threads_var}")

message(${SRCS})
message(STATUS ${HEADER})
# message(${RTL_DIR})
# message(STATUS ${RTL_SRC})
message(${CMAKE_CXX_FLAGS})
message(${threads_var})
message(STATUS verilator --build ${VL_FLAGS} ${SRCS} -CFLAGS '${CMAKE_CXX_FLAGS}')

include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/sim/common)

add_custom_target(
    ${PROJECT}
    ALL
    COMMAND verilator --build ${VL_FLAGS} ${SRCS} -CFLAGS '${CMAKE_CXX_FLAGS}' )


verilator --build --exe --cc MMUtest --top-module MMUtest -O2 --language 1800-2009 --assert -Wall -Wpedantic    -Wno-DECLFILENAME -Wno-REDEFMACRO    --x-initial unique --x-assign unique    /home/yzx/ventus-driver/rtl/MMUtest.v    -j 12 /home/yzx/ventus-driver/common/vt_utils.cpp /home/yzx/ventus-driver/sim/common/controller.cpp /home/yzx/ventus-driver/sim/processor.cpp -CFLAGS '-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds                    -fPIC -Wno-maybe-uninitialized                    -I/home/yzx/ventus-driver/include                    -I/home/yzx/ventus-driver/common -I/home/yzx/ventus-driver/sim/common' -I/home/yzx/ventus-driver/rtl -Wno-MODDUP -Wno-UNUSEDSIGNAL -o processorlibtest