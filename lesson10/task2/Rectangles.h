#pragma once
#include "Figure.h"

class Rectangles :
    public Figure
{
    private:
        int a;
        int b;
        int A = 90;

    public:
        Rectangles(int aa, int ab);

        void print() override;

};

