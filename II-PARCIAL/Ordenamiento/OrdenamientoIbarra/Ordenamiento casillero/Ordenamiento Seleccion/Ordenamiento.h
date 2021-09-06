#pragma once
#include "Operacion.h"
#include <iostream>
#include <stdlib.h>
#include "Generador.h"
#include <algorithm>

using namespace std;
template <typename T>
class Ordenamiento {
public:
	T* Segmentar(int);
	void encerar(Operacion<T>, int);
	void añadir(Operacion<T>, int);
	void imprimir(Operacion<T> vector, int size, void(func)(int));
	Operacion<T> Seleccion(Operacion<T>, int size);
	Operacion<T> Mezcla(Operacion<T>, int size);
	Operacion<T> Casilleros(Operacion<T>, int size);
	Operacion<T> InsercionBinaria();

};

template<typename T>
inline T* Ordenamiento<T>::Segmentar(int size)
{
	Operacion<T> operacion;
	operacion.set_operacion((T*)malloc((size * sizeof(T))));
	return operacion.get_operacion();
}

template<typename T>
inline void Ordenamiento<T>::encerar(Operacion<T> operacion, int size)
{
	int counter;
	for (int i = 0; i < size; i++)
	{
		*(operacion.get_operacion() + i) = 0;
	}

}

template<typename T>
inline void Ordenamiento<T>::añadir(Operacion<T> operacion, int size)
{

	for (int i = 0; i < size; i++)
	{
		*(operacion.get_operacion() + i) = Generador::numeroRandom(1, 1000);
	}
}

template<typename T>
inline void Ordenamiento<T>::imprimir(Operacion<T> operacion, int size, void(func)(int))
{
	int val;
	for (int i = 0; i < size; i++)
	{
		val = *(operacion.get_operacion() + i);
		func(val);
	}
}

template<typename T>
inline Operacion<T> Ordenamiento<T>::Seleccion(Operacion<T> dato, int size)
{
	int* a = dato.get_operacion();
	int i = 0;
	while (i < size - 1) {
		int piv = i;
		for (int j = i + 1; j < size; j++) {
			if ((*(a + j)) < (*(a + piv))) {
				piv = j;
			}
		}
		int aux = *(a + piv);
		*(a + piv) = *(a + i);
		*(a + i) = aux;
		i++;
	}
	return dato;
}

template<typename T>
inline Operacion<T>Ordenamiento<T>::Casilleros(Operacion<T> dato, int size)
{
	int* a = dato.get_operacion();
	int i = 0;
	while (i < size) {
		int aux = *(a + i);
		int vacio = i;
		for (vacio = i; vacio > 0 && (*(a + (vacio - 1))) > aux; vacio--) {
			*(a + vacio) = *(a + (vacio - 1));
		}
		*(a + vacio) = aux;
		i++;
	}
	return dato;
}