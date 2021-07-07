/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
#pragma once
#include "Cliente.h"

class Nodo{
private:
	Cliente usuario;
	Nodo *siguiente;
public:
	Nodo(Cliente);
	friend class Lista;
	friend class Cola;
};

