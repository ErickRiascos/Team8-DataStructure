/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Memoria Dinamica: Potencia de Matrices
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#include <iostream>
#include "Operaciones.h"

int main()
{
	int d,e;
	std::cout << "Ingrese la dimension de las matrices: ";
	std::cin >> d;
	std::cout << "Ingrese el exponente de las matrices: ";
	std::cin >> e;
	Matriz m(d);
	m.segmentar();
	m.encerar();
	m.ingresar();
	Operaciones op;
	//std::cout << "\nMatriz Original: " << std::endl;
	m.imprimir();
	std::cout << "\nMatriz Resultado: " << std::endl;
	op.calcular(m, e);
}
