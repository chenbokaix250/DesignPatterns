cmake_minimum_required(VERSION 3.10)
project(abstraction_pattern CXX)


# include_directories(
#     /usr/local/include
# )

# link_libraries(
#     /usr/local/lib
# )

add_executable(abstraction_pattern main.cpp Abstraction.cpp AbstractionImp.cpp Abstraction.h AbstractionImp.h)
# target_link_libraries(abstraction_pattern )