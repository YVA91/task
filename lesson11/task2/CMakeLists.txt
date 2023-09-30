cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_SANDART 20)
set(CMAKE_CXX_SANDART_REQUIRED True)

project(task2)

set(lib_dll Leaver.cpp Leaver.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (leaver_dll SHARED ${lib_dll})
add_executable(task2 task2.cpp)
target_link_libraries (task2 leaver_dll)

