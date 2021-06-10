#pragma once
#include "Nodo.h"
class Lista{
private:
	Nodo* primero;
	Nodo* actual;
	bool listaVacia();
public:
	Lista();
	void insertarCabeza(int);	
	void insertarCola(int);
	void mostrar();
	void eliminar_Cabeza();
	void eliminar_Cola();
	
};

