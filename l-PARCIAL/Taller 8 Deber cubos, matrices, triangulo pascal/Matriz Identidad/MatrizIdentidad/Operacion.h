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