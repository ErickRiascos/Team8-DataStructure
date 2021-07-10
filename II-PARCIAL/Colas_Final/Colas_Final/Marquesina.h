#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <windows.h>
class Marquesina{
private:
	std::string banner;
public:
	Marquesina(std::string&);
	Marquesina() = default;
	std::string getBanner();
	void generarMarq();
};

