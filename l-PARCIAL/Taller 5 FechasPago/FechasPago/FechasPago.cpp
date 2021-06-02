// FechasPago.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Persona.h"
#include "Fecha.h"

int main()
{
	int meses;
	std::cout << "Ingrese la cantidad de meses diferidos: " << std::endl;
	std::cin >> meses;
	std::cout << "Rol pago: " << std::endl;
	Fecha f(1, 6, 2021);
	Persona p("Leo",f,meses);
	p.calcularPago();
	for (int i = 0; i < meses; i++)
	{
		p.calcularPago()[i].imprimirFecha();
	}
	
}


