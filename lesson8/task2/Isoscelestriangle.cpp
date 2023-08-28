#include "Isoscelestriangle.h"
#include <iostream>
#include "Error.h"

    Isoscelestriangle::Isoscelestriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;

        if (a != c) {
            throw Error("������ �������� ������.�������: ������� a �� ����� ������� �");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("������ �������� ������.�������: ���� ��� ��������� ������ ������ ��� ����� ����");
        }
        else if (A != C) {
            throw Error("������ �������� ������.�������: ���� � �� ����� ���� �");
        }
        else if ((A + B + C) != 180) {
            throw Error("������ �������� ������.�������: ����� ����� �� ����� 180");;
        }


    }

    void Isoscelestriangle::print() {
        std::cout << "�������������� �����������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "����: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }