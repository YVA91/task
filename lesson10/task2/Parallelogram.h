#pragma once
#include "Figure.h"

class Parallelogram :
    public Figure
{
    private:
        int a;
        int b;
        int A;
        int B;

    public:
        Parallelogram(int aa, int ab, int aA, int aC);

        void print() override;
};

