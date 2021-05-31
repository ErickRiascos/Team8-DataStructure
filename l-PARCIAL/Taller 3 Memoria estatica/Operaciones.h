/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Memoria Estática
Fecha creación: 30/05/2021
Fecha modificación: 30/05/2021*/
#pragma once
#include <iostream>
#include "Vector.h"
class Operaciones{
	private:
		Vector v;
	public:
		Operaciones()=default;
		Operaciones(Vector);
		void encerar();
		void ingresar();
		float procesar();
		void imprimir();
};
