#include "Greeter.h"
#include <string>
#include <iostream>

Greeter::Greeter(std::string astd) {
	this->std = astd;
}

void Greeter::greet(std::string std) {
	std::cout << "������������, " << std << "!" << std::endl;

}
