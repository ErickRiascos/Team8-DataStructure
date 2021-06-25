/*Fecha creación : 27 / 05 / 2021
Fecha modificación : 24 / 06 / 2021*/
#include "Datos.h"
double Datoss::get_B(void)
{
	return B;
}
void Datoss::set_B(double new_Value_B)
{
	B = new_Value_B;
}
int Datoss::get_A(void)
{
	return A;
}
void Datoss::set_A(int new_Value_A)
{
	A = new_Value_A;
}
float Datoss::get_C(void)
{
	return C;
}void Datoss::set_C(int new_Value_C)
{
	C = new_Value_C;
}
Datoss::Datoss(int new_Value_A, double new_Value_B, float new_Value_C)
{
	this->C = new_Value_C;
	this->A = new_Value_A;
	this->B = new_Value_B;
}
//suma
double Datoss::suma(float A)
{
	return (this->get_A() + A);
}
double Datoss::suma(double B, float A)
{
	return (this->get_B() + A + B);
}
double Datoss::suma(int C, double B, float A)
{
	return (this->get_C() + A + B + C);
}
//resta
double Datoss::resta(double B, float A)
{
	return (this->get_B() - A - B);
}
double Datoss::resta(int C, double B, float A)
{
	return (this->get_C() - A - B - C);
}
//multiplicacion
double Datoss::multiplication(int A)
{
	return (this->get_A() * A);
}
double Datoss::multiplication(double A, int B)
{
	return (this->get_B() * A * B);
}
double Datoss::multiplication(float A, double B, int C)
{
	return (this->get_C() * A *B * C);
}
