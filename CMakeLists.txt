cmake_minimum_required(VERSION 3.29)
project(Binar2Decimal C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)


add_executable(Binar2Decimal main.c
        Binaer.c
        Binaer.h
        func.c
        func.h
        Hex.c
        Hex.h)
