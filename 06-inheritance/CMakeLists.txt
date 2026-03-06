cmake_minimum_required(VERSION 4.1)
project(06_inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(06_inheritance
        Account.cpp
        Account.h
        Account_Util.cpp
        Account_Util.h
        Checking_Account.cpp
        Checking_Account.h
        main.cpp
        Savings_Account.cpp
        Savings_Account.h
        Trust_Account.cpp
        Trust_Account.h)
