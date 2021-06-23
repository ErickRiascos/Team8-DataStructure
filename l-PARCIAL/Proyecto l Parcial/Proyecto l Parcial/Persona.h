#pragma once
#include "Fecha.h"
#include "Cedula.h"
class Persona
{
private:
	int edad;
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
	Cedula ci;
public:
	Persona(Fecha,char*,char*,char*,char*,int,Fecha,int,Cedula);
	Persona() = default;
	void toString();
	char* getInicialesNombres();
	char* getApellido();
	void setEmail(char*);
};

