/*Fecha creación: 06/15/2021
Fecha modificación: 25/06/2021*/
#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
	int m;
	double montoMens;
public:
	Fecha(int, int, int);
	Fecha() = default;
	~Fecha();
	int calcularDia();
	void imprimirFecha();
	char* get_Dia();
	int calcularEdad(Fecha);
	void setDia(int);
	int getDia();
	void setMes(int);
	int getMes();
	void setAnio(int);
	int getAnio();
	bool validaFecha();
	bool validarExceso(int);
	void setMontoMens(double);
	char* toString();
	void unirInfo(char*,const char*);
	bool validarNacimiento();
	bool validarInicio();
};