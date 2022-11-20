# Settings
cmake_minimum_required(VERSION 3.13)
project(arkulib_project)

add_executable(${PROJECT_NAME})

# Link arkulib_project to ARKULIB
add_subdirectory(arkulib)
include_directories(${CMAKE_SOURCE_DIR}/arkulib/include)
target_link_libraries(${PROJECT_NAME} PRIVATE Arkulib)

# Get source files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*")

# Link files to project target
target_sources(${PROJECT_NAME} PRIVATE ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE "src/")

# Enable C++17
set_target_properties(${PROJECT_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        )

# Enable good warnings
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -pedantic-errors -O2)