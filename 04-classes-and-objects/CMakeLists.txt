cmake_minimum_required(VERSION 4.1)
project(04_classes-and-objects)

set(CMAKE_CXX_STANDARD 14)

add_executable(04_new_project
        main.cpp
        Movie.cpp
        Movie.h
        Movies.cpp
	Movies.h)
