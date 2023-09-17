#include "Rectangles.h"
#include <iostream>

Rectangles::Rectangles(int aa, int ab) {
    this->a = aa;
    this->b = ab;
}

void Rectangles::print() {
    std::cout << "Прямоугольник: " << std::endl;
    std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->a << " d = " << this->b << std::endl;
    std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << " D = " << this->A << std::endl;
}