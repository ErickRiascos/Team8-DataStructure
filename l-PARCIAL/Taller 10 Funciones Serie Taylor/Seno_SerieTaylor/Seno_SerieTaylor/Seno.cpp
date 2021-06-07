#include "Seno.h"
#include "Math.h"
Seno::~Seno()
{
}

double Seno::factorial(int n)
{
	double fac = 1;
	for (int i = 2; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}

double Seno::calcular_Seno(double x)
{
	double sumatoria = 0;
	for (int i = 0; i <= n;i++) {
		sumatoria += (pow(-1, i)/factorial((2*i)+1))*pow(x,(2*i)+1);
	}
	return sumatoria;
}

double Seno::grados_to_radian(double x)
{
	double radian = 0;
	radian = x * (3.14159265358979323846 / 180);

	return radian;
}
