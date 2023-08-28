#include "Parallelogram.h"
#include <iostream>
#include "Error.h"

    Parallelogram::Parallelogram(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;


        if ((A != C) || (B != D) ) {
            throw Error("Ошибка создания фигуры.Причина: угол A должен быть равен С и угол B должен быть равен D");
        }
        else if ((a != c) || (b != d)) {
            throw Error("Ошибка создания фигуры.Причина: сторона а должна быть равно c и сторона b должна быть равна d");
        }
    }

    void  Parallelogram::print() {
        std::cout << "Параллелограмм: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->b << " " << "c = " << this->a << " " << "d = " << this->b << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << "D = " << this->B << std::endl;
    }

