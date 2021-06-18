/*Fecha creación : 27 / 05 / 2021
Fecha modificación : 17 / 06 / 2021*/
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
	
