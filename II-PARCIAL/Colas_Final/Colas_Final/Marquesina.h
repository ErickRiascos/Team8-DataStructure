#pragma once
#include <stdio.h>

#include <string.h>
#include <iostream>
#include <windows.h>
class Marquesina
{
private:
	Marquesina() = default;
	char banner[];
public:
	char* getBanner();
	void generarMarq();
	void gotoxy(int,int);
};

