cmake_minimum_required(VERSION 3.10)

project(hello_world LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable from source files
add_executable(hello src/main.cpp)