/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Proyecto
Fecha creación: 15/06/2021
Fecha modificación: 26/06/2021*/
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

