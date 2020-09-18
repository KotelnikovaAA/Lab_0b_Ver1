cmake_minimum_required(VERSION 3.15)
project(Lab_0b)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab_0b main.cpp
        OperationWithMap.cpp
        OperationWithMap.h
        Reader.cpp
        Reader.h
        Writer.cpp
        Writer.h)