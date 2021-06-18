/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Memoria Dinamica: Potencia de Matrices
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#pragma warning (disable:4996)
#include <conio.h>
#include <iostream>
#include "Operaciones.h"
char* ingresar(const char* msj)
{
	char* datos = (char*)calloc(10, sizeof(char));
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
	int d,e;
	d = atoi(ingresar("Ingrese la dimension de las matrices: "));
	e= atoi(ingresar("\nIngrese el exponente: "));
	Matriz m(d);
	m.segmentar();
	m.encerar();
	m.ingresar();
	Operaciones op;
	std::cout << "\nMatriz Original: " << std::endl;
	m.imprimir();
	std::cout << "\nMatriz Resultado: " << std::endl;
	op.calcular(m, e).imprimir();
}
