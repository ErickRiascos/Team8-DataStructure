/*Fecha creaci�n: 03/05/2021
Fecha modificaci�n: 17/06/2021 */
#pragma once

class Operacion
{
public:
	int** segmentar(int);
	void encerar(int**, int);
	void imprimir(int**, int);
	void identidad(int**, int n);
	Operacion();
	~Operacion() = default;
};
