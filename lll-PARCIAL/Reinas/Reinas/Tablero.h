#pragma once
class Tablero
{
private:
	int* reinas;
	bool exito;
	bool solucion;
	int dimension;
	int soluciones;
public:
	Tablero(int);
	bool validacion(int);
	bool posReinas(int);
	void imprimir();
	int getSoluciones();
};

