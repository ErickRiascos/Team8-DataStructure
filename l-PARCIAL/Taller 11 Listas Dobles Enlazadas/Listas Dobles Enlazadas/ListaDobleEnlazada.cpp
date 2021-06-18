/*Fecha creación: 14/06/2021
Fecha modificación: 17/06/2021*/
#pragma warning(disable : 4996)
#include <conio.h>
#include "ListaDobleEnlazada.h"
////////////////////////////////////////////////////////////////////////
// Nombre:       ingresar(const char* msj)
// Propósito:    Implementacion de ingresar()
// Parametros:
// -  msj
// Return: char*
////////////////////////////////////////////////////////////////////////
char* ingresar(const char* msj)
{
	char* datos = (char*)calloc(10, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::insertarCabeza(int valor)
// Propósito:    Implementacion de ListaDobleEnlazada::insertarCabeza()
// Parametros:
// -  valor
// Return: 
////////////////////////////////////////////////////////////////////////

void ListaDobleEnlazada::insertarCabeza() {
	Nodo* nodo = new Nodo();
	int n;
	n = atoi(ingresar("\nIngrese un valor: "));
	nodo->setValor(n);
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
void ListaDobleEnlazada::insertarCola() {
	Nodo* nodo = new Nodo();
	int n;
	n = atoi(ingresar("\nIngrese un valor: "));
	nodo->setValor(n);
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
////////////////////////////////////////////////////////////////////////
// Nombre:       ListaDobleEnlazada::insertarCabeza(int valor)
// Propósito:    Implementacion de ListaDobleEnlazada::insertarCabeza()
// Parametros:
// -  valor
// Return: 
////////////////////////////////////////////////////////////////////////
void ListaDobleEnlazada::insertarCabeza(int valor)
{
	Nodo* nodo = new Nodo(valor);
	if (cabeza == nullptr) {
		this->cabeza = nodo;
		tamanio++;
		return;
	}
	else {
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
void ListaDobleEnlazada::insertarCola(int valor)
{
	Nodo* nodo = new Nodo(valor);
	if (cabeza == nullptr) {
		this->cabeza = nodo;
		tamanio++;
		return;
	}
	else {
		cabeza->setAnterior(nodo);
		nodo->setSiguiente(cabeza);
		cabeza = nodo;
		tamanio++;
	}
}

