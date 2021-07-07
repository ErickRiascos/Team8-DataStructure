#pragma once
#include "Nodo.h"
#include<functional>
class Cola {
private:
	Nodo* primero;
	Nodo* ultimo;
	Nodo* ultimoNodo();
	int tamanio=0;
public:
	Cola();
	bool colaVacia();
	void encolar(Cliente);
	void mostrar();
	void desencolar();
	Nodo* getPrimero();
	int getTamanio();
	void recorrer(std::function<void(Cliente)>recorrido);
	void generarClientes(int);
};
