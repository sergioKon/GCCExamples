cmake_minimum_required(VERSION 3.29)
project(linux)

set(CMAKE_CXX_STANDARD 20)

add_executable(linux linux.cpp, help.h)
