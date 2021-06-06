#include "Cubo.h"
#include<stdlib.h>
#include<iostream>
Cubo::Cubo(Vector _numeros){
	this->numeros = _numeros;
}

Cubo::~Cubo(){

}

Vector Cubo::getVector(){
	return numeros;
}

int** Cubo::getCubo(){
	return cubo;
}

void Cubo::setVector(Vector _numeros){
	this->numeros = _numeros;
}

void Cubo::setCubo(int** _cubo){
	this->cubo = _cubo;
}

void Cubo::segmentar(){
	this->cubo = (int**)calloc(3,sizeof(int));
	for (int i = 0; i < 3; i++) {
		*(this->cubo + i) = (int*)calloc(3,sizeof(int));
	}
}

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

void Cubo::imprimir(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d \t", *(*(cubo + i) + j));
		}
		std::cout << "\n";
	}
}
