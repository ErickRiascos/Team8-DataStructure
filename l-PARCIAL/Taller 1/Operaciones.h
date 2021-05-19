#ifndef OPERACIONES_H
#define OPERACIONES_H
#include<string.h>
template <typename tipoDato>
class Operaciones
{
	private:
		tipoDato valor1;
		tipoDato valor2;
	public:
		Operaciones(tipoDato,tipoDato);
		tipoDato getValor1();
		void setValor1(tipoDato a);
		tipoDato getValor2();
		void setValor2(tipoDato b);
		tipoDato division();
};

#endif
