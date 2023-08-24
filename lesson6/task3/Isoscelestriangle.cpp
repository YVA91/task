#include "Isoscelestriangle.h"
#include <iostream>

    Isoscelestriangle::Isoscelestriangle(int aa, int ab, int aA, int aB) {
        this->a = aa;
        this->b = ab;
        this->c = aa;
        this->A = aA;
        this->B = aB;
        this->C = aA;
    }

    void Isoscelestriangle::print() {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->A << std::endl;
    }