#pragma once
class Nodo {
private:
	int valor;
	Nodo* siguiente;
public:
	Nodo() = default;
	Nodo(int);
	int getValor();
	void setValor(int);
	void setSiguiente(Nodo*);
	Nodo* getSiguiente();
	friend class Lista_Arreglos;
};

