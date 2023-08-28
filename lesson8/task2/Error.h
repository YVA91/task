#pragma once
#include <iostream>

class Error :
    public std::domain_error
{
public:
    Error(std::string message);
};