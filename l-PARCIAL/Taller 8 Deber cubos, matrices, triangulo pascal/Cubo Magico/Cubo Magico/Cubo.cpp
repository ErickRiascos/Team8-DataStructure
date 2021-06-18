#include "Cubo.h"
#include<stdlib.h>
#include<iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::Cubo(Vector _numeros)
// Purpose:    Implementation de Cubo::Cubo()
// Parametros:
// - _numeros
// Return:
////////////////////////////////////////////////////////////////////////
Cubo::Cubo(Vector _numeros){
	this->numeros = _numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::~Cubo()
// Purpose:    Implementation de Cubo::~Cubo()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
Cubo::~Cubo(){

}

////////////////////////////////////////////////////////////////////////
// Name:       Vector Cubo::getVector()
// Purpose:    Implementation de Vector Cubo::getVector()
// Parametros:
// Return:   numeros
////////////////////////////////////////////////////////////////////////
Vector Cubo::getVector(){
	return numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::getCubo()
// Purpose:    Implementation de Cubo::getCubo()
// Parametros:
// Return:   cubo
////////////////////////////////////////////////////////////////////////
int** Cubo::getCubo(){
	return cubo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::setVector(Vector _numeros
// Purpose:    Implementation de Cubo::setVector()
// Parametros:
// - _numeros
// Return:
////////////////////////////////////////////////////////////////////////
void Cubo::setVector(Vector _numeros){
	this->numeros = _numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::setCubo(int** _cubo)
// Purpose:    Implementation de Cubo::setCubo()
// Parametros:
// - _cubo
// Return:
////////////////////////////////////////////////////////////////////////
void Cubo::setCubo(int** _cubo){
	this->cubo = _cubo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::segmentar()
// Purpose:    Implementation de Cubo::segmentar()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
void Cubo::segmentar(){
	this->cubo = (int**)calloc(3,sizeof(int));
	for (int i = 0; i < 3; i++) {
		*(this->cubo + i) = (int*)calloc(3,sizeof(int));
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::llenar()
// Purpose:    Implementation de Cubo::llenar()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
void Cubo::llenar(){
	numeros.ordenar();
	int k = 0;
	int z = 3;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (i % 2 == 0 && j % 2 == 0) {
				*(*(cubo + i) + j) = *(numeros.calcularPares() + k);
				k++;
			}
			if (i == 1 && j == 1) 
				*(*(cubo + i) + j) = *(numeros.getNumeros()+(numeros.getDim()-1)/2);
			if (i % 2 != 0 && j % 2 == 0) {
				*(*(cubo + i) + j) = *(numeros.calcularImpares() + z);
				z--;
			}				
			if (i % 2 == 0 && j % 2 != 0) {
				*(*(cubo + i) + j) = *(numeros.calcularImpares() + z);
				z--;
			}
				
			
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Cubo::imprimir()
// Purpose:    Implementation de Cubo::imprimir()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
void Cubo::imprimir(){
	std::cout << "\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d \t", *(*(cubo + i) + j));
		}
		std::cout << "\n";
	}
}
