/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/05/2021
Fecha modificación: 05/05/2021*/
#pragma warning (disable:4996)
#include <conio.h>
#include "Vector.h"
#include <stdlib.h>
#include <iostream>

Vector::Vector(int _numeros){
	this->dim = _numeros;
}

int* Vector::getNumeros(){
	return numeros;
}

void Vector::setNumeros(int* _numeros)
{
	this->numeros = _numeros;
}

int* Vector::segmentar()
{
	this->numeros = (int*)calloc(dim ,sizeof(int));
	return numeros;
}

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

int Vector::getDim()
{
	return dim;
}

int Vector::calcularSuma()
{
	int aux = 0;
	for (int i = 0; i < dim; i++){
		aux += *(numeros+i);
	}
	aux = aux / 3;
	return aux;
}

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
void Vector::ingresar(){
	for (int i = 0; i < dim; i++) {
		*(numeros + i) = atoi(ingresarN("\nIngrese numero: "));
	}
}

void Vector::imprimir()
{
	for (int i = 0; i < dim; i++) {
		printf("%d ", *(numeros + i));
	}
}
