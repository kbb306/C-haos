cmake_minimum_required(VERSION 4.0)
project(Arrays C)

set(CMAKE_C_STANDARD 11)

include_directories("Assignment 4")

add_executable(Arrays
        "Assignment 4/helper.c"
        "Assignment 4/helper.h"
        "Assignment 4/main.c")
