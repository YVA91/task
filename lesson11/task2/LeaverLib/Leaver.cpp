#include "Leaver.h"
#include <iostream>

Leaver::Leaver(std::string astd) {
	this->std = astd;
}

void Leaver::leave(std::string std) {
	std::cout << "�� ��������, " << std << "!" << std::endl;
}

