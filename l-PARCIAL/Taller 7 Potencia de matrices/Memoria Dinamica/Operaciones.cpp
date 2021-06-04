/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Memoria Dinamica: Potencia de Matrices
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#include "Operaciones.h"
#include<iostream>

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
