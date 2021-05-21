#ifndef OPERACIONES_H
#define OPERACIONES_H
#include<string.h>
/*@author Erick Riascos
* @version 0.1 20-05-2021
* Define la estructura de la clase para creacion de los atributos y el constructor 
*/
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
		tipoDato resta();
		tipoDato division();
		tipoDato multiplicacion();
		tipoDato suma();
	
		
		
		
};

#endif
