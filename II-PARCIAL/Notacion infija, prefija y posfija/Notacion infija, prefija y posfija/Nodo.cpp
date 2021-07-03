#include "Nodo.h"
#include<iostream>
Nodo::Nodo(char val){
	this->valor = val;
	this->siguiente = NULL;
}

char Nodo::getValor()
{
	return valor;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}
