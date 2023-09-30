#include "Rhomb.h"
#include <iostream>

    Rhomb::Rhomb(int aa, int aA, int aB) {
        this->a = aa;
        this->A = aA;
        this->B = aB;
    }

    void  Rhomb::print() {
        std::cout << "Ромб: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << " " << "D = " << this->B << std::endl;
    }