cmake_minimum_required(VERSION 3.23)
project(rtl)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. SRCS)

add_library(rtl SHARED VMMUtest.cpp)

