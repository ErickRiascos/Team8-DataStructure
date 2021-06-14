#pragma once
#include "Persona.h"
#include <iostream>

Persona::Persona(int _edad)
{
	this->edad = _edad;
}

int Persona::getEdad()
{
	return this->edad;
}

void Persona::toString()
{
	std::cout << nombre<<", "<<edad<<"\n";
}

Persona::Persona(Fecha _nacimiento, char* _nombres, char* _apellidos, char* _direccion, char* _telefono, int _monto, Fecha _inicio, int _meses)
{
	this->apellido = _apellidos;
	this->direccion = _direccion;
	this->edad = this->nacimiento.calcularEdad(_inicio);
	this->inicio = _inicio;
	this->monto = _monto;
	this->nacimiento = _nacimiento;
	this->nombre = _nombres;
	this->telefono = _telefono;
	this->rolPago = _inicio.calcularPago(_inicio,_meses);
}

