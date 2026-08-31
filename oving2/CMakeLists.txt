cmake_minimum_required(VERSION 3.10)

project(temp_reader)

# configure_file(
#   ${CMAKE_CURRENT_SOURCE_DIR}/temps.txt
#   ${CMAKE_CURRENT_BINARY_DIR}/temps.txt
#   COPYONLY
# )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oving2_1a a.cpp)
add_executable(oving2_1b b.cpp)
add_executable(oving2_6 2_6.cpp)