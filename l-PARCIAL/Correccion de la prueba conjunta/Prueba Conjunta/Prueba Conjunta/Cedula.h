#pragma once
#include <iostream>
class Cedula {
private:
	int* numeros;
public:
	Cedula() = default;
	void encriptar(int,int);
	void ingresarCedula(char*);
	void mostrarCedula();
	bool validarCedula();
	char* toString();
};


