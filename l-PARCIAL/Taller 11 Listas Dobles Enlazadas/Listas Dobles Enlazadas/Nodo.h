/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller Listas Dobles Enlazadas
Fecha creación: 14/06/2021
Fecha modificación: 14/06/2021*/
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


