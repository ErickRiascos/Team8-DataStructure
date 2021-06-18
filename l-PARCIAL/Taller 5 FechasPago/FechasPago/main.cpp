#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Persona.h"
#include "Fecha.h"
#include <time.h>
char* ingresar(const char* msj)
{
	char* datos = (char*)calloc(30, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
int main()
{
	int meses;
	int dia,mes,anio;
	meses = atoi(ingresar("Ingrese la cantidad de meses diferidos: \n"));
	dia = atoi(ingresar("\nIngrese fecha de inicio del rol de pago: \nDia: "));
	mes= atoi(ingresar("\nMes: "));
	anio = atoi(ingresar("\nAnio: "));
	Fecha f(dia, mes, anio);
	if (f.validaFecha()) {
		std::cout << "Rol pago: " << std::endl;
		Persona p("Leo", f, meses);
		for (int i = 0; i < meses; i++) {
			Fecha a = *(p.calcularPago() + i);
			a.imprimirFecha();
		}
	}
	else {
		std::cout << "\nIngrese una fecha correcta";
	}
}


