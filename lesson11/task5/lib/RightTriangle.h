#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

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
    LEAVERLIB_A RightTriangle(int aa, int ab, int ac, int aA, int aB);
    LEAVERLIB_A void print() override;
};
