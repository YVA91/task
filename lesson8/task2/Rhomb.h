#pragma once
#include "Figure.h"


class Rhomb :
    public Figure
{
    private:
        int a;
        int b;
        int c;
        int d;
        int A;
        int B;
        int C;
        int D;

    public:
        Rhomb(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD);

        void print() override;
};

