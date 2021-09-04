# All CMake projects require a version setting
cmake_minimum_required(VERSION 3.21.2)

# This will be the name of your project
project(CMakePurgatory)

# Use this to define the main executeable.
add_executable(${PROJECT_NAME} main.cpp)

# Use this to search through sub directories of the root
add_subdirectory(Adder)

#target_include_directories(#{PROJECT_NAME} PUBLIC Adder) This will allow you to use #include as if you were also in the Adder folder, so it would be #include "adder.h" if you did this.

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

# Link libraries by the name that is defined by add_library() in the library's CMakeLists.txt
target_link_libraries(${PROJECT_NAME} adder)
