# All CMake projects require a version setting
cmake_minimum_required(VERSION 3.21.2)

# This will be the name of your project
project(CMakePurgatory)

# Code to automatically download the submodules, when building with CMake (Uncomment if you want to use):
# Check if git is initialized in your root folder
#find_package(Git QUIET)
#if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
#    # Set it to grab the submodules
#    option(GIT_SUBMODULE "Check submodules during build" ON)
#    # If the submodule should exist, 
#    if(GIT_SUBMODULE)
#        message(STATUS "Submodule update") 
#        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
#                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
#        # If the submodule does not exist, output an error message
#        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
#            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
#        endif()
#    endif()
#endif()

# Check the submodules (in this case glfw), to determine if it exists by seeing if its CMakeLists.txt exists
if(NOT EXISTS ${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt)
    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

# Use this to define the main executeable.
add_executable(${PROJECT_NAME} main.cpp)

# Use this to search through sub directories of the root
add_subdirectory(Adder)
add_subdirectory(external/glfw)

#This will allow you to use #include as if you were also in the Adder folder, so it would be #include "adder.h" if you did this.
#target_include_directories(${PROJECT_NAME} PUBLIC Adder)
target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include) 

# Link the directories containing the .a library files
target_link_directories(${PROJECT_NAME} 
    PRIVATE Adder
    PRIVATE external/glfw/src
)

# Link libraries by the name that is defined by add_library() in the library's CMakeLists.txt
target_link_libraries(${PROJECT_NAME} 
    adder 
    glfw
)
