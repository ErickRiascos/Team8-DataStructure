/*Fecha creación: 06/05/2021
Fecha modificación: 17/06/2021*/
#pragma once
#include <Math.h>

class Tangente
{
private:
	int n = 100, x;
public:
	Tangente() = default;
	~Tangente();
	double factorial(int);
	double calcular_Tan(double);
	double grados_to_radian(double);
	double modulo(double);
};

