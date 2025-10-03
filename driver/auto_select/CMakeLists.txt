set(PROJECT auto_select_driver)
project(${PROJECT})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../common)

file(GLOB_RECURSE SRCS ./ventus.cpp)
find_package(nlohmann_json CONFIG REQUIRED)

add_library(${PROJECT} SHARED ${SRCS})
target_link_libraries(${PROJECT} PRIVATE spdlog)
target_link_libraries(${PROJECT} PRIVATE fmt)
target_link_libraries(${PROJECT} PRIVATE dl)
target_link_libraries(${PROJECT} PRIVATE nlohmann_json::nlohmann_json)

set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME "${PROJECT}")
set_target_properties(${PROJECT} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS ${PROJECT}
    LIBRARY DESTINATION lib COMPONENT "lib"
)
