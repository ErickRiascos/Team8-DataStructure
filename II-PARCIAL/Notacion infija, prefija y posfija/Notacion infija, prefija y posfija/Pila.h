#pragma once
#include "Nodo.h"
class Pila{
private:
	Nodo* primero;
	Nodo* actual;
public:
	Pila();
	void apilar(char);
	void mostrar();
	char desapilar();	
	bool pilaVacia();
	Nodo* getUltimo();
	Nodo* getPrimero();
};

