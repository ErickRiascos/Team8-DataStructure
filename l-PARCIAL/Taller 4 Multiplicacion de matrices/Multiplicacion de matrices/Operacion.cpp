#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::multiplicarMatriz()
// Purpose:    Implementation de Operacion::multiplicarMatriz()
// Parametros:
// - a
// - b
// Return:    Matriz
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Operacion::imprimir()
// Propósito:    Implementacion de Operacion::imprimir()
// Parametros:
// Return:     
////////////////////////////////////////////////////////////////////////
void Operacion::imprimir()
{
	std::cout << "Hola";
}
