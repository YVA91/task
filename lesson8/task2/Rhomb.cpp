#include "Rhomb.h"
#include <iostream>
#include "Error.h"


    Rhomb::Rhomb(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;

        if ((A != C) || (B != D)) {
            throw Error("Ошибка создания фигуры.Причина: угол A должен быть равен С и угол B должен быть равен D");
        }
        else if ((a != c) || (a != d) || (a != b)) {
            throw Error("Ошибка создания фигуры.Причина: все стороны должны быть равны");
        }
    }

    void  Rhomb::print() {
        std::cout << "Ромб: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << " " << "D = " << this->B << std::endl;
    }