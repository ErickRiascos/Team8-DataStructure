#pragma once
#include "Lista.h"
#include "Ordenamiento.h"
int main(){
	Lista<int> a;
	a.generarLista(10);
	a.mostrar();
	/*a.mostrar();
	Ordenamiento o(a);
	o.shellSort();
	o.intercambio();*/
	return 0;
}