/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Ibarra Deyvid
Triangulo de pascal
Fecha creación : 07 / 06 / 2021
Fecha modificación : 08 / 06 / 2021 */
#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Pascal.h"
using namespace std;
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
	int filas = atoi(ingresar("Ingrese filas : "));
    Pascal i;
	std::cout <<"\n" ;
    i.triangulo_pascal(filas);
    return 0;
}

