
#include <iostream>
#include <string>
#include <Windows.h>

struct Address {
    std::string city;
    std::string street;
    int house {};
    int flat{};
    long index{};

};


void printAddress (Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.house << std::endl;
    std::cout << "Номер квартиры: " << address.flat << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    Address* address = new Address();

    std::cout << "Введите город:" << std::endl;
    std::cin >> (*address).city;
    std::cout << "Введите улицу:" << std::endl;
    std::cin >> (*address).street;
    std::cout << "Введите номер дома:" << std::endl;
    std::cin >> (*address).house;
    std::cout << "Введите номер квартиры:" << std::endl;
    std::cin >> (*address).flat;
    std::cout << "Введите индекс:" << std::endl;
    std::cin >> (*address).index;

    printAddress(*address);
    delete address;

}