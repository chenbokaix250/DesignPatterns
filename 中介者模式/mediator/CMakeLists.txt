cmake_minimum_required(VERSION 3.10)
project(mediator_pattern CXX)

set(CMAKE_CXX_STANDARD 17)
# include_directories(
#     /usr/local/include
# )

# link_libraries(
#     /usr/local/lib
# )

add_executable(mediator_pattern main.cpp Colleague.cpp Colleague.h ConcreteColleague1.h ConcreteColleague2.h ConcreteMediator.h Mediator.h)
# target_link_libraries(abstraction_pattern )