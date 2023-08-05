
#include <iostream>
#include <string>
#include <fstream>
#include <locale>
#include <Windows.h>

class Address {
private:
    std::string city;
    std::string street;
    int home;
    int flat;

public:
    Address(std::string acity, std::string astreet, int ahome, int flat) {
        this->city = acity;
        this->street = astreet;
        this->home = ahome;
        this->flat = flat;
    }

    std::string makeString() {
        std::string comma = ", ";
        std::string alongStr = this->city + comma + this->street + comma + std::to_string(this->home) + comma + std::to_string(this->flat);
        return alongStr;
    }
};


void sort(std::string* arrAddress , int size) {
    for (int i = size - 1; i >= 0; --i) {
        for (int j = size - 2; j >= 0; --j) {
            if (arrAddress[j] > arrAddress[j + 1]) {
                std::swap(arrAddress[j + 1], arrAddress[j]);
            }
        }
    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rowQuantity;
    std::ifstream read("in.txt");
    read >> rowQuantity;
    std::string* arrAddress = new std::string[rowQuantity];

    if (read) {

        for (int i = 0; i < rowQuantity; i++) {
            std::string city;
            std::string street;
            int home;
            int flat;
            read >> city;
            read >> street;
            read >> home;
            read >> flat;
            Address address(city, street, home, flat);
            arrAddress[i] = address.makeString();
        }
        read.close();
    }
    
    sort(arrAddress, rowQuantity);

    std::ofstream write("out.txt");
    write << rowQuantity << std::endl;
    for (int i = 0; i < rowQuantity; i++) {
        write << arrAddress[i] << std::endl;
    }
    write.close();


    delete[] arrAddress;
}
