cmake_minimum_required(VERSION 3.10)

project(temp_reader)

# configure_file(
#   ${CMAKE_CURRENT_SOURCE_DIR}/temps.txt
#   ${CMAKE_CURRENT_BINARY_DIR}/temps.txt
#   COPYONLY
# )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oving2_1 1.cpp)
add_executable(oving2_2 2.cpp)
add_executable(oving2_3 3.cpp)
add_executable(oving2_4 4.cpp)
add_executable(oving2_5 5.cpp)
add_executable(oving2_6 6.cpp)
