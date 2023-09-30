#pragma once

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

#include "Figure.h"
class EquilateralTriangle :
    public Figure
{
private:
    int a;
    int A = 60;
public:
    LEAVERLIB_A EquilateralTriangle(int aa);
    LEAVERLIB_A void print() override;
};
