#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
#include <Windows.h>
#include "counter.h"


void consolWork(Counter counter) {
    std::string x;
    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    std::cin >> x;

    if (x == "x") {
        std::cout << "До свидания!";
        return;
    }
    else if (x == "+") {
        counter.сountPlus();
        consolWork(counter);
    }
    else if (x == "-") {
        counter.сountMinus();
        consolWork(counter);
    }
    else if (x == "=") {
        counter.printCount();
        consolWork(counter);
    }
    else {
        std::cout << "Введена не верная команда!" << std::endl;
        consolWork(counter);
    }
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    std::string ask;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> ask;
    std::transform(ask.begin(), ask.end(), ask.begin(), ::tolower);
    std::cout << std::endl;

    Counter counter;
    if (ask == "да") {
        int x;
        std::cout << " Введите начальное значение счётчика: ";
        std::cin >> x;
        counter = Counter(x);
    }

    consolWork(counter);

}