#pragma once
#include <iostream>
class Cedula {
private:
	int* numeros;
public:
	Cedula() = default;
	bool validarCedula();
	void ingresarCedula(char*);
	void mostrarCedula();
	char* toString();
};

