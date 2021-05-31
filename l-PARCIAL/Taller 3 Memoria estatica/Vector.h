/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Memoria Estática
Fecha creación: 30/05/2021
Fecha modificación: 30/05/2021*/
#pragma once
#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H
class Vector{
	private:
		int vect[10];
	public:
		Vector(int[10]);
		Vector()=default;
		void setVect(int[10]);
		int* getVect();
		~Vector();
};
#endif
