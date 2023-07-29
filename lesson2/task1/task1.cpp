
#include <iostream>
#include <string>

enum class Month {
    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь

};

std::string printMonth(Month x) {
    switch (x)
    {
    case(Month::январь):
        return "Январь";
    case(Month::февраль):
        return "Февраль";
    case(Month::март):
        return "Март";
    case(Month::апрель):
        return "Апрель";
    case(Month::май):
        return "Май";
    case(Month::июнь):
        return "Июнь";
    case(Month::июль):
        return "Июль";
    case(Month::август):
        return "Aвгуст";
    case(Month::сентябрь):
        return "Cентябрь";
    case(Month::октябрь):
        return "Октябрь";
    case(Month::ноябрь):
        return "Ноябрь";
    case(Month::декабрь):
        return "Декабрь";
    }
}

void Print() {
    std::cout << "Ввидите номер месяца: ";
    int x;
    std::cin >> x;
    if (x == 0) {
        std::cout << "До свидания" << std::endl;
    } else if (x >0 && x <= 12) 
    {
        Month month = static_cast<Month>(x);
        std::cout << printMonth(month) << std::endl;
        Print();
    }
    else {
        std::cout << "Неправильный номер!" << std::endl;
        Print();
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Print();
}
