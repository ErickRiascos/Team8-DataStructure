#pragma warning (disable:4996)
#include <conio.h>
#include "Vector.h"
#include <stdlib.h>
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Vector::Vector(int _numeros)
// Purpose:    Implementation de Vector::Vector()
// Parametros:
// _numeros
// Return:   
////////////////////////////////////////////////////////////////////////
Vector::Vector(int _numeros){
	this->dim = _numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::getNumeros()
// Purpose:    Implementation de Vector::getNumeros()
// Parametros:
// Return:   numeros
////////////////////////////////////////////////////////////////////////
int* Vector::getNumeros(){
	return numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::setNumeros(int* _numeros)
// Purpose:    Implementation de Vector::setNumeros()
// Parametros:
// - _numeros
// Return:
////////////////////////////////////////////////////////////////////////
void Vector::setNumeros(int* _numeros)
{
	this->numeros = _numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::segmentar()
// Purpose:    Implementation de Vector::segmentar()
// Parametros:
// Return:   numeros
////////////////////////////////////////////////////////////////////////
int* Vector::segmentar()
{
	this->numeros = (int*)calloc(dim ,sizeof(int));
	return numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::ordenar()
// Purpose:    Implementation de Vector::ordenar()
// Parametros:
// Return:   
////////////////////////////////////////////////////////////////////////
void Vector::ordenar(){
	for (int i = 0; i < dim; i++){
		for (int j = 0; j < dim; j++){
			if (*(numeros+i) < *(numeros+j)) {
				int aux;
				aux = *(numeros + i);
				*(numeros + i) = *(numeros + j);
				*(numeros + j) = aux;
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::getDim()
// Purpose:    Implementation de Vector::getDim()
// Parametros:
// Return:   dim
////////////////////////////////////////////////////////////////////////
int Vector::getDim()
{
	return dim;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::calcularSuma()
// Purpose:    Implementation de Vector::calcularSuma()
// Parametros:
// Return:   aux
////////////////////////////////////////////////////////////////////////
int Vector::calcularSuma()
{
	int aux = 0;
	for (int i = 0; i < dim; i++){
		aux += *(numeros+i);
	}
	aux = aux / 3;
	return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::calcularPares()
// Purpose:    Implementation de Vector::calcularPares()
// Parametros:
// Return:   par
////////////////////////////////////////////////////////////////////////
int* Vector::calcularPares()
{
	int* par= (int*)calloc(4, sizeof(int));
	int k = 0;
	for (int i = 0; i < dim; i++) {
		if (i % 2 != 0&&i!=(dim-1)/2) {
			*(par+k)=*(numeros+i);
			k++;
		}
	}
	return par;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::calcularImpares()
// Purpose:    Implementation de Vector::calcularImpares()
// Parametros:
// Return:   impar
////////////////////////////////////////////////////////////////////////
int* Vector::calcularImpares()
{
	int* impar = (int*)calloc(4, sizeof(int));
	int k = 0;
	for (int i = 0; i < dim; i++){
		if (i % 2 == 0&& i != (dim - 1) / 2) {
			*(impar + k) = *(numeros + i);
			k++;
		}
	}
	return impar;
}

////////////////////////////////////////////////////////////////////////
// Name:       ingresarN(const char* msj)
// Purpose:    Implementation de ingresarN()
// Parametros:
// - msj
// Return:   datos
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
// Name:       Vector::ingresar()
// Purpose:    Implementation de Vector::ingresar()
// Parametros:
// Return:   
////////////////////////////////////////////////////////////////////////
void Vector::ingresar(){
	for (int i = 0; i < dim; i++) {
		*(numeros + i) = atoi(ingresarN("\nIngrese numero: "));
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::imprimir()
// Purpose:    Implementation de Vector::imprimir()
// Parametros:
// Return:   
////////////////////////////////////////////////////////////////////////
void Vector::imprimir()
{
	for (int i = 0; i < dim; i++) {
		printf("%d ", *(numeros + i));
	}
}
