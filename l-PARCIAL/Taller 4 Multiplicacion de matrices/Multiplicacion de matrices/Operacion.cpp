/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 18:53:25
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/

#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::multiplicarMatriz()
// Purpose:    Implementation of Operacion::multiplicarMatriz()
// Return:     void
////////////////////////////////////////////////////////////////////////

Matriz Operacion::multiplicarMatriz(Matriz a,Matriz b)
{
	Matriz mr;
	int i, j, k;
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			mr.matriz[i][j] = 0;
		}
	}
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			for (k = 0;k < 10;k++) {
				mr.matriz[i][j] += (a.matriz[i][k] * b.matriz[k][j]);
			}
		}
	}
	return mr;
}

void Operacion::imprimir()
{
	std::cout << "Hola";
}
