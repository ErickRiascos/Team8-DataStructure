#include "MetodosOrdenamiento.h"

#include <iostream>
using namespace std;

Lista_Arreglos MetodosOrdenamiento::mezclaDirecta(Lista_Arreglos arreglo)
{
	int tamanio = arreglo.getTamanio();
	if (arreglo.getTamanio() > 1) {
		Lista_Arreglos lista_Izq;
		Lista_Arreglos lista_Der;

		int nElementosIzq = arreglo.getTamanio() / 2;
		int nElementosDer = arreglo.getTamanio() - nElementosIzq;
		
		Nodo* valor = arreglo.getPrimero();
		for (i = 0; i < nElementosIzq;i++) {
			lista_Izq.ingresar_Lista2(valor->getValor());
			valor =valor->getSiguiente();
		}
		for (i = 0; i < nElementosDer; i++) {
			lista_Der.ingresar_Lista2(valor->getValor());
			valor = valor->getSiguiente();
		}
		lista_Izq = mezclaDirecta(lista_Izq);
		lista_Der = mezclaDirecta(lista_Der);
		i = 0;
		j = 0;
		k = 0;
		while (lista_Izq.getTamanio()!=j && lista_Der.getTamanio()!=k) {
			Nodo* arreglo_pos=recorrer_Lista(arreglo, i);
			Nodo* izquierdo=recorrer_Lista(lista_Izq, j);
			Nodo* derecho=recorrer_Lista(lista_Der, k);
			if (izquierdo->getValor()<derecho->getValor()) {
				arreglo_pos->setValor(izquierdo->getValor());
				i++;
				j++;
			}
			else {
				arreglo_pos->setValor(derecho->getValor());
				i++;
				k++;
			}
		}
		while (lista_Izq.getTamanio()!=j) {
			Nodo* arreglo_pos = recorrer_Lista(arreglo, i);
			Nodo* izquierdo = recorrer_Lista(lista_Izq, j);

			arreglo_pos->setValor(izquierdo->getValor());
			i++;
			j++;
		}
		while (lista_Der.getTamanio() != k) {
			Nodo* arreglo_pos = recorrer_Lista(arreglo, i);
			Nodo* derecho = recorrer_Lista(lista_Der, k);
			arreglo_pos->setValor(derecho->getValor());
			i++;
			k++;
		}
	}
	return arreglo;
}

Nodo* MetodosOrdenamiento::recorrer_Lista(Lista_Arreglos arreglo, int j)
{
	Nodo* valor = arreglo.getPrimero();
	for (int i = 0; i <= j; i++) {
		if (i == 0) {
			continue;
		}
		else {
			valor = valor->getSiguiente();
		}
	}

	return valor;
}

Lista_Arreglos MetodosOrdenamiento::algInsercion(Lista_Arreglos arreglo, int dimension)
{
	int i, j;
	for (i = 1; i < dimension; i++){
		for (j = i - 1; j >= 0; j--) {
			 	if (recorrer_Lista(arreglo,i)->getValor() < recorrer_Lista(arreglo,j)->getValor()) {
				int aux=0;
				aux = recorrer_Lista(arreglo, i)->getValor();
				recorrer_Lista(arreglo, i)->setValor(recorrer_Lista(arreglo, j)->getValor());
				recorrer_Lista(arreglo, j)->setValor(aux);
				i = i - 1;
				}
		}
	}
	printf("El ordenamiento por insercion fue realizado.....");
	return arreglo;
}
int MetodosOrdenamiento::menor(Lista_Arreglos arreglo, int j, int n)
{
	int m, posicion;
	m = recorrer_Lista(arreglo, j)->getValor();
	posicion = j;
	for (int i = j + 1; i < n;i++) {
		if (m>recorrer_Lista(arreglo,i)->getValor()) {
			m = recorrer_Lista(arreglo, j)->getValor();
			posicion = i;
		}
	}
	return posicion;
}
Lista_Arreglos MetodosOrdenamiento::algSeleccion(Lista_Arreglos arreglo, int dim)
{
	int i, j, pos;
	for (i = 0; i < dim; i++){
		for (j = i + 1; j < dim; j++){
			pos = menor(arreglo, j, dim);
			if (recorrer_Lista(arreglo, i)->getValor() > recorrer_Lista(arreglo, pos)->getValor()){
			int aux_1;
			aux_1 = recorrer_Lista(arreglo, i)->getValor();
			recorrer_Lista(arreglo, i)->setValor(recorrer_Lista(arreglo, pos)->getValor());
			recorrer_Lista(arreglo, pos)->setValor(aux_1);
			}
		}
	}
	printf("\nOrdenamiento por seleccion finalizado \n");
	return arreglo;
}


