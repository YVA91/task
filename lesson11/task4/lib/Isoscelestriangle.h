#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

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
        LEAVERLIB_A Isoscelestriangle(int aa, int ab, int aA, int aB);
        LEAVERLIB_A void print() override;
};

