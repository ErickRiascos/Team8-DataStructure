/***********************************************************************
 * Module:  Coseno.cpp
 * Author:  Johan
 * Fecha creación: 07 de mayo del 2021
 * Modified: jueves, 17 de junio del 2021
 * Purpose: Implementation of the class coseno
 ***********************************************************************/
#include "Coseno.h"
#include <iostream>;
const double PI = 3.1416;
const double EPSILON = 0.00001;
using namespace std;
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones::pot(double base, int exponente)
// Propósito:    Implementacion de Operaciones::pot()
// Parametros:
// - base
// - exponente
// Return: double
////////////////////////////////////////////////////////////////////////
double Coseno::pot(double base, int exponente)
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones::fact(int factor)
// Propósito:    Implementacion de Operaciones::fact()
// Parametros:
// - factor
// Return: long int
////////////////////////////////////////////////////////////////////////
long int Coseno::fact(int factor)
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones::radian(double angulo)
// Propósito:    Implementacion de Operaciones::radian()
// Parametros:
// - angulo
// Return: double
////////////////////////////////////////////////////////////////////////
double Coseno::radian(double angulo)
{
    return (angulo * PI) / 180;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones::modulo(double numero)
// Propósito:    Implementacion de Operaciones::modulo()
// Parametros:
// - numero
// Return: double
////////////////////////////////////////////////////////////////////////
double Coseno::modulo(double numero)
{
    if (numero < 0)
    {
        return -1 * numero;
    }
    return numero;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones::coseno(double x)
// Propósito:    Implementacion de Operaciones::coseno
// Parametros:
// - x
// Return: double
////////////////////////////////////////////////////////////////////////
double Coseno::coseno(double x)
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