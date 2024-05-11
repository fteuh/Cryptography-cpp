cmake_minimum_required(VERSION 3.14)
project(Cryptography_cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(Cryptography_cpp
        aes.cpp
        aes.h
        main.cpp)
