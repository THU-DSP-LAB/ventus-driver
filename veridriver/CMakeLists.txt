cmake_minimum_required(VERSION 3.23)
set(PROJECT veridriver)
project(${PROJECT})

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. DIR_LIB_SRCS)

add_library(${PROJECT} SHARED ${DIR_LIB_SRCS} ../include/ventus.h)
install(TARGETS ${PROJECT} LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib)