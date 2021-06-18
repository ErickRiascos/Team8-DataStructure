/*Fecha creación: 14/06/2021
Fecha modificación: 17/06/2021*/
#include "ListaDobleEnlazada.h"
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::insertarCabeza(int valor)
// Propósito:    Implementacion de ListaDobleEnlazada::insertarCabeza()
// Parametros:
// -  valor
// Return: 
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::insertarCola(int valor)
// Propósito:    Implementacion de ListaDobleEnlazada::insertarCola()
// Parametros:
// -  valor
// Return: 
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::ultimoNodo()
// Propósito:    Implementacion de ListaDobleEnlazada::ultimoNodo()
// Parametros:
// Return: Nodo* 
////////////////////////////////////////////////////////////////////////
Nodo* ListaDobleEnlazada::ultimoNodo() {
	Nodo* tmp = cabeza;
	while (tmp->getSiguiente() != nullptr) {
		tmp = tmp->getSiguiente();
	}
	return tmp;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::recorrer(std::function<void(int, int)>recorrido)
// Propósito:    Implementacion de ListaDobleEnlazada::recorrer()
// Parametros:
// Return: Nodo*
////////////////////////////////////////////////////////////////////////
void ListaDobleEnlazada::recorrer(std::function<void(int, int)>recorrido) {
	Nodo* tmp = cabeza;
	int indice = 0;
	while (tmp != nullptr) {
		recorrido(tmp->getValor(), indice++);
		tmp = tmp->getSiguiente();
	}
}
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::getNodo()
// Propósito:    Implementacion de ListaDobleEnlazada::getNodo()
// Parametros:
// Return: Nodo*
////////////////////////////////////////////////////////////////////////
Nodo* ListaDobleEnlazada::getNodo() {
	return cabeza
		;
}


