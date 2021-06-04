/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Deber de Memoria Dinamica
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#include <iostream>
#include "Operaciones.h"

int main()
{
	int d;
	std::cout << "Ingrese la dimension de las matrices: ";
	std::cin >> d;
	Matriz m(d);
	Matriz m1(d);
	m.segmentar();
	m.encerar();
	m.ingresar();
	m1.segmentar();
	m1.encerar();
	m1.ingresar();
	Operaciones op;
	std::cout << "\nMatriz Solucion: " << std::endl;
	op.calcular(m,m1).imprimir();

}
