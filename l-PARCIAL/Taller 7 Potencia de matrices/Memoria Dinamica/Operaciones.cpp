#include "Operaciones.h"
#include<iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Matriz Operaciones::calcular(Matriz a,int e)
// Purpose:    Implementation de Matriz Operaciones::calcular()
// Parametros: 
// - a
// - e
// Return:   aux
////////////////////////////////////////////////////////////////////////
Matriz Operaciones::calcular(Matriz a,int e)
{
	Matriz resul;
	Matriz aux;
	aux.setDim(a.getDim());
	aux.segmentar();
	aux.encerar();
	resul.setDim(a.getDim());
	resul.segmentar();
	resul.encerar();
	aux.setMatriz(a.getMatriz());
	for (int x = 1;x < e;x++) {
		for (int i = 0; i < a.getDim(); i++) {
			for (int j = 0; j < a.getDim(); j++) {
				for (int k = 0; k < a.getDim(); k++) {
					*(*(resul.getMatriz() + i) + j) += *(*(aux.getMatriz() + k) + j) * *(*(a.getMatriz() + i) + k);
				}
			}
		}
		aux.setMatriz(resul.getMatriz());
		resul.segmentar();
		resul.encerar();
	}
    return aux;
}
