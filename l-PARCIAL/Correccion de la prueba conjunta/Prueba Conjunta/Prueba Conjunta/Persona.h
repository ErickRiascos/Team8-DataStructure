#pragma once
#include "Cedula.h"
class Persona{
private:
	char* nombre;
	char* apellido;
	char* email;
	Cedula ci;
public:
	Persona(char*,char*,Cedula);
	Persona() = default;
	void toString();
	char* getInicialesNombres();
	char* getApellido();
	void setEmail(char*);
	char* getEmail();
	char* getNombre();
};

