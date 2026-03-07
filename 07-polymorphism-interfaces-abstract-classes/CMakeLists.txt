cmake_minimum_required(VERSION 4.1)
project(07_polymorphism_interfaces_abstract_classes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(07_polymorphism_interfaces_abstract_classes
        Account.cpp
        Account.h
        Account_Util.cpp
        Account_Util.h
        Checking_Account.cpp
        Checking_Account.h
        I_Printable.cpp
        I_Printable.h
        main.cpp
        Savings_Account.cpp
        Savings_Account.h
        Trust_Account.cpp
        Trust_Account.h)
