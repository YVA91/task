#include "EquilateralTriangle.h"
#include <iostream>

    EquilateralTriangle::EquilateralTriangle(int aa) {
        this->a = aa;
    }

    void EquilateralTriangle::print() {
        std::cout << "Равносторонний треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->a << " c = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << std::endl;
    }

