/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Sandoval Leonardo
Cubo Latino
Fecha creación: 06/06/2021
Fecha modificación: 06/06/2021*/
#include <iostream>
#include "Matriz.h"

int main()
{
	int d;
	std::cout << "Ingrese la dimension de la matriz: ";
	std::cin >> d;
	Matriz m(d);
	m.segmentar();
	m.encerar();
	m.generar();
	m.imprimir();
}