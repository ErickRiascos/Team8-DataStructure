#pragma once
#include <stdlib.h>
#include<iostream>
#include "Tablero.h"
int main() {
	int n;
	std::cout << "Ingrese numero de reinas: ";
	std::cin >> n;
	Tablero t(n);
	t.posReinas(0);
	t.imprimir();
	return 0;
}