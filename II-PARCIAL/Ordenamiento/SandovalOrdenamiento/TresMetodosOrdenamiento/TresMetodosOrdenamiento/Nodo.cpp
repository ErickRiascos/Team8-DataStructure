#include "Nodo.h"
#include<iostream>
Nodo::Nodo(int val) {
	this->valor = val;
	this->siguiente = NULL;
}

int Nodo::getValor()
{
	return valor;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente)
{
	this->siguiente = _siguiente;
}

void Nodo::setValor(int _valor) {
	this->valor = _valor;
}
