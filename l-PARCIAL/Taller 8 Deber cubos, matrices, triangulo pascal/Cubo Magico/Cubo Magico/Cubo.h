/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/06/2021
Fecha modificación: 05/05/2021*/
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

