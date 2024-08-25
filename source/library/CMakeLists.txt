project(library)

add_library(${PROJECT_NAME} SHARED)

set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_SCAN_FOR_MODULES ON)

target_compile_definitions(${PROJECT_NAME}
        PRIVATE
        "API_EXPORT=__declspec(dllexport)"
        INTERFACE
        "API_EXPORT=__declspec(dllimport)"
)

add_subdirectory(include)

add_subdirectory(src)