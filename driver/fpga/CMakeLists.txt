include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/common)

file(GLOB_RECURSE SRCS ventus.c)

add_executable(fpga_run ${SRCS})