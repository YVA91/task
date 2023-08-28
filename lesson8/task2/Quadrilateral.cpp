#include "Quadrilateral.h"
#include <iostream>
#include "Error.h"

 Quadrilateral::Quadrilateral(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
    this->a = aa;
    this->b = ab;
    this->c = ac;
    this->d = ad;
    this->A = aA;
    this->B = aB;
    this->C = aC;
    this->D = aD;

    if ((A + B +C + D) != 360) {
        throw Error("������ �������� ������.�������: ����� ���� ����� ������ ���� ����� 360");
    }
    else if ((a <= 0 || b <= 0 || c <= 0 || d <= 0)) {
        throw Error("������ �������� ������.�������: ���� ��� ��������� ������ ������ ��� ����� ����");
    }

    }

 void Quadrilateral::print() {
    std::cout << "��������������: " << std::endl;
    std::cout << "�������: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << " d = " << this->d << std::endl;
    std::cout << "����: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << " D = " << this->D << std::endl;
  }

