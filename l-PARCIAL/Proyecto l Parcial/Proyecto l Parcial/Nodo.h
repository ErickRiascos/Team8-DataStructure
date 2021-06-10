#pragma once
class Nodo
{
private:
	int valor;
	Nodo* siguiente;
public:
	Nodo(int);
	friend class Persona;
};
