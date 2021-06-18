/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Operaciones Básicas
Fecha creación: 27/05/2021
Fecha modificación: 28/05/2021*/

#include <iostream>
#include "Operaciones.h"
#include "Datos.h"
using namespace std;
int main()
{
	double d;
	float b ;
	int a = 101, c = 27;
	std::cout << "Valor primer constante: " << a << "\tValor segunda constante: " << c<<endl;
	int resid = a % c;
	std::cout << "Ingrese un valor: ";
	std::cin >> b;
	std::cout << "Ingrese un valor: ";
	std::cin >> d;
	Datos<float> dato(b, d);
	Operaciones operacion(dato);
	cout << "La suma de dos numeros es: " << operacion.operator+() << endl;
	cout << "La suma con dos parametros y una constante es: " << operacion.operator+(b) << endl;
	cout << "La resta de dos numeros es: " << operacion.operator-() << endl;
	cout << "La resta de dos numeros y una constante es: " << operacion.operator-(b) << endl;
	cout << "La division de un numero y una constante es: " << operacion.operator/(b) << endl;
	cout << "El modulo de dos numeros enteros es: " << resid;
	return 0;
}