#include "Rhomb.h"
#include <iostream>

    Rhomb::Rhomb(int aa, int aA, int aB) {
        this->a = aa;
        this->A = aA;
        this->B = aB;
    }

    void  Rhomb::print() {
        std::cout << "����: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "����: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << " " << "D = " << this->B << std::endl;
    }