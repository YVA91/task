#pragma once
#include "Figure.h"

class Rhomb :
    public Figure
{
    private:
        int a;
        int A;
        int B;

    public:
        Rhomb(int aa, int aA, int aB);

        void print() override;
};

