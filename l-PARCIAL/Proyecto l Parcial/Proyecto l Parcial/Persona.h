#pragma once
#include "Nodo.h"
class Persona
{
  private:
	Nodo* primero;
	Nodo* actual;
  public:
	bool listaVacia();
	Persona();
	void mostrar();
	void insertar_Cabeza(int);
	void eliminar_Cabeza();

};

