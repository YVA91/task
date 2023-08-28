#include "EquilateralTriangle.h"
#include <iostream>
#include "Error.h"

    EquilateralTriangle::EquilateralTriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;

        if (a != c || a != b) {
            throw Error("Ошибка создания фигуры.Причина: все стороны должны быть равны");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("Ошибка создания фигуры.Причина: одна или несколько сторон меньше или равны нулю");
        }
        else if (A != C || A != B) {
            throw Error("Ошибка создания фигуры.Причина: все углы должны быть равны 60");
        }
      
    }

    void EquilateralTriangle::print() {
        std::cout << "Равносторонний треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->a << " c = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << std::endl;
    }

