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
	void genClientes(int,std::function<Cliente()>cola);
	bool colaVacia();
	void encolar(Cliente);
	void mostrar();
	void desencolar();
	Nodo* getPrimero();
	int getTamanio();
	void recorrer(std::function<void(Cliente)>recorrido);
	double promedio(std::function<double()>prom);
	void destruirCola();
};
