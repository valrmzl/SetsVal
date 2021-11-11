cmake_minimum_required(VERSION 3.20)
project(Sets C)

set(CMAKE_C_STANDARD 99)

add_executable(Sets main.c bst.c bst.h stack.c stack.h)
