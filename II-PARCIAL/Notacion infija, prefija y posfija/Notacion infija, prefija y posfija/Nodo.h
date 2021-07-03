#pragma once
class Nodo{
private:
	char valor;
	Nodo *siguiente;
public:
	Nodo(char);
	char getValor();
	Nodo* getSiguiente();
	friend class Pila;
	friend class Lista;
};

