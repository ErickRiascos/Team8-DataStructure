/*Fecha creación: 14/06/2021
Fecha modificación: 17/06/2021*/
#pragma once
class Nodo{
public:
	Nodo(int);
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	Nodo* getAnterior();
	void setAnterior(Nodo*);
	int getValor();
	void setValor(int);
private:
	int valor;
	Nodo* siguiente=nullptr;
	Nodo* anterior = nullptr;
};


