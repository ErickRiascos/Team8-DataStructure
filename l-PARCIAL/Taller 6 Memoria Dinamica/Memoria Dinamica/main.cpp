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
