#include "Operaciones.h"
#include <iostream>;
const double PI = 3.1416;
const double EPSILON = 0.00001;
using namespace std;

double Operaciones::pot(double base, int exponente)
{
    double num;
    if (base == 1 || exponente == 0)
    {
        return 1;
    }
    if (base == -1)
    {

        return 1 - (exponente % 2) * 2;
    }
    num = base;
    while (exponente-- > 1)
    {
        num *= base;
    }
    return num;
}

long int Operaciones::fact(int factor)
{
    long int num;
    if (factor == 0)
    {
        return 1;
    }
    num = 1;
    do
    {
        num *= factor;
    } while (factor-- > 1);
    return num;
}

double Operaciones::radian(double angulo)
{
    return (angulo * PI) / 180;
}

double Operaciones::modulo(double numero)
{
    if (numero < 0)
    {
        return -1 * numero;
    }
    return numero;
}

double Operaciones::coseno(double x)
{
    double num = 0;
    double num2 = 0;
    int i = 0;
    do
    {
        num2 = num;
        num += pot(-1, i) * pot(x, 2 * i) / fact(2 * i);
        i++;
    } while (modulo(num - num2) >= EPSILON);
    return num;
}