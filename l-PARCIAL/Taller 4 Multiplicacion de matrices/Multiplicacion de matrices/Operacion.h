/***********************************************************************
 * Module:  Operacion.h
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 18:53:25
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#include "Matriz.h"
#if !defined(__Multiplicacion_de_matrices_Operacion_h)
#define __Multiplicacion_de_matrices_Operacion_h

class Operacion{
public:
	Matriz multiplicarMatriz(Matriz, Matriz);
	Operacion() = default;
	void imprimir();
protected:
private:

};

#endif