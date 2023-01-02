cmake_minimum_required(VERSION 3.18)

set(PICO_SDK_PATH "/home/pi/rpi_pico/pico-sdk")

include(pico_sdk_import.cmake)

project(my_demo C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(my_demo main.c)

target_link_libraries(my_demo pico_stdlib hardware_pwm)


