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