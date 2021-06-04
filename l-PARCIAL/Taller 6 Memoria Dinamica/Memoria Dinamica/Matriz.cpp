  
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Deber de Memoria Dinamica
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
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
	this->matriz = (int**)malloc(dim*sizeof(int *));
	for (int i = 0; i < dim; i++)	{
		*(this->matriz + i) = (int*)malloc(dim * sizeof(int));
	}
	return matriz;
}

void Matriz::encerar(){
	for (int i = 0; i < dim; i++){
		for (int j = 0; j < dim; j++){
			*(*(matriz + i) + j) = 0;
		}
	}
}

void Matriz::ingresar(){
	std::cout << "Ingrese valores de la Matriz: "<<std::endl;
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			std::cout <<"Ingrese el numero de la posicion ["<<i+1<<"]["<<j+1<<"]: ";
			std::cin>>*(*(matriz + i) + j);
		}
	}
}

void Matriz::imprimir(){
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			printf("%d \t", *(*(matriz + i) + j));
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

void Matriz::setMatriz(int** _matriz){
	this->matriz = _matriz;
}

void Matriz::setDim(int _d)
{
	this->dim = _d;
}
