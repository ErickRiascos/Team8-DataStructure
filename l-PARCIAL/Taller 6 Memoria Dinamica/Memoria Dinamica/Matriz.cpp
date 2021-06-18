#pragma warning (disable:4996)
#include <conio.h>
#include "Matriz.h"
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       ingresarN(const char* msj)
// Purpose:    Implementation de ingresarN()
// Parametros:
// - msj
// Return:    datos
////////////////////////////////////////////////////////////////////////
char* ingresarN(const char* msj)
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
// Name:       Matriz::Matriz(int _d)
// Purpose:    Implementation de Matriz::Matriz()
// Parametros:
// - _d
// Return:    
////////////////////////////////////////////////////////////////////////
Matriz::Matriz(int _d)
{
	this->dim = _d;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::segmentar()
// Purpose:    Implementation de Matriz::segmentar()
// Parametros:
// Return:    matriz
////////////////////////////////////////////////////////////////////////
int** Matriz::segmentar()
{
	this->matriz = (int**)malloc(dim*sizeof(int *));
	for (int i = 0; i < dim; i++)	{
		*(this->matriz + i) = (int*)malloc(dim * sizeof(int));
	}
	return matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::encerar()
// Purpose:    Implementation de Matriz::encerar()
// Parametros:
// Return:    
////////////////////////////////////////////////////////////////////////
void Matriz::encerar(){
	for (int i = 0; i < dim; i++){
		for (int j = 0; j < dim; j++){
			*(*(matriz + i) + j) = 0;
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::ingresar()
// Purpose:    Implementation de Matriz::ingresar()
// Parametros:
// Return:    
////////////////////////////////////////////////////////////////////////
void Matriz::ingresar(){
	std::cout << "\nIngrese valores de la Matriz: "<<std::endl;
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			*(*(matriz+i)+j) = atoi(ingresarN("\nIngrese numero fila-columna : "));
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimir()
// Purpose:    Implementation de Matriz::imprimir()
// Parametros:
// Return:    
////////////////////////////////////////////////////////////////////////
void Matriz::imprimir(){
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			printf("%d \t", *(*(matriz + i) + j));
		}
		std::cout << "\n";
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getMatriz()
// Purpose:    Implementation de Matriz::getMatriz()
// Parametros:
// Return:    matriz
////////////////////////////////////////////////////////////////////////
int** Matriz::getMatriz()
{
	return  matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getDim()
// Purpose:    Implementation de Matriz::getDim()
// Parametros:
// Return:    dim
////////////////////////////////////////////////////////////////////////
int Matriz::getDim()
{
	return dim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setMatriz(int** _matriz)
// Purpose:    Implementation de Matriz::setMatriz()
// Parametros:
// Return:    
////////////////////////////////////////////////////////////////////////
void Matriz::setMatriz(int** _matriz){
	this->matriz = _matriz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setDim(int _d)
// Purpose:    Implementation de Matriz::setDim()
// Parametros:
// - _d
// Return:
////////////////////////////////////////////////////////////////////////
void Matriz::setDim(int _d)
{
	this->dim = _d;
}
