#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>
#include "Figure.h"
#include "EquilateralTriangle.h"
#include "Isoscelestriangle.h"
#include "RightTriangle.h"
#include "Triangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Quadrilateral.h"
#include "Rectangles.h"

#include "Error.h"

void print_info(Figure* figure) {
    figure->print();
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    try
    {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        print_info(&triangle);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        RightTriangle rightTriangle(10, 20, 30, 50, 40, 90);
        print_info(&rightTriangle);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Isoscelestriangle isoscelestriangle(10, 20, 10, 40, 100, 40);
        print_info(&isoscelestriangle);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        EquilateralTriangle equilateralTriangle(10, 10, 10, 60, 60, 60);
        print_info(&equilateralTriangle);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }


    try
    {
        Quadrilateral quadrilateral(10, 20, 30, 40, 90, 90, 90, 90);
        print_info(&quadrilateral);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Rectangles rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        print_info(&rectangle);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Square square(10, 10, 10, 10, 90, 90, 90, 90);
        print_info(&square);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Parallelogram parallelogram(10, 10, 10, 10, 90, 90, 90, 90);
        print_info(&parallelogram);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

    try
    {
        Rhomb rhomb(10, 10, 10, 10, 90, 90, 90, 90);
        print_info(&rhomb);
    }
    catch (const Error& err)
    {
        std::cout << err.what() << std::endl;
    }

}