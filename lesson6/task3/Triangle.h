#pragma once
#include "Figure.h"

class Triangle :
    public Figure
{
private:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
public:
    Triangle(int aa, int ab, int ac, int aA, int aB, int aC);
    void print() override;
};
