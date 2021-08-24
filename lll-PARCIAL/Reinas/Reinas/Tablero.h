#pragma once
class Tablero
{
private:
	int* reinas;
	bool exito;
	int dimension;
	int soluciones;
public:
	Tablero(int);
	bool validacion(int);
	bool posReinas(int);
	void imprimir();
};

