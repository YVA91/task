
#include <iostream>
#include <locale>
#include <Windows.h>
#include <exception>
#include <string>


int function(std::string str, int forbidden_length) {
    int x = str.length();
    if (x == forbidden_length) {
        throw std::length_error("Вы ввели слово запретной длины! До свидания");
    }
    return x;
}

void recursion() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int z;
    std::string str;
    std::cout << "Введите запретную длину: ";
    std::cin >> z;
    std::cout << "Введите слово: ";
    std::cin >> str;

    try {
        std::cout << "Длина слова " << "\"" << str << "\"" << " равна " << function(str, z) << std::endl;
        recursion();
    }
    catch (const std::length_error& ex) { std::cout << ex.what() << std::endl; }
}

int main()
{
    recursion();
}

