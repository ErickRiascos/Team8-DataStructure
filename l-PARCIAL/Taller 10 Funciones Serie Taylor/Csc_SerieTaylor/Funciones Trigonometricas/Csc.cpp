#include "Csc.h"
#include <math.h>
#include <iostream>

Csc::Csc(double _angulo)
{
	this->x = _angulo;
	this->n = 100;
}

double Csc::calcular()
{
	double sumatoria = 0;
	for (int i=0;i<n;i++) {
		sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
	}
	return 1/sumatoria;
}
double Csc::factorial(int _n){
	double fac = 1;
	for (int i = 2; i <= _n; i++){
		fac *= i;
	}
	return fac;
}
void Csc::gradARad()
{
	double radian = 0;
	radian = x * (3.14159265358979323846 / 180);
	x = radian;
}

void Csc::setAngulo(double _x)
{
	this->x = _x;
}

double Csc::getAngulo()
{
	return x;
}
