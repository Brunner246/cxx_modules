project(executable)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
        src/main.cpp)

set_target_properties(${PROJECT_NAME}
        PROPERTIES
        CXX_SCAN_FOR_MODULES ON)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_SOURCE_DIR}/source/library/include
        ${PROJECT_BINARY_DIR}
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        library
)