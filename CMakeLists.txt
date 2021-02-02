cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)

project(main C CXX ASM)

pico_sdk_init()

add_executable(main
        src/main.c
        )

target_link_libraries(main pico_stdlib)

pico_add_extra_outputs(main)
