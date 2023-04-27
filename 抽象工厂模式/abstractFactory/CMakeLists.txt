cmake_minimum_required(VERSION 3.19)
project(abstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractFactory main.cpp apple.cpp apple.h banana.cpp banana.h pear.cpp pear.h AbstractFactory.cpp AbstractFactory.h)