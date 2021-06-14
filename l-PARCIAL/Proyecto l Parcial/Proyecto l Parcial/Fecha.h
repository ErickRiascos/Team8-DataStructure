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
	char* imprimirDia();
	int calcularEdad(Fecha);
	void setDia(int);
	int getDia();
	void setMes(int);
	int getMes();
	void setAnio(int);
	int getAnio();
	Fecha* calcularPago(Fecha,int);
};