#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Rhomb :
    public Figure
{
    private:
        int a;
        int A;
        int B;

    public:
        LEAVERLIB_A Rhomb(int aa, int aA, int aB);
        LEAVERLIB_A void print() override;
};

