/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Sandoval Leonardo
Cubo Latino
Fecha creación: 06/06/2021
Fecha modificación: 17/06/2021*/
#pragma warning (disable:4996)
#include <conio.h>
#include <iostream>
#include "Matriz.h"
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
	d = atoi(ingresar("Ingrese la dimension de la matriz: "));
	Matriz m(d);
	m.segmentar();
	m.encerar();
	m.generar();
	m.imprimir();
	getch();
}