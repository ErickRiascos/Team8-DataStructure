/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de operaciones basicas
Fecha creacion: 19/05/2021
Fecha modificacion: 20/05/2021*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Operaciones.cpp"
/*@author Erick Riascos
* @version 0.1 20-05-2021
* Permite correr el programa recive dos parametros 
*/
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b;
	cout<<"Ingrese el valor 1: ";
	cin>>a;
	cout<<"Ingrese el valor 2: ";
	cin>>b;
	Operaciones<float>operacion(a,b);
	cout<<"Resta = "<<operacion.resta()<<endl;
	cout<<"Division = "<<operacion.division()<<endl;
	cout<<"Suma = "<<operacion.suma()<<endl;
	cout<<"Multiplicar = "<<operacion.multiplicacion()<<endl;
	return 0;
	//@return valor entero
}
