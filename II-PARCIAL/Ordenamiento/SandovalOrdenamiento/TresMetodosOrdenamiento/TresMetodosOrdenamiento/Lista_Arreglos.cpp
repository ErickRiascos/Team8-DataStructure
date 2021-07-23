#include "Lista_Arreglos.h"
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <random>
using namespace std;
bool Lista_Arreglos::listaVacia() {
	return (this->primero == NULL);
}

void Lista_Arreglos::ingresar_Lista()
{
	Nodo* aux = new Nodo();
	int i=0;
	aux->setValor(i);
	if (listaVacia()) {
		this->primero = aux;
		tamanio++;
	}
	else {
		this->actual->siguiente=aux;
		tamanio++;
	}
	this->actual = aux;

}
void Lista_Arreglos::ingresar_Lista2(int x)
{
	Nodo* aux = new Nodo(x);
	if (listaVacia()) {
		this->primero = aux;
	}
	else {
		this->actual->siguiente = aux;
	}
	tamanio++;
	this->actual = aux;
}

Nodo* Lista_Arreglos::getPrimero()
{
	return primero;
}

int Lista_Arreglos::getTamanio()
{
	return tamanio;
}


void Lista_Arreglos::mostrar() {
	Nodo* tmp = this->primero;
	while (tmp) {
		std::cout << tmp->valor;
		if (tmp->getSiguiente()) std::cout << "->";
		else std::cout << "";
		tmp = tmp->siguiente;
	}
}

void Lista_Arreglos::generarLista()
{
	for (size_t i = 0; i < 1000; i++)
		ingresar_Lista2(rand() % 1000 + 1);
}

void Lista_Arreglos::generarListaIngresar(int dim)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> motor(1, 1000);
	int random = 0;
	for (int i = 0; i < dim; i++) {
		random = motor(mt);
		ingresar_Lista2(random);
	}
}
