cmake_minimum_required(VERSION 3.10)
project(fw_pattern CXX)


# include_directories(
#     /usr/local/include
# )

# link_libraries(
#     /usr/local/lib
# )

add_executable(fw_pattern main.cpp flyweight.cpp flyweight.h)
# target_link_libraries(abstraction_pattern )