

#include "Triangle.h"
#include <iostream>


    Triangle::Triangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;
      
    }

    void Triangle::print() {
        std::cout << "�����������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "����: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }
