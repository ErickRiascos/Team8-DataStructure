#pragma once
template <typename data>
class Nodo{
private:
	data valor;
	Nodo *siguiente;
public:
	Nodo(data);
	data getValor();
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	void setValor(data);
};

