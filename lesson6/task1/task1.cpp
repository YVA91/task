#include <iostream>
#include "func.h"
#include <locale>
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    double y;
    int z;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << std::endl;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):";
    std::cin >> z;
    std::cout << std::endl;

    if (z == 1) {
        std::cout << x << " плюс " << y << " = " << add(x, y) << std::endl;
    }
    else if (z == 2) {
        std::cout << x << " минус " << y << " = " << sub(x, y) << std::endl;
    }
    else if (z == 3) {
        std::cout << x << " умножить " << y << " = " << mult(x, y) << std::endl;
    }
    else if (z == 4) {
        if (y == 0) {
            std::cout << "На ноль делить нельзя" << std::endl;
        }
        else {
            std::cout << x << " делить на  " << y << " = " << division(x, y) << std::endl;
        }
    }
    else if (z == 5) {
        std::cout << x << " в степени  " << y << " = " << exp(x, y) << std::endl;
    }

}