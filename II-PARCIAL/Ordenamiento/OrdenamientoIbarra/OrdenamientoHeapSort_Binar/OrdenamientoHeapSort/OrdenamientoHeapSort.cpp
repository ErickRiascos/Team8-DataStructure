#include"Heapsort.h"
#include "Binario.h"
#include<iostream>
using namespace std;
void main() {
	
	Binario IB;
	int n;
	n = 10;
	int lista[] = { 40,73,20,1,4,75,37,42,43,90,77 };
	system("cls");
	cout << endl << endl << "Lista Sin ordenar:" << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << lista[i] << " ";
	}
	IB.Binario1(lista, n);
	cout << endl << endl << "Vector Ordenado Con Metodo de Insercion Binaria:" << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << lista[i] << " ";
	}
	system("pause>null");
}

