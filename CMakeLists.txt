cmake_minimum_required(VERSION 4.0)
project(chip8)

set(CMAKE_CXX_STANDARD 20)

add_executable(chip8 main.cpp
        chip8.cpp
        chip8.h)
