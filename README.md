# Purpose
* I originally wanted to make a music visualizer in C++, which would require the use of libraries such as openGL, or libsndfile. At the time of writing, I lack the knowledge to use C++ dependency management. This repository will be used to record what I have learned about makefiles and cmake.

# Introduction
## What is make?
* From what I gather, make is a form of build system that runs commands in the console, to compile, link, etc. many files together, in a behaviour determined by the user.
* These instructions are stored in makefiles (must be named "makefile"), and run off a target system, where the user can define what gets run, when.

## What is CMake?
* Cmake is a system that creates makefiles from defined instructions. As projects get larger with more dependencies, the makefiles can become convoluted and messy. CMake utilizes clear and concise instructions to work on top of this, with simplified commands that allow us to "build" a makefile ourselves.
There are some steps to remember when building a project with cmake to running it (I don't know the console commands, but they exist. I just used the vscode cmake addon.)
    1. Configure your project
    2. Build your project
    3. At this point, a `build` directory should have been already generated. Change directory into it and run `make`. This will build your project and output it as an exe, with your project's defined name.
    4. While in thie `build` directory, run `./<PROJECT_NAME>` and your file will be run.

### Extra Notes
* Options within the CMakeLists of libraries can be enabled via `-D<option>=<on/off>`
* Make sure to always build your project after configuring it, otherwise the `lib<name>.a` file won't be generated

## Code layout
* `CMakeLists.txt` stores the instructions used by CMake, to generate and link libraries
* `makefile` in the root directory acts as a very simple makefile example.
    * The makefile of the compiled project will be much more complex, but we do not need to touch it; we only need to care about CMake.
* The `Adder` sub-directory stores a library named "adder" which contains a c file with an add function. This library is just an example of how libraries can be defined with cmake


# Extra Info and Resources
* CMake tutorial I followed when making this repository: https://www.youtube.com/watch?v=nlKcXPUJGwA
* I have not yet tried other C++ dependency managers such as vcpkg, but I may in the future.
* The VSCode CMake extension I used: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools