# Purpose
* I originally wanted to make a music visualizer in C++, which would require the use of libraries such as openGL, or libsndfile. At the time of writing, I lack the knowledge to use C++ dependency management. This repository will be used to record what I have learned about makefiles and cmake.

# Introduction
## What is make?
* From what I gather, make is a form of build system that runs commands in the console, to compile, link, etc. many files together, in a behaviour determined by the user.
* These instructions are stored in makefiles (must be named "makefile"), and run off a target system, where the user can define what gets run, when.

## What is CMake?
* Cmake is a system that works with make. As projects get larger with more dependencies, the makefiles can become convoluted and messy. CMake utilizes clear and concise instructions to work on top of this, with simplified commands that allow us to "build" a makefile ourselves.
    * Options within the CMakeLists of libraries can be enabled via `-D<option>=<on/off>`

    * Make sure to always build your project after configuring it, otherwise the `lib<name>.a` file won't be generated
# Extra Info
* CMake tutorial I followed when making this repository: https://www.youtube.com/watch?v=nlKcXPUJGwA
* I have not yet tried other C++ dependency managers such as vcpkg, but I may in the future.