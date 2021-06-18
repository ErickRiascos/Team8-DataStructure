#include "Operaciones.h"
#include<iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Matriz Operaciones::calcular(Matriz a,Matriz b)
// Purpose:    Implementation de Matriz Operaciones::calcular()
// Parametros:
// - a
// - b
// Return: resul   
////////////////////////////////////////////////////////////////////////
Matriz Operaciones::calcular(Matriz a,Matriz b)
{
	Matriz resul;
	resul.setDim(a.getDim());
	resul.segmentar();
	resul.encerar();
	for (int i = 0; i < a.getDim(); i++) {
		for (int j = 0; j < a.getDim(); j++) {
			for (int k = 0; k < a.getDim(); k++){
				*(*(resul.getMatriz() + i) + j)+= *(*(a.getMatriz() + k) + j) * *(*(b.getMatriz() + i) + k);
			}
		}
	}
    return resul;
}
