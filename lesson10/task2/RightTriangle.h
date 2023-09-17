#pragma once
#include "Figure.h"

class RightTriangle :
    public Figure
{
private:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C = 90;

public:
    RightTriangle(int aa, int ab, int ac, int aA, int aB);

    void print() override;
};
