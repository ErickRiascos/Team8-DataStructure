/*Fecha creación: 30/05/2021
Fecha modificación: 17/06/2021*/
#pragma once
#include <iostream>
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
