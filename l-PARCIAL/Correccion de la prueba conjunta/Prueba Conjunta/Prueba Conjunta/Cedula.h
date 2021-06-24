#pragma once
#include <iostream>
class Cedula {
private:
	int* numeros;
public:
	Cedula() = default;
	void encriptarCedula(int,int);
	void ingresarCedula(char*);
	void mostrarCedula();
};

