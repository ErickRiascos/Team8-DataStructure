#pragma once
#include "Fecha.h"
class Persona
{
private:
	int edad=5;
	Fecha nacimiento;
	Fecha inicio;
	Fecha* rolPago;
	char* nombre;
	char* apellido;
	char* direccion;
	char* email;
	char* telefono;
	double monto;
	double interes;
	int meses;
public:
	Persona(Fecha,char*,char*,char*,char*,int,Fecha,int);
	Persona(int);
	Persona() = default;
	int getEdad();
	void toString();
};

