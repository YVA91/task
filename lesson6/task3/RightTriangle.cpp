#include "RightTriangle.h"
#include <iostream>


    RightTriangle::RightTriangle(int aa, int ab, int ac, int aA, int aB) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
    }

    void  RightTriangle::print() {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }
