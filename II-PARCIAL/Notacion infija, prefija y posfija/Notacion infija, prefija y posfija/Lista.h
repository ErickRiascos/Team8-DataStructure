#pragma once
#include "Nodo.h"
class Lista{
private:
	Nodo* primero;
	Nodo* actual;
	int tamanio;
	bool listaVacia();
public:
	Lista();
	void insertarCabeza(char);	
	void insertarCola(char);
	void mostrar();
	void eliminar_Cabeza();
	void eliminar_Cola();
	Nodo* asa(Nodo*);
	Lista voltear();
	Nodo* ultimoNodo();
	Nodo* getPrimero();
	void copiar(Lista);
};

