/***********************************************************************
 * Module:  Csc.cpp
 * Author:  Erick
 * Fecha creación: 05 de mayo del 2021
 * Modified: jueves, 17 de junio del 2021
 * Purpose: Implementation of the class Csc
 ***********************************************************************/
#include "Csc.h"
#include <math.h>
#include <iostream>
////////////////////////////////////////////////////////////////////////
// Nombre:       Csc::Csc(double _angulo)
// Propósito:    Implementacion de Csc::Csc()
// Parametros:
// Return: 
////////////////////////////////////////////////////////////////////////
Csc::Csc(double _angulo)
{
	this->x = _angulo;
	this->n = 100;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       double Csc::calcular()
// Propósito:    Implementacion de Csc::calcular()
// Parametros:
// Return: double
////////////////////////////////////////////////////////////////////////
double Csc::calcular()
{
	double sumatoria = 0;
	for (int i=0;i<n;i++) {
		sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
	}
	return 1/sumatoria;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       double Csc::factorial(int _n)
// Propósito:    Implementacion de Csc::factorial()
// Parametros:
// - _n
// Return: double
////////////////////////////////////////////////////////////////////////
double Csc::factorial(int _n){
	double fac = 1;
	for (int i = 2; i <= _n; i++){
		fac *= i;
	}
	return fac;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       void Csc::gradARad()
// Propósito:    Implementacion de Csc::gradARad()
// Parametros:
// Return: double
////////////////////////////////////////////////////////////////////////
void Csc::gradARad()
{
	double radian = 0;
	radian = x * (3.14159265358979323846 / 180);
	x = radian;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       void Csc::setAngulo(double _x)
// Propósito:    Implementacion de Csc::setAngulo()
// Parametros:
// - _x
// Return: 
////////////////////////////////////////////////////////////////////////
void Csc::setAngulo(double _x)
{
	this->x = _x;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       double Csc::getAngulo()
// Propósito:    Implementacion de Csc::getAngulo()
// Parametros:
// Return: 
////////////////////////////////////////////////////////////////////////
double Csc::getAngulo()
{
	return x;
}
