#pragma once
#include "Figure.h"
class Square :
    public Figure
{
    private:
        int a;
        int A = 90;

    public:
        Square(int aa);

        void print() override;
};

