#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::multiplicarMatriz()
// Purpose:    Implementation de Operacion::multiplicarMatriz()
// Parametros:
// - a
// - b
// Return:    mr
////////////////////////////////////////////////////////////////////////

Matriz Operacion::multiplicarMatriz(Matriz a,Matriz b)
{
	Matriz mr;
	int i, j, k;
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 5;j++) {
			mr.matriz[i][j] = 0;
		}
	}
	for (i = 0;i < 5;i++) {
		for (j = 0;j < 5;j++) {
			for (k = 0;k < 5;k++) {
				mr.matriz[i][j] += (a.matriz[i][k] * b.matriz[k][j]);
			}
		}
	}
	return mr;
}

