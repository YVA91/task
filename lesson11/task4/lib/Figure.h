#pragma once

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

class Figure {
public:
    LEAVERLIB_A virtual void print();
};
