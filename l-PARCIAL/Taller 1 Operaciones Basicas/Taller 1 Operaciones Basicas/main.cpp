/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de operaciones basicas
Fecha creacion: 19/05/2021
Fecha modificacion: 17/06/2021*/
#pragma warning (disable: 4996)
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Operaciones.cpp"

using namespace std;

int main(int argc, char** argv) {

	float a;
	int b;
	cout << "Ingrese el valor 1: ";
	cin >> a;
	//a=atoi(ingresar("Ingrese el valor 1: "));
	cout << "Ingrese el valor 2: ";
	cin >> b;
	//b=atoi(ingresar("\nIngrese el valor 2: "));
	Operaciones<float>operacion(a, b);
	cout << "\nResta = " << operacion.resta() << endl;
	cout << "Division = " << operacion.division() << endl;
	cout << "Suma = " << operacion.suma() << endl;
	cout << "Multiplicar = " << operacion.multiplicacion() << endl;
	return 0;
	//@return valor entero
}
