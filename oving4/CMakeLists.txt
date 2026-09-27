cmake_minimum_required(VERSION 3.10)
project(oving4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

add_executable(1    1.cpp)
add_executable(2    2.cpp)

target_include_directories(2 PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_directories(2 PRIVATE ${GTKMM_LIBRARY_DIRS})
target_link_libraries(2 ${GTKMM_LIBRARIES})
