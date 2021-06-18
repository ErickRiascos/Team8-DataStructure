/*Fecha creación : 01 / 05 / 2021
Fecha modificación : 17 / 06 / 2021*/
#pragma once
class Fecha
{
private: 
	int dia;
	int mes;
	int anio;
	int m;
public:
	Fecha(int, int, int);
	Fecha() = default;
	~Fecha();
	int calcularDia();
	void imprimirFecha();
	bool validaFecha();
	void setDia(int);
	int getDia();
	void setMes(int);
	int getMes();
	void setAnio(int);
	int getAnio();
};

