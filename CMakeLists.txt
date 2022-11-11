# Settings
cmake_minimum_required(VERSION 3.11)
project(arkulib_project)

# Create arkulib_project
set(TARGET_NAME ${PROJECT_NAME})
add_executable(${TARGET_NAME})

# Link arkulib_project to ARKULIB
add_subdirectory(arkulib)
include_directories(${CMAKE_SOURCE_DIR}/arkulib/include)
target_link_libraries(${TARGET_NAME} PRIVATE arkulib)

# Get source files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*")

# Link files to project target
target_sources(${TARGET_NAME} PRIVATE ${SRC_FILES})
target_include_directories(${TARGET_NAME} PRIVATE "src/")

# Enable C++17
set_target_properties(${TARGET_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        )

# Enable good warnings
target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -Wpedantic -pedantic-errors -O2)