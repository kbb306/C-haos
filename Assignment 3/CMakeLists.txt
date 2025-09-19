CMAKE_MINIMUM_REQUIRED(VERSION 4.0)
project(ATM C)
set(CMAKE_C_STANDARD 11)
add_executable(ATM main.c
        accounts.h
        accounts.c)