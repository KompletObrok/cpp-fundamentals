cmake_minimum_required(VERSION 4.1)
project(05_operator_overload_non_member)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(05_operator_overload_non_member
        main.cpp
        Mystring.cpp
        Mystring.h)
