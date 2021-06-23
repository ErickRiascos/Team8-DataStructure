#pragma once
#pragma warning(disable : 4996)
#include "Persona.h"
#include <iostream>

/*Imprime toda la informacion de la persona*/
void Persona::toString()
{
	int i = 0;
	std::cout << "\nCedula: ";
	ci.mostrarCedula();
	std::cout << "\nFecha de nacimiento: ";
	nacimiento.imprimirFecha();
	std::cout<< "Edad: "<<edad<<"\nNombres: " << nombre << "\nApellidos: " << apellido << " " << "\nDireccion: " << direccion << "\nTelefono: " << telefono<<"\nCorreo: "<<email<<std::endl;
	/*while (rolPago) {
		Fecha aux=*(rolPago + i);
		aux.imprimirFecha();
	}*/
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
	strcpy(email,_email);
}
/*Constructor de Persona */
Persona::Persona(Fecha _nacimiento, char* _nombres, char* _apellidos, char* _direccion, char* _telefono, int _monto, Fecha _inicio, int _meses,Cedula _ci)
{
	this->email = (char*)calloc(30, sizeof(char));
	this->apellido = _apellidos;
	this->direccion = _direccion;
	this->edad = _nacimiento.calcularEdad(_inicio);
	this->inicio = _inicio;
	this->monto = _monto;
	this->nacimiento = _nacimiento;
	this->nombre = _nombres;
	this->telefono = _telefono;
	this->rolPago = _inicio.calcularPago(_inicio,_meses);
	this->ci = _ci;
}

