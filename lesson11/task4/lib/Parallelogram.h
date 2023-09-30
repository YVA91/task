#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Parallelogram :
    public Figure
{
    private:
        int a;
        int b;
        int A;
        int B;

    public:
        LEAVERLIB_A Parallelogram(int aa, int ab, int aA, int aC);
        LEAVERLIB_A void print() override;
};

