# Settings
cmake_minimum_required(VERSION 3.11)
project(arkulib_project)

# Create executable
set(TARGET_NAME ${PROJECT_NAME})
add_executable(${TARGET_NAME})

# Adding arkulib cmake
add_subdirectory(arkulib INTERFACE)
include_directories(${CMAKE_SOURCE_DIR}/arkulib/include) # important : other projects called by this cmake will know this include directory

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