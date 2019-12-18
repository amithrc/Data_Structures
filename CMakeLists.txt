cmake_minimum_required(VERSION 3.15)
project(Data_Structures C)

set(CMAKE_C_STANDARD 11)

add_executable(Data_Structures main.c headers/ds_general.h src/ds_general.c headers/ds_stack.h headers/ds_array.h)