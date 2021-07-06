#pragma once
#include "Nodo.h"
#include "Nodo.cpp"
template <typename dato>
class Pila{
private:
	Nodo<dato>* primero;
	Nodo<dato>* actual;
public:
	Pila();
	void push(dato);
	void mostrar();
	void pop();	
	bool pilaVacia();
	dato top();
	Nodo<dato>* getPrimero();
};

