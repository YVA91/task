#include "Rectangles.h"
#include <iostream>
#include "Error.h"


Rectangles::Rectangles(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
    this->a = aa;
    this->b = ab;
    this->c = ac;
    this->d = ad;
    this->A = aA;
    this->B = aB;
    this->C = aC;
    this->D = aD;


    if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
        throw Error("Ошибка создания фигуры.Причина: каждый угол должен быть равено 90");
    }
    else if ((a != c) || (b != d)) {
        throw Error("Ошибка создания фигуры.Причина: сторона а должна быть равно c и сторона b должна быть равна d");
    }
}

void Rectangles::print() {
    std::cout << "Прямоугольник: " << std::endl;
    std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->a << " d = " << this->b << std::endl;
    std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << " D = " << this->A << std::endl;
}