/* Fecha creación : 31 / 05 / 2021
Fecha modificación : 24 / 06 / 2021 */
#pragma once
#include "Matriz.h"

class Operation
{
public:
	int** segmentar(int);
	void encerar(Matriz matriz_a, int longitud);
	void ingresar(Matriz, int);
	void imprimir(Matriz, int);
	void cubo_magico(Matriz matriz_a, int longitud);

};
