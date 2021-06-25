/*Fecha creación: 06/15/2021
Fecha modificación: 25/06/2021*/
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

