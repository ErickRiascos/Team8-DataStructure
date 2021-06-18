/***********************************************************************
 * Module:  Tangente.cpp
 * Author:  Leonardo
 * Fecha creación: 05 de mayo del 2021
 * Modified: jueves, 17 de junio del 2021
 * Purpose: Implementation of the class Seno
 ***********************************************************************/
#include "Seno.h"
#include "Math.h"
 ////////////////////////////////////////////////////////////////////////
 // Nombre:       Seno::~Seno()
 // Propósito:    Implementacion de Seno::~Seno()
 // Parametros:
 // Return: 
 ////////////////////////////////////////////////////////////////////////
Seno::~Seno()
{
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Seno::factorial(int n)
 // Propósito:    Implementacion de Seno::factorial()
 // Parametros:
 // - n
 // Return: double
 ////////////////////////////////////////////////////////////////////////
double Seno::factorial(int n)
{
	double fac = 1;
	for (int i = 2; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Seno::calcular_Seno(double x)
 // Propósito:    Implementacion de Seno::calcular_Seno()
 // Parametros:
 // - x
 // Return: double
 ////////////////////////////////////////////////////////////////////////
double Seno::calcular_Seno(double x)
{
	double sumatoria = 0;
	for (int i = 0; i <= n;i++) {
		sumatoria += (pow(-1, i)/factorial((2*i)+1))*pow(x,(2*i)+1);
	}
	return sumatoria;
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Seno::grados_to_radian(double x)
 // Propósito:    Implementacion de Seno::grados_to_radian()
 // Parametros:
 // - x
 // Return: double
 ////////////////////////////////////////////////////////////////////////
double Seno::grados_to_radian(double x)
{
	double radian = 0;
	radian = x * (3.14159265358979323846 / 180);

	return radian;
}
