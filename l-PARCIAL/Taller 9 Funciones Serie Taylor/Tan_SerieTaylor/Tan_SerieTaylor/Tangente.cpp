/***********************************************************************
 * Module:  Tangente.cpp
 * Author:  Deyvid
 * Fecha creación: 06 de mayo del 2021
 * Modified: jueves, 17 de junio del 2021
 * Purpose: Implementation of the class Tangente
 ***********************************************************************/
#include "Tangente.h"
#include "Math.h"
#include <iostream>
double numero = 12;
Tan::~Tan()
{
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Tan::modulo(double numero)
// Propósito:    Implementacion de Tan::modulo()
// Parametros:
// - numero
// Return: double
////////////////////////////////////////////////////////////////////////
double Tan::modulo(double numero) {
	if (numero < 0) {
		return -1 * numero;
	}
	return numero;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Tan::factorial(int _n)
// Propósito:    Implementacion de Tan::factorial()
// Parametros:
// - _n
// Return: double
////////////////////////////////////////////////////////////////////////
double Tan::factorial(int _n)
{
	double fac = 1;
	for (int i = 2; i <= _n; i++)
	{
		fac *= i;
	}
	return fac;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Tan::calcular_Tan(double x)
// Propósito:    Implementacion de Tan::calcular_Tan()
// Parametros:
// - x
// Return: double
////////////////////////////////////////////////////////////////////////
double Tan::calcular_Tan(double x)
{
	if (x != grados_to_radian(90)) {


		double sumatoria = 0;
		double num = 0;
		double num2 = 0;
		int i = 0;
		for (int i = 0; i < 100; i++) {
			sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
		}
		do
		{
			num2 = num;
			num += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
			i++;
		} while (modulo(num - num2) >= 0.00001);
		return sumatoria / num;
	}
	else
		std::cout << "La tangente no existe"<<std::endl;
	
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Tan::grados_to_radian(double x)
// Propósito:    Implementacion de Tan::grados_to_radian()
// Parametros:
// - x
// Return: double
////////////////////////////////////////////////////////////////////////
double Tan::grados_to_radian(double x)
{
	double radian = 0;
	radian = x * (3.14159265358979323846 / 180);

	return radian;
}

