#include "RightTriangle.h"
#include <iostream>
#include "Error.h"

    RightTriangle::RightTriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;


        if (C != 90) {
            throw Error("Ошибка создания фигуры.Причина: угол С не равен 90");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("Ошибка создания фигуры.Причина: одна или несколько сторон меньше или равны нулю");
        }
        else if ((A + B + C) != 180) {
            throw Error("Ошибка создания фигуры.Причина: сумма углов не равна 180");;
        }

    }

    void  RightTriangle::print() {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }
