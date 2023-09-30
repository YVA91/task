#pragma once
#include <string>

class Greeter
{
private:
	std::string std;

public: 
	Greeter(std::string std);

	void greet(std::string std);
};

