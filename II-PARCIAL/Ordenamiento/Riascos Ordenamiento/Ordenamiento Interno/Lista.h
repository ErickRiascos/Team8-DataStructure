#pragma once
#include "Nodo.h"
#include "Nodo.cpp"
template <typename dato>
class Lista{
private:
	Nodo<dato>* primero;
	Nodo<dato>* actual;
	int tamanio;
public:
	bool listaVacia();
	Lista();
	void enlistar(dato);
	void enlistarTop(dato);
	void mostrar();
	void eliminarTop();
	void desenlistar();
	void generarLista(int);
	Nodo<dato>* getTop();
	int getTamanio();
	Nodo<dato>* getPos(int);
	void setPos(dato,int);
	dato getMDato();
};

