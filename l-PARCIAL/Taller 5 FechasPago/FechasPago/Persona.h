#pragma once
#include <iostream>
#include "Fecha.h"
class Persona
{
private:
	std::string nombre;
	Fecha fecha_Inicio;
	int mes_Pago;
public:
	Persona(std::string, Fecha,int);
	~Persona();
	Fecha* calcularPago();



};

