#include "Parallelogram.h"
#include <iostream>
#include "Error.h"

    Parallelogram::Parallelogram(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;


        if ((A != C) || (B != D) ) {
            throw Error("������ �������� ������.�������: ���� A ������ ���� ����� � � ���� B ������ ���� ����� D");
        }
        else if ((a != c) || (b != d)) {
            throw Error("������ �������� ������.�������: ������� � ������ ���� ����� c � ������� b ������ ���� ����� d");
        }
    }

    void  Parallelogram::print() {
        std::cout << "��������������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " " << "b = " << this->b << " " << "c = " << this->a << " " << "d = " << this->b << std::endl;
        std::cout << "����: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << "D = " << this->B << std::endl;
    }

