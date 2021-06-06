#pragma once
class Vector
{
private: 
	int* numeros;
	int dim;
public:
	Vector(int);
	Vector() = default;
	int* getNumeros();
	void setNumeros(int *);
	int* segmentar();
	void ordenar();
	int getDim();
	int calcularSuma();
	int* calcularPares();
	int* calcularImpares();
	void ingresar();
	void imprimir();
};

