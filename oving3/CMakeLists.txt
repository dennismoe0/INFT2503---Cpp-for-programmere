cmake_minimum_required(VERSION 3.10)
project(oving3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(circle    main.cpp Circle.cpp)
add_executable(commodity commodity_main.cpp commodity.cpp)
add_executable(strings   string_main.cpp)