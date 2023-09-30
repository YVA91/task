#pragma once
#include "Figure.h"

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Square :
    public Figure
{
    private:
        int a;
        int A = 90;

    public:
        LEAVERLIB_A Square(int aa);
        LEAVERLIB_A void print() override;
};

