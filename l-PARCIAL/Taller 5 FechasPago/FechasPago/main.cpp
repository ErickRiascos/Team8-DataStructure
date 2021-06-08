#include <iostream>
#include "Persona.h"
#include "Fecha.h"
#include <time.h>

int main()
{
	int meses;
	int dia,mes,anio;
	std::cout << "Ingrese la cantidad de meses diferidos: " << std::endl;
	std::cin >> meses;
	std::cout << "Ingrese fecha de inicio del rol de pago: "<<std::endl;
	std::cout << "Dia: " ;
	std::cin >> dia;
	std::cout << "Mes: ";
	std::cin >> mes;
	std::cout << "Anio: ";
	std::cin >> anio;
	std::cout << "Rol pago: " << std::endl;
	Fecha f(dia, mes, anio);
	Persona p("Leo", f, meses);
	for (int i = 0; i < meses; i++) {
		Fecha a=*(p.calcularPago() + i);
		a.imprimirFecha();
	}
}


