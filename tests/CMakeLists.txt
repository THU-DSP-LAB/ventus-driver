cmake_minimum_required(VERSION 3.15)

project(cmake-exe-test)

set(CMAKE_CXX_STANDARD 11)

#set(TARGET1 hello)
set(TARGET2 test_mmu)
set(TARGET3 test_all)
set(TARGET4 test_processor)


#The following 3 targets make verilog file and processor.cpp to C++ library file,
#then compile vt_device.cpp and ventus.cpp with library above, creating library "librtldriver.so"
#finally, compile
#[[
add_executable(${TARGET1} ../codetests/hello.cpp)

add_dependencies(${TARGET1} rtldriver)
target_link_directories(${TARGET1} PUBLIC ${CMAKE_BINARY_DIR}/driver)
target_link_libraries(${TARGET1} librtldriver.so)
]]

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/common)
include_directories(${CMAKE_SOURCE_DIR}/sim)
include_directories(${CMAKE_SOURCE_DIR}/sim/page_table)

add_executable(${TARGET2} test_mmu.cpp)

add_dependencies(${TARGET2} rtldriver)
target_link_directories(${TARGET2} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${TARGET2} rtldriver)

add_executable(${TARGET3} main.cpp)

add_dependencies(${TARGET3} rtldriver)
target_link_directories(${TARGET3} PUBLIC ${CMAKE_BINARY_DIR}/veridriver)
target_link_libraries(${TARGET3} rtldriver)

#make verilog file to C++ class alone, and create library,
#then compile others code including processor.cpp.
#these processing aim to simplify debug of processor.cpp
file(GLOB_RECURSE SRCS "${CMAKE_SOURCE_DIR}/veridriver/*.cpp" "main.cpp" "${CMAKE_SOURCE_DIR}/common/*.cpp")
add_executable(${TARGET4} ${SRCS})
add_dependencies(${TARGET4} rtldriver)

target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/common)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/sim)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/sim/page_table)
target_include_directories(${TARGET4} PUBLIC ${CMAKE_SOURCE_DIR}/veridriver)

set(CMAKE_CXX_FLAGS -fPIC)

target_link_directories(${TARGET4} PUBLIC ${CMAKE_BINARY_DIR}/sim)
target_link_libraries(${TARGET4} PUBLIC librtlsim.a)