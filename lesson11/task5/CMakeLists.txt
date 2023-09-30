cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_SANDART 20)
set(CMAKE_CXX_SANDART_REQUIRED True)

project(task5)
include_directories(lib)
add_executable(task5 task5.cpp)
target_link_libraries (task5 lib_dll)

add_subdirectory(Lib)


