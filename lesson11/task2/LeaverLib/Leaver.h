#pragma once

#ifdef _WINDLL
#define LEAVERLIB_A __declspec(dllexport)
#else
#define LEAVERLIB_A __declspec(dllimport)
#endif

#include <string>

class Leaver
{
private:
	std::string std;

public:
	LEAVERLIB_A Leaver(std::string std);
	LEAVERLIB_A void leave(std::string std);
};