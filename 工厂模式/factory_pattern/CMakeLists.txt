cmake_minimum_required(VERSION 3.19)
project(factory_pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(factory_pattern main.cpp Product.cpp Factory.cpp Factory.h)