/*Fecha creaci�n : 27 / 05 / 2021
Fecha modificaci�n : 24 / 06 / 2021*/
#include "Operaciones.h"

Operacioness::Operacioness(Datoss m) {
	this->dat = m;
}
double Operacioness::operator++(void)
{
	return this->dat.get_A();
}
double Operacioness::operator--(void)
{
	return this->dat.get_B();
}
double Operacioness::operator*(void)
{
	return this->dat.get_C();
}


		