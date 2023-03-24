cmake_minimum_required(VERSION 3.26)
project(Cours)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cours
        Operations.cpp
        Operations.h)
