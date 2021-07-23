#pragma once
#include "Nodo.h"
class Lista_Arreglos
{
private:
	Nodo* primero;
	Nodo* actual;
	bool listaVacia();
	int tamanio=0;
public:
	Lista_Arreglos()=default;
	void ingresar_Lista();
	void ingresar_Lista2(int);
	int getTamanio();
	Nodo* getPrimero();
	void mostrar();
	void generarLista();
	void generarListaIngresar(int);

};

