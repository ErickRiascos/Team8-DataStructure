/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Deber de Memoria Dinamica
Fecha creación: 03/06/2021
Fecha modificación: 03/05/2021*/
#pragma once
class Matriz
{
private:
	int** matriz;
	int dim;
public:
	Matriz()= default;
	Matriz(int);
	int** segmentar();
	void encerar();
	void ingresar();
	void imprimir();
	int** getMatriz();
	int getDim();
	void setMatriz(int**);
	void setDim(int);
};

