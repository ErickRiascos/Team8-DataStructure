/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/05/2021
Fecha modificación: 05/05/2021*/
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

void Vector::ingresar(){
	for (int i = 0; i < dim; i++) {
		std::cout << "Ingrese el " << i + 1 << " numero: ";
		std::cin >> *(numeros + i);
	}
}

void Vector::imprimir()
{
	for (int i = 0; i < dim; i++) {
		printf("%d ", *(numeros + i));
	}
}
