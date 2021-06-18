/*Fecha creación: 30/05/2021
Fecha modificación: 17/06/2021*/
#pragma once
#include <iostream>
#include "Vector.h"
class Operaciones{
	private:
		Vector v;
	public:
		Operaciones()=default;
		Operaciones(Vector&);
		void encerar();
		void ingresar();
		float procesar();
		void imprimir();
		Vector getVec();
};
