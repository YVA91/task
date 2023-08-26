

#include <iostream>
#include <locale>
#include <Windows.h>

#define MODE 3

int add(int x, int y) {
    return x + y;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

#if defined(MODE) 
    #if MODE == 0 
    std::cout << "Работаю в режиме тренировки" << std::endl;
    #elif MODE == 1 
    std::cout << "Работаю в боевом режиме" << std::endl;
    int x, y;
    std::cout << "Введите число 1: ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Введите число 2: ";
    std::cin >> y;
    std::cout << std::endl;
    std::cout << "Результат сложения: " << add(x, y) << std::endl;
    #else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    #endif
#else 
    std::cout << "Необходимо определить MODE" << std::endl;
#endif

}
