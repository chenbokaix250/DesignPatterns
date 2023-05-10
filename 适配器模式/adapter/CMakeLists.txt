cmake_minimum_required(VERSION 3.10)
project(adapter_pattern CXX)


# include_directories(
#     /usr/local/include
# )

# link_libraries(
#     /usr/local/lib
# )

add_executable(adapter_pattern main.cpp  Adapter.cpp  Adapter.h)
# target_link_libraries(abstraction_pattern )