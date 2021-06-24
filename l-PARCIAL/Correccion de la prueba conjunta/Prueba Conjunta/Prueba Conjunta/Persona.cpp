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
}

/*Imprime toda la informacion de la persona*/
void Persona::toString()
{
	int i = 0;
	std::cout << "\nCedula: ";
	ci.mostrarCedula();
	int b = atoi(validarDatos1("\nIngrese numero para encriptacion: "));
	std::cout << "\nCi encriptada: ";
	this->ci.encriptarCedula(0, b);
	ci.mostrarCedula();
	std::cout<<"\nNombres: " << nombre << "\nApellidos: " << apellido << " " << "\nCorreo: "<<email<<std::endl;
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

