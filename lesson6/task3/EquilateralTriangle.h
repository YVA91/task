#pragma once
#include "Figure.h"
class EquilateralTriangle :
    public Figure
{
private:
    int a;
    int A = 60;
public:
    EquilateralTriangle(int aa);

    void print() override;
};
