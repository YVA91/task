#include "EquilateralTriangle.h"
#include <iostream>
#include "Error.h"

    EquilateralTriangle::EquilateralTriangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;

        if (a != c || a != b) {
            throw Error("������ �������� ������.�������: ��� ������� ������ ���� �����");
        }
        else if ((a <= 0 || b <= 0 || c <= 0)) {
            throw Error("������ �������� ������.�������: ���� ��� ��������� ������ ������ ��� ����� ����");
        }
        else if (A != C || A != B) {
            throw Error("������ �������� ������.�������: ��� ���� ������ ���� ����� 60");
        }
      
    }

    void EquilateralTriangle::print() {
        std::cout << "�������������� �����������: " << std::endl;
        std::cout << "�������: " << "a = " << this->a << " b = " << this->a << " c = " << this->a << std::endl;
        std::cout << "����: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << std::endl;
    }

