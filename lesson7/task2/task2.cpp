﻿
#include <iostream>

#define SUB(a,b) ((a) - (b))

int main()
{
    int a = 6, b = 5, c = 2;

    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << SUB(a, b + c) * c << std::endl;

}
