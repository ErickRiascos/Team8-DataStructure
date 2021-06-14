#include "ListaDobleEnlazada.h"

void ListaDobleEnlazada::insertarCabeza(int valor) {
	Nodo* nodo = new Nodo(valor);
	if (cabeza == nullptr) {
		this->cabeza = nodo;
		tamanio++;
		return;
	}else {
		Nodo* ultimo = ultimoNodo();
		ultimo->setSiguiente(nodo);
		nodo->setAnterior(ultimo);
		tamanio++;
	}
}

void ListaDobleEnlazada::insertarCola(int valor) {
	Nodo* nodo = new Nodo(valor);
	if (cabeza == nullptr){
		this->cabeza = nodo;
		tamanio++;
		return;
	}else {
		cabeza->setAnterior(nodo);
		nodo->setSiguiente(cabeza);
		cabeza = nodo;
		tamanio++;
	}
}

Nodo* ListaDobleEnlazada::ultimoNodo() {
	Nodo* tmp = cabeza;
	while (tmp->getSiguiente() != nullptr) {
		tmp = tmp->getSiguiente();
	}
	return tmp;
}

void ListaDobleEnlazada::recorrer(std::function<void(int, int)>recorrido) {
	Nodo* tmp = cabeza;
	int indice = 0;
	while (tmp != nullptr) {
		recorrido(tmp->getValor(), indice++);
		tmp = tmp->getSiguiente();
	}
}

Nodo* ListaDobleEnlazada::getNodo()
{
	return cabeza;
}


