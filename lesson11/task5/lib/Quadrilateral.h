#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Quadrilateral :
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
        LEAVERLIB_A Quadrilateral(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD);
        LEAVERLIB_A void print() override;
};

