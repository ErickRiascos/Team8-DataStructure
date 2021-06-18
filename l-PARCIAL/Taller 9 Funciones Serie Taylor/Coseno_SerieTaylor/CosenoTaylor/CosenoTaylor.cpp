/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Serie Taylor funcion Coseno
Fecha creación: 07/05/2021
Fecha modificación: 17/06/2021 */
#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Operaciones.h"
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
	Operaciones op;
	double ang, num;
	ang = atoi(ingresar("Inserte el angulo: "));
	cout.precision(4);
	double num2 = op.radian(ang);
	num = op.coseno(num2);
	cout << "\nEl coseno del angulo insertado es :" << num << endl;
	return 0;

}