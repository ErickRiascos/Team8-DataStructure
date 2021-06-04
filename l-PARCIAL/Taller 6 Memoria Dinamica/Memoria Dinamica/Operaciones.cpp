/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Deber de Memoria Dinamica
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#include "Operaciones.h"
#include<iostream>

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
