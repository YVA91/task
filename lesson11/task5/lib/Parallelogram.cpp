#include "Parallelogram.h"
#include <iostream>

    Parallelogram::Parallelogram(int aa, int ab, int aA, int aC) {
        this->a = aa;
        this->b = ab;
        this->A = aA;
        this->B = aC;
    }

    void  Parallelogram::print() {
        std::cout << "��������������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " " << "b = " << this->b << " " << "c = " << this->a << " " << "d = " << this->b << std::endl;
        std::cout << "����: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << "D = " << this->B << std::endl;
    }

