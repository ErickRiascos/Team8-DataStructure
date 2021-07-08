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

