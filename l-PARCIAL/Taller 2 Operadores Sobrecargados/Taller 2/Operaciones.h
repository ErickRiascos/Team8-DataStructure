/*Fecha creaci�n : 27 / 05 / 2021
Fecha modificaci�n : 17 / 06 / 2021*/
#include "Datos.h"
class Operacioness{

	public:
		Operacioness() = default;
		Operacioness(Datoss);
		double operator --();
		double operator *();
		double operator ++();
	protected:
	private:
		Datoss dat;
	};
	
