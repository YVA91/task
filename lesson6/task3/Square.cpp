#include "Square.h"
#include <iostream>


Square::Square(int aa) {
    this->a = aa;
}

void Square::print() {
    std::cout << "�������: " << std::endl;
    std::cout << "�������: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
    std::cout << "����: " << "A = " << this->A << " " << "B = " << this->A << " " << "C = " << this->A << "D = " << this->A << std::endl;
}