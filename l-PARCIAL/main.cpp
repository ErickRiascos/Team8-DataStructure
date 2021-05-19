#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Operaciones.cpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b;
	cout<<"Ingrese el valor 1: ";
	cin>>a;
	cout<<"Ingrese el valor 2: ";
	cin>>b;
	Operaciones<float>operacion(a,b);
	cout<<"Division = "<<operacion.division()<<endl;
	return 0;
}
