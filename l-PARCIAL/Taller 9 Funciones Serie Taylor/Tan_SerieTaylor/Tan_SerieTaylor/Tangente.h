/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Ibarra Deyvid
Funcion Tangente
Fecha creación: 06/05/2021
Fecha modificación: 07/05/2021*/
#pragma once
#include <Math.h>

class Tan
{
private:
	int n=100, x;
public:
	Tan()=default;
	~Tan();
	double factorial(int);
	double calcular_Tan(double);
	double grados_to_radian(double);
	double modulo(double);
};

