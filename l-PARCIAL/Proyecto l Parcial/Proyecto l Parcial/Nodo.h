#pragma once
class Nodo
{
private:
	Persona persona;
	Nodo* siguiente;
public:
	Nodo(int);
	friend class Persona;
};
