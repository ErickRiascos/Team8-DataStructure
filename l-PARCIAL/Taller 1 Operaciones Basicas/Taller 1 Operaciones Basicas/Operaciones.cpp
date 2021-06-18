#include "Operaciones.h"
#include "stdio.h"

template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones<tipoDato>::Operaciones(tipoDato _valor1, tipoDato _valor2)
// Propósito:    Implementacion de Operaciones<tipoDato>::Operaciones()
// Parametros:
// - _valor1
// - _valor2
// Return:     Operaciones
////////////////////////////////////////////////////////////////////////
Operaciones<tipoDato>::Operaciones(tipoDato _valor1, tipoDato _valor2) {
	valor1 = _valor1;
	valor2 = _valor2;
}

template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       tipoDato Operaciones<tipoDato>::getValor1()
// Propósito:    Implementacion de tipoDato Operaciones<tipoDato>::getValor1()
// Parametros:
// Return:     valor1
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::getValor1() {
	return valor1;//@return dato abstracto
}

template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones<tipoDato>::getValor2()
// Propósito:    Implementacion de Operaciones<tipoDato>::getValor2()
// Parametros:
// Return:    valor2 
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::getValor2() {
	return valor2;//@return dato abstracto
}

template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones<tipoDato>::setValor1(tipoDato a)
// Propósito:    Implementacion de Operaciones<tipoDato>::setValor1()
// Parametros:
// - a
// Return:     
////////////////////////////////////////////////////////////////////////
void Operaciones<tipoDato>::setValor1(tipoDato a) {
	valor1 = a;
}

template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       Operaciones<tipoDato>::setValor2(tipoDato b)
// Propósito:    Implementacion de Operaciones<tipoDato>::setValor2()
// Parametros:
// - b
// Return:     
////////////////////////////////////////////////////////////////////////
void Operaciones<tipoDato>::setValor2(tipoDato b) {
	valor2 = b;
}
template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       tipoDato Operaciones<tipoDato>::resta()
// Propósito:    Implementacion de tipoDato Operaciones<tipoDato>::resta()
// Parametros:
// Return:     valor1 - valor2
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::resta() {
	return valor1 - valor2;//@return dato abstracto
}
template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       tipoDato Operaciones<tipoDato>::suma()
// Propósito:    Implementacion de tipoDato Operaciones<tipoDato>::suma()
// Parametros:
// Return:     valor1 + valor2
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::suma() {
	return valor1 + valor2;//@return dato abstracto
}
template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       tipoDato Operaciones<tipoDato>::multiplicacion()
// Propósito:    Implementacion de tipoDato Operaciones<tipoDato>::multiplicacion()
// Parametros:
// Return:     valor1 * valor2
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::multiplicacion() {
	return valor1 * valor2;//@return dato abstracto
}
template <typename tipoDato>
////////////////////////////////////////////////////////////////////////
// Nombre:       tipoDato Operaciones<tipoDato>::division()
// Propósito:    Implementacion de tipoDato Operaciones<tipoDato>::division()
// Parametros:
// Return:     valor1 / valor2
////////////////////////////////////////////////////////////////////////
tipoDato Operaciones<tipoDato>::division() {
	if (valor2 == 0) {
		printf("No se puede dividir!\n");
	}
	else {
		return valor1 / valor2;//@return dato abstracto
	}
}
