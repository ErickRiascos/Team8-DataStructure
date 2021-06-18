/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Sandoval Leonardo
Cubo Latino
Fecha creación: 06/06/2021
Fecha modificación: 06/06/2021*/
#include "Matriz.h"
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

Matriz::Matriz(int _d)
{
	this->dim = _d;
}

int** Matriz::segmentar()
{
	this->matriz = (int**)malloc(dim * sizeof(int*));
	for (int i = 0; i < dim; i++) {
		*(this->matriz + i) = (int*)malloc(dim * sizeof(int));
	}
	return matriz;
}

void Matriz::encerar() {
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			*(*(matriz + i) + j) = 0;
		}
	}
}

void Matriz::generar() {
	int contador = 0, aux = 0;
	int fila = 0, columna = 0;
	for (int i = 1; i <= dim; i++) {
		for (int j = 1; j <= dim; j++)
		{
			aux = j + contador;
			if (aux <= dim) {
				*(*(matriz + fila) + columna) = aux;
			}
			else {
				*(*(matriz + fila) + columna) = aux - dim;
			}
			columna += 1;
		}
		columna = 0;
		contador += 1;
		fila += 1;
	}
}

void Matriz::imprimir() {
	std::cout << "\n";
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			std::cout << "\t" << *(*(matriz + i) + j);
		}
		std::cout << "\n";
	}
}

int** Matriz::getMatriz()
{
	return  matriz;
}

int Matriz::getDim()
{
	return dim;
}

void Matriz::setMatriz(int** _matriz) {
	this->matriz = _matriz;
}

void Matriz::setDim(int _d)
{
	this->dim = _d;
}