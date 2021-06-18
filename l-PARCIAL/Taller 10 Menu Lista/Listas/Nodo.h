/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
#pragma once
class Nodo{
private:
	int valor;
	Nodo *siguiente;
public:
	Nodo(int);
	friend class Lista;
};

