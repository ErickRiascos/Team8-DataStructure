/*Fecha creación : 27 / 05 / 2021
Fecha modificación : 17 / 06 / 2021*/
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
	
