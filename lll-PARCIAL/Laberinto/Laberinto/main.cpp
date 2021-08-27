#pragma once
#include "Laberinto.h"
#include <stdlib.h>
#include<iostream>ç
#include<Windows.h>
int main() {	
	Laberinto l(100,22);
	l.imprimir();
	l.buscarSolucion(19, 1);
	std::cout << std::endl;
	system("pause");
	return 0;
}
