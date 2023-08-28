#include "Rhomb.h"
#include <iostream>
#include "Error.h"


    Rhomb::Rhomb(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;

        if ((A != C) || (B != D)) {
            throw Error("������ �������� ������.�������: ���� A ������ ���� ����� � � ���� B ������ ���� ����� D");
        }
        else if ((a != c) || (a != d) || (a != b)) {
            throw Error("������ �������� ������.�������: ��� ������� ������ ���� �����");
        }
    }

    void  Rhomb::print() {
        std::cout << "����: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "����: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << " " << "D = " << this->B << std::endl;
    }