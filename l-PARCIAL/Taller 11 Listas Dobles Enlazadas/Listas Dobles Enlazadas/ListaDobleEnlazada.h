#pragma once
#include "Nodo.h"
#include<functional>
#include<iostream>
class ListaDobleEnlazada{
public:
	ListaDobleEnlazada() = default;
	void insertarCabeza(int);
	void insertarCola(int);
	void recorrer(std::function<void(int,int)>recorrido);
private:
	Nodo* ultimoNodo();
	Nodo* cabeza=nullptr;
	int tamanio;
};

