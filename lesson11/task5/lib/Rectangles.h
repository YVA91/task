#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Rectangles :
    public Figure
{
    private:
        int a;
        int b;
        int A = 90;

    public:
        LEAVERLIB_A Rectangles(int aa, int ab);
        LEAVERLIB_A void print() override;

};

