#pragma once
#include<stdlib.h>
#include <stdio.h>
#include "Nodo.h"
#include "Lista_Arreglos.h"
class MetodosOrdenamiento
{
private:
	int i, j, k, nElementosIzq, nElementosDer;
	int* arregloIzq = (int*)calloc(30,sizeof(int));
	int* arregloDer= (int*)calloc(30, sizeof(int));
	
public:
	MetodosOrdenamiento() = default;
	Lista_Arreglos mezclaDirecta(Lista_Arreglos);
	Nodo* recorrer_Lista(Lista_Arreglos, int);
	Lista_Arreglos algInsercion(Lista_Arreglos,int);
	Lista_Arreglos algSeleccion(Lista_Arreglos, int);
	int menor(Lista_Arreglos, int, int);
};

