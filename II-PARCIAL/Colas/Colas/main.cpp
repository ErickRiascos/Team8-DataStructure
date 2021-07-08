#pragma once
#include "Cliente.h"
#include "Cola.h"
#include <iostream>
int main(int argc, char** argv) {
	Cola d;
	int n;
	std::cout << "Ingrese la cantidad de clientes: ";
	std::cin >> n;
	system("CLS");
	d.generarClientes(n);
	d.mostrar();
}