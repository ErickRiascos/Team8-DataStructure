/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Deber de Memoria Dinamica
Fecha creación: 03/06/2021
Fecha modificación: 17/06/2021*/
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
	int d;
	d = atoi(ingresar("Ingrese la dimension de las matrices: "));
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
