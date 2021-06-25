/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Operaciones Básicas
Fecha creación: 27/05/2021
Fecha modificación: 24/06/2021*/

#include <iostream>
#include "Operaciones.h"
#include "Datos.h"
using namespace std;
int main()
{
	int opcion;
	bool repetir = true;
	do {
		system("cls");
		cout << "\n\Operadores sobrecargados" << endl;
		cout << "\n1. Suma" << endl;
		cout << "\n2. Resta" << endl;
		cout << "\n3. Multiplicacion" << endl;
		cout << "\n0. Salir" << endl;

		cout << "\nIngrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1: {
			float g = 10.5f;
			double h = 12.75;
			int i = 1;
			Datoss dat(g, h, i);
			Operacioness p(dat);
			printf("\n La suma es %.2f", dat.suma(10.5f));
			printf("\n La suma es %.2f", dat.suma(12.75, 6));
			printf("\n La suma es %.2f", dat.suma(1, 10, 7));

			return 0;
		}
		case 2:
		{
			float g = 10.5f;
			double h = 12.75;
			int i = 1;
			Datoss dat(g, h, i);
			Operacioness p(dat);
			printf("\n La resta es %.3f", dat.resta(12.75, 6));
			printf("\n La resta es %.3f", dat.resta(12, 10, 7));

			return 0; }
		case 3:
		{
			int z = 5;
			double x = 10.10;
			float y = 12.5f;

			Datoss dat(x, y, z);
			Operacioness p(dat);
			printf("\nLa multiplicacion entre x y y es %.2f", dat.multiplication(x));
			printf("\nLa multiplicacion entre z y x es %.2f", dat.multiplication(z, x));
			printf("\nLa multiplicacion entre x, y, z es %.2f", dat.multiplication(y, z, x));
			printf("\nOPERADORES SOBRECARGADOS");
			return 0;
			break; }
		case 0:
		{
			repetir = false;
			break;
		}
		}
		} while (repetir);

	}
