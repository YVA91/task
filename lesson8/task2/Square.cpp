#include "Square.h"
#include <iostream>
#include "Error.h"

Square::Square(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
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
    else if ((a != c) || (a != b) || (a != d)) {
        throw Error("Ошибка создания фигуры.Причина: все стороны должны быть равны");
    }


}

void Square::print() {
    std::cout << "Квадрат: " << std::endl;
    std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
    std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->A << " " << "C = " << this->A << "D = " << this->A << std::endl;
}
