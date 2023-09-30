
#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>
#include "lib/Figure.h"
#include "lib/EquilateralTriangle.h"
#include "lib/Isoscelestriangle.h"
#include "lib/RightTriangle.h"
#include "lib/Triangle.h"
#include "lib/Rhomb.h"
#include "lib/Square.h"
#include "lib/Parallelogram.h"
#include "lib/Quadrilateral.h"
#include "lib/Rectangles.h"

void print_info(Figure* figure) {
    figure->print();
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    Isoscelestriangle isoscelestriangle(10, 20, 30, 40);
    EquilateralTriangle equilateralTriangle(10);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles rectangle(10, 20);
    Square square(10);
    Parallelogram parallelogram(10, 20, 30, 40);
    Rhomb rhomb(10, 20, 30);


    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelestriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrilateral);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhomb);

    system("pause");
}