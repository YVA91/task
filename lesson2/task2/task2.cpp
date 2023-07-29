
#include <iostream>
#include <string>
#include <Windows.h>

struct BankAccount {
    int account{};
    std::string name;
    double balance{};

};

void newBalance(BankAccount &p, double x) {
    p.balance = x;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    BankAccount* bankAccount = new BankAccount();

    std::cout << "Введите номер счёта:" << std::endl;
    std::cin >> (*bankAccount).account;
    std::cout << "Введите имя владельца:" << std::endl;
    std::cin >> (*bankAccount).name;
    std::cout << "Введите баланс:" << std::endl;
    std::cin >> (*bankAccount).balance;

    double x;
    std::cout << "Введите новый баланс:" << std::endl;
    std::cin >> x;
    newBalance(*bankAccount, x);
   
    std::cout << "Ваш счёт: " << (*bankAccount).name << ", " << (*bankAccount).account << ", " << (*bankAccount).balance << std::endl;

    delete bankAccount;

}
