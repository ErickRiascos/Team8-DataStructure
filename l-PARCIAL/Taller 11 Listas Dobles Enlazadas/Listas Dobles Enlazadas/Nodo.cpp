#include "Nodo.h"
Nodo::Nodo(int _valor){
	this->valor = _valor;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente){
	this->siguiente = _siguiente;
}

Nodo* Nodo::getAnterior(){
	return anterior;
}

void Nodo::setAnterior(Nodo* _anterior){
	this->anterior = _anterior;
}

int Nodo::getValor(){
	return valor;
}

void Nodo::setValor(int _valor){
	this->valor = _valor;
}
