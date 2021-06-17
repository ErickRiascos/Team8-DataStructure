/*
Fecha creacion: 19/05/2021
Fecha modificacion: 17/06/2021*/
#include "Operaciones.h"
#include "stdio.h"
/*@author Leonado Sandoval
* @version 0.3 20-05-2021
* Desarrolla la estructura de la clase para creacion de los atributos y el constructor y realizacion de las 4 operaciones
* @param _valor1 primer dato a ingresar
* @param _valor2 segundo dato a ingresar
*/
template <typename tipoDato>
Operaciones<tipoDato>::Operaciones(tipoDato _valor1, tipoDato _valor2) {
	valor1 = _valor1;
	valor2 = _valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor1() {
	return valor1;//@return dato abstracto
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor2() {
	return valor2;//@return dato abstracto
}

template <typename tipoDato>
void Operaciones<tipoDato>::setValor1(tipoDato a) {
	valor1 = a;
}

template <typename tipoDato>
void Operaciones<tipoDato>::setValor2(tipoDato b) {
	valor2 = b;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta() {
	return valor1 - valor2;//@return dato abstracto
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma() {
	return valor1 + valor2;//@return dato abstracto
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicacion() {
	return valor1 * valor2;//@return dato abstracto
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division() {
	if (valor2 == 0) {
		printf("No se puede dividir!\n");
	}
	else {
		return valor1 / valor2;//@return dato abstracto
	}
}
