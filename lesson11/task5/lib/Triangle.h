#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Triangle :
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
    LEAVERLIB_A Triangle(int aa, int ab, int ac, int aA, int aB, int aC);
    LEAVERLIB_A void print() override;
};
