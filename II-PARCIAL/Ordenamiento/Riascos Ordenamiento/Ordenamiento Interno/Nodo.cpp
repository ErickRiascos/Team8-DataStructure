#include "Nodo.h"
#include<iostream>
template <typename data>
Nodo<data>::Nodo(data val){
	this->valor = val;
	this->siguiente = NULL;
}

template <typename data>
data Nodo<data>::getValor()
{
	return valor;
}

template<typename data>
Nodo<data>* Nodo<data>::getSiguiente()
{
	return siguiente;
}

template<typename data>
void Nodo<data>::setSiguiente(Nodo* a)
{
	this->siguiente = a;
}

template<typename data>
void Nodo<data>::setValor(data _val)
{
	this->valor = _val;
}

