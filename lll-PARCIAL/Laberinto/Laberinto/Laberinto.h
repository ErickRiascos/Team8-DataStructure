#pragma once
class Laberinto
{
private:
	int** matriz;
	int x;
	int y;
	bool fin;
public:
	Laberinto(int,int);
	void generarLaberinto();
	void imprimir();
	bool buscarSolucion(int, int);
	int validar(int,int);

};

