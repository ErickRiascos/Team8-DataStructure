#pragma once
#include "Vector.h"
class Cubo{
private:
	Vector numeros;
	int** cubo;
public:
	Cubo(Vector);
	~Cubo();
	Vector getVector();
	int** getCubo();
	void setVector(Vector);
	void setCubo(int**);
	void segmentar();
	void llenar();
	void imprimir();
};

