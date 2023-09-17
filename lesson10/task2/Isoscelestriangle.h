#pragma once
#include "Figure.h"


class Isoscelestriangle :
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
        Isoscelestriangle(int aa, int ab, int aA, int aB);

        void print() override;
};

