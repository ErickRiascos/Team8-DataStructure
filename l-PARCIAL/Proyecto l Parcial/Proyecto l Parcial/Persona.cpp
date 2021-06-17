#pragma once
#include "Persona.h"
#include <iostream>

/*Imprime toda la informacion de la persona*/
void Persona::toString()
{
	std::cout << "\nCedula: ";
	ci.mostrarCedula();
	std::cout << "\nFecha de nacimiento: ";
	nacimiento.imprimirFecha();
	std::cout<< "Edad: "<<edad<<"\nNombres: " << nombre << "\nApellidos: " << apellido << " " << "\nDireccion: " << direccion << "\nTelefono:" << telefono<<"\n";
}

char* Persona::getNombres()
{
	return nombre;
}

char* Persona::getApellidos()
{
	return apellido;
}
/*Constructor de Persona */
Persona::Persona(Fecha _nacimiento, char* _nombres, char* _apellidos, char* _direccion, char* _telefono, int _monto, Fecha _inicio, int _meses,Cedula _ci)
{
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

