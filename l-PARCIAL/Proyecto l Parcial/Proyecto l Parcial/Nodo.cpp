#pragma once
#include "Nodo.h"
#include<iostream>
Nodo::Nodo(Persona _persona) {
	this->usuario = _persona;
	this->siguiente = NULL;
}

Persona Nodo::getUsuario()
{
	return usuario;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}

