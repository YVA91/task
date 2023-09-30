cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_SANDART 20)
set(CMAKE_CXX_SANDART_REQUIRED True)

project(task5_lib)
set(lib Triangle.cpp Square.cpp RightTriangle.cpp Rhomb.cpp Rectangles.cpp Quadrilateral.cpp Parallelogram.cpp Isoscelestriangle.cpp Figure.cpp EquilateralTriangle.cpp Triangle.h Square.h RightTriangle.h Rhomb.h Rectangles.h Quadrilateral.h Parallelogram.h Isoscelestriangle.h Figure.h EquilateralTriangle.h)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (lib_dll SHARED ${lib})

