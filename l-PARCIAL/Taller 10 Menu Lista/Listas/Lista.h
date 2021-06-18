/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
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

