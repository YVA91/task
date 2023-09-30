
#include <iostream>
#include <locale>
#include <Windows.h>
#include "LeaverLib/Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string std;
    std::cout << "Введите имя: ";
    std::cin >> std;

    Leaver leaver(std);
    leaver.leave(std);

    system("pause");
}
