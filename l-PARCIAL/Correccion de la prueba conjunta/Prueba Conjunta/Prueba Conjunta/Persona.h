#pragma once
#include "Cedula.h"
class Persona{
private:
	char* nombre;
	char* apellido;
	char* email;
	Cedula encryp;
	Cedula ci;
public:
	Persona(char*,char*,Cedula);
	Persona() = default;
	char* toString();
	char* getInicialesNombres();
	char* getApellido();
	void setEmail(char*);
	char* getEmail();
	char* getNombre();
	void setEncryp(Cedula);
	void setNombre(char*);
	void setApellidos(char*);
	void setCedula(Cedula);
	void encriptarCedula();
	void unirInfo(char*,const char*);
};

