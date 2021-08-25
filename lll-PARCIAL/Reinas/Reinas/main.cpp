#pragma once
#pragma warning (disable: 4996)
#include <stdlib.h>
#include<iostream>
#include "Tablero.h"
#include <conio.h>
int main() {
	int n=0;
	bool c=true;
	while (c) {
		system("CLS");
		std::cout << "Ingrese numero de reinas: ";
		std::cin >> n;
		Tablero t(n);
		t.posReinas(0);
		std::cout << "Existen " << t.getSoluciones() << " soluciones posibles" << std::endl<<"Desea ingresar otra cantidad(S/N): ";
		if (getch()==110)
			c=false;
	}
	return 0;
	
}