/***********************************************************************
 * Module:  Operaciones.h
 * Author:  Deyvid
 * Modified: jueves, 27 de mayo de 2021 21:15:35
 * Purpose: Declaration of the class Operaciones
 ***********************************************************************/
#include "Datos.h"
class Operaciones{
	private:
		Datos<float> data_United;
	public:
		Operaciones()=default;
		float operator +();
		float operator -();
		float operator +(float);
		float operator -(float);
		float operator /(float);
		Operaciones(Datos<float>);
		
};
	
