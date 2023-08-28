#include "RightTriangle.h"
#include <iostream>
#include "Error.h"

    RightTriangle::RightTriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;


        if (C != 90) {
            throw Error("������ �������� ������.�������: ���� � �� ����� 90");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("������ �������� ������.�������: ���� ��� ��������� ������ ������ ��� ����� ����");
        }
        else if ((A + B + C) != 180) {
            throw Error("������ �������� ������.�������: ����� ����� �� ����� 180");;
        }

    }

    void  RightTriangle::print() {
        std::cout << "������������� �����������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "����: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }
