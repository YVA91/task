
#include <iostream>
#include "Greeter.h"
#include <locale>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string std;
    std::cout << "Введите имя: ";
    std::cin >> std;
    std::cout << std::endl;

    Greeter greeter(std);
    greeter.greet(std);

    system("pause");
}

