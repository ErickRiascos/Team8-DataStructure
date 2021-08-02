#pragma once
#include "Lista.h"
#include "Lista.cpp"
class Ordenamiento
{
private:
	Lista<int>lst;
public:
	Ordenamiento(Lista<int>);
	void intercambio();
	void shellSort();
	void radixSort();
};

