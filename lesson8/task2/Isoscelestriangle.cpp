#include "Isoscelestriangle.h"
#include <iostream>
#include "Error.h"

    Isoscelestriangle::Isoscelestriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;

        if (a != c) {
            throw Error("Ошибка создания фигуры.Причина: сторона a не равна стороне с");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("Ошибка создания фигуры.Причина: одна или несколько сторон меньше или равны нулю");
        }
        else if (A != C) {
            throw Error("Ошибка создания фигуры.Причина: угол А не равен углу С");
        }
        else if ((A + B + C) != 180) {
            throw Error("Ошибка создания фигуры.Причина: сумма углов не равна 180");;
        }


    }

    void Isoscelestriangle::print() {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }