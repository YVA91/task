cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_SANDART 20)
set(CMAKE_CXX_SANDART_REQUIRED True)

project(task1)

set(lib Greeter.cpp Greeter.cpp)
add_library (Greeter STATIC ${lib})

include_directories(Lib)
add_executable(task1 task1.cpp)

target_link_libraries (task1 Greeter)

