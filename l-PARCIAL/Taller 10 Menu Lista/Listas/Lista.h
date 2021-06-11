/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
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

