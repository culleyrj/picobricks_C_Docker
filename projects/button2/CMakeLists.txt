cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(button2)

pico_sdk_init()

add_executable(button2
    button2.c
)

pico_add_extra_outputs(button2)

target_link_libraries(button2 pico_stdlib)
