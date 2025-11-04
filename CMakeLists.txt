cmake_minimum_required(VERSION 3.10)

project(hello_world LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable from source files
add_executable(hello 
    src/main.cpp
    src/day1/day1.cpp)

add_executable(day2
    src/day2/day2.cpp
    src/day2/terrestrial.cpp
    src/day2/aquatic.cpp
    src/day2/penguin.cpp
    )