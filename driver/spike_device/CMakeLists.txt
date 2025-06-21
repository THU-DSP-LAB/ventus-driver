set(PROJECT spike_driver)
project(${PROJECT})

set(CMAKE_CXX_FLAGS -lstdc++)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories(${SPIKE_SRC_DIR})
include_directories(${SPIKE_SRC_DIR}/spike_main)
include_directories(${SPIKE_SRC_DIR}/riscv)
include_directories(${SPIKE_SRC_DIR}/build)
include_directories(${SPIKE_SRC_DIR}/softfloat)
include_directories(${SPIKE_SRC_DIR}/fesvr)

file(GLOB_RECURSE SRCS ./ventus.cpp)

add_library(${PROJECT} SHARED ${SRCS})
target_link_directories(${PROJECT} PUBLIC ${VENTUS_INSTALL_PREFIX}/lib)
target_link_libraries(${PROJECT} PUBLIC spike_main)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(${PROJECT} PROPERTIES
    BUILD_RPATH "${VENTUS_INSTALL_PREFIX}/lib"
    INSTALL_RPATH "$ORIGIN"
)

install(TARGETS ${PROJECT}
    LIBRARY DESTINATION lib COMPONENT "lib"
)
