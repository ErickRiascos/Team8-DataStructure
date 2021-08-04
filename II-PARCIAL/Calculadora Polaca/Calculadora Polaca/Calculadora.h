#pragma once
#include"Pila.h"
#include"Pila.cpp"
class Calculadora
{
private:
	char* line;
	Pila<char>op;
	Pila<double>res;
public:
	Calculadora() = default;
	Calculadora(const char*);
	int convert(int, int);
	void solve(char);
	void decode();
};

