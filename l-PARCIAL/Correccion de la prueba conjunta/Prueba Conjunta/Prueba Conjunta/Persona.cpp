#pragma once
#pragma warning(disable : 4996)
#include "Persona.h"
#include <iostream>
#include <conio.h>
char* validarDatos1(const char* msj)
{
	char* datos = (char*)calloc(30, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
Persona::Persona(char* _nombre, char* _apellido, Cedula _ci)
{
	this->nombre = _nombre;
	this->apellido = _apellido;
	this->ci = _ci;
	this->email = nullptr;
	encriptarCedula();
}

/*Imprime toda la informacion de la persona*/
char* Persona::toString()
{
	int a = 100 + strlen(nombre) + strlen(apellido) + strlen(email) + strlen(ci.toString()) + strlen(encryp.toString());
	char* aux=(char*)calloc(a,sizeof(char));
	unirInfo(aux,"\nCLIENTE:");
	unirInfo(aux, "\nCedula: ");
	unirInfo(aux, ci.toString());
	unirInfo(aux, "\nNombre: ");
	unirInfo(aux, nombre);
	unirInfo(aux,"\nApellido: ");
	unirInfo(aux, apellido);
	unirInfo(aux, "\nEmail: ");
	unirInfo(aux,email);
	unirInfo(aux, "\nCedula encriptada: ");
	unirInfo(aux, encryp.toString());
	unirInfo(aux, "\n");
	return aux;
}

char* Persona::getInicialesNombres()
{
	int i = 0;
	char* aux=(char*)calloc(10,sizeof(char));
	for (int i = 0; i < strlen(nombre); i++) {
		if (*(nombre + 0) >= 65 && *(nombre + 0) <= 90)
			*(aux + 0) = *(nombre + 0) + 32;
		else 
			*(aux + 0) = *(nombre + 0);
		if (*(nombre + i+1) >= 65 && *(nombre + i+1) <= 90 ) {
			if (*(nombre + i) == 32)
				*(aux + 1) = *(nombre + i + 1) + 32;
		}
		else {
			if (*(nombre + i) == 32) 
				*(aux + 1) = *(nombre + i + 1);
		}
	}
	return aux;
}

char* Persona::getApellido()
{
	int i = 0;
	char* aux = (char*)calloc(10, sizeof(char));
	for (int i = 0; i < strlen(apellido); i++) {
		if (*(apellido + i) == 32) {
			return aux;
		}
		if(*(apellido+i)>=65&&*(apellido+i)<=90)
			*(aux + i) = *(apellido + i)+32;
		else
			*(aux + i) = *(apellido + i);			
	}	
}
void Persona::setEmail(char* _email)
{
	this->email = (char*)calloc(30, sizeof(char));
	strcpy(email,_email);
}

char* Persona::getEmail()
{
	return email;
}

char* Persona::getNombre()
{
	return nombre;
}

void Persona::setEncryp(Cedula _ci){
	this->encryp = _ci;
}

void Persona::setNombre(char* _nombre){
	strcmp(nombre,_nombre);
}

void Persona::setApellidos(char* _apellido)
{
	strcmp(apellido,_apellido);
}

void Persona::setCedula(Cedula _ci)
{
	this->ci = _ci;
}

void Persona::encriptarCedula()
{
	this->encryp.ingresarCedula(ci.toString());
	bool a = true;
	while (a) {
		int b = atoi(validarDatos1("\nIngrese numero para encriptacion: "));
		if (b >= 1 && b <= 9) {
			this->encryp.encriptarCedula(0, b);
			std::cout << "\nEncriptacion exitosa... ";
			a = false;
		}
		else {
			std::cout << "\nEl numero de encriptacion nu puede ser mayor a 9, intentelo de nuevo... ";
		}
	}
}

void Persona::unirInfo(char* recive,const char* source)
{
	int k = strlen(recive);
	int j = strlen(source);
	int z = 0;
	for (int i = 0;i < j + 2;i++) {
		*(recive + k++) = *(source + z++);
	}
}



