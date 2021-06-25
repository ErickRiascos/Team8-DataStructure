#include "Operacion.h"
#pragma warning (disable:4996)
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::multiplicarMatriz()
// Purpose:    Implementation de Operacion::multiplicarMatriz()
// Parametros:
// - a
// - b
// Return:    mr
////////////////////////////////////////////////////////////////////////

Matriz Operacion::multiplicarMatriz(Matriz a,Matriz b, int dim)
{
	Matriz mr;
	int i, j, k;
	for (i = 0;i < dim;i++) {
		for (j = 0;j < dim;j++) {
			mr.matriz[i][j] = 0;
		}
	}
	for (i = 0;i < dim;i++) {
		for (j = 0;j < dim;j++) {
			for (k = 0;k < dim;k++) {
				mr.matriz[i][j] += (a.matriz[i][k] * b.matriz[k][j]);
			}
		}
	}
	return mr;
}

