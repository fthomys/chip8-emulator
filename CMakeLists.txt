cmake_minimum_required(VERSION 4.0)
project(chip8)

set(CMAKE_CXX_STANDARD 20)

add_executable(chip8 main.cpp
        chip8.cpp
        chip8.h
        plattform.cpp
        plattform.h)



find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(chip8
        PRIVATE
        $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
        $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
        )

