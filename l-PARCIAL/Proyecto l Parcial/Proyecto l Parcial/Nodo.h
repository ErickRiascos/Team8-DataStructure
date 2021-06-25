#pragma once
#include "Persona.h"
class Nodo
{
private:
	Persona usuario;
	Nodo* siguiente;
public:
	Nodo(Persona);
	friend class Lista;
	Persona getUsuario();
	Nodo* getSiguiente();
};
