/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/05/2021
Fecha modificación: 05/05/2021*/
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

