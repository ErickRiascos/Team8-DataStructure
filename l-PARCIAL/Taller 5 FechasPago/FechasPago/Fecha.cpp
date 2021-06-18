#include "Fecha.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::Fecha(int _dia, int _mes, int _anio)
// Purpose:    Implementation de Fecha::Fecha()
// Parametros:
// - _dia
// - _mes
// - _anio
// Return:    
////////////////////////////////////////////////////////////////////////
Fecha::Fecha(int _dia, int _mes, int _anio)
{
	this->dia = _dia;
	this->mes = _mes;
	this->anio = _anio;
	int mesesAnioBisiesto[] = {0,3,4,0,2,5,0,3,6,1,4,6};
	int mesesAnioNormal[] = {0,3,3,6,1,4,6,2,5,0,3,5};
	for (int i = 0; i < 12; i++){
		if (anio % 4 == 0 && i+1 == mes){
			m = mesesAnioBisiesto[i];
		}
		if (anio % 4 != 0 && i + 1 == mes) {
			m = mesesAnioNormal[i];
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::calcularDia()
// Purpose:    Implementation de Fecha::calcularDia()
// Parametros: 
// Return:    int
////////////////////////////////////////////////////////////////////////
int Fecha::calcularDia() {
	return ((anio - 1) % 7 + ((anio - 1) / 4 - (3 * ((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::imprimirFecha()
// Purpose:    Implementation de Fecha::imprimirFecha()
// Parametros: 
// Return:    
////////////////////////////////////////////////////////////////////////
void Fecha::imprimirFecha()
{
	std::cout << dia << "-" << mes << "-" << anio << std::endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setDia(int _dia)
// Purpose:    Implementation de Fecha::setDia()
// Parametros: 
// - _dia
// Return:    
////////////////////////////////////////////////////////////////////////
void Fecha::setDia(int _dia)
{
	this->dia = _dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getDia()
// Purpose:    Implementation de Fecha::getDia()
// Parametros: 
// Return:    dia
////////////////////////////////////////////////////////////////////////
int Fecha::getDia()
{
	return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMes(int _mes)
// Purpose:    Implementation de Fecha::setMes()
// Parametros: 
// - _mes
// Return:   
////////////////////////////////////////////////////////////////////////
void Fecha::setMes(int _mes)
{	
	int mesesAnioBisiesto[] = { 0,3,4,0,2,5,0,3,6,1,4,6 };
	int mesesAnioNormal[] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
	for (int i = 0; i < 12; i++) {
		if (anio % 4 == 0 && i + 1 == _mes) {
			m = mesesAnioBisiesto[i];
		}
		if (anio % 4 != 0 && i + 1 == _mes) {
			m = mesesAnioNormal[i];
		}
	}
	if (mes==12) {
		mes = 1;
		anio += 1;
		m = 0;
	}
	else {
		this->mes = _mes;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMes()
// Purpose:    Implementation de Fecha::getMes()
// Parametros: 
// Return:   mes
////////////////////////////////////////////////////////////////////////
int Fecha::getMes()
{
	return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setAnio(int _anio)
// Purpose:    Implementation de Fecha::setAnio()
// Parametros: 
// - _anio
// Return:   
////////////////////////////////////////////////////////////////////////
void Fecha::setAnio(int _anio)
{
	this->anio = _anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getAnio()
// Purpose:    Implementation de Fecha::getAnio()
// Parametros: 
// Return:   anio
////////////////////////////////////////////////////////////////////////
int Fecha::getAnio()
{
	return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::~Fecha()
// Purpose:    Implementation de Fecha::~Fecha()
// Parametros: 
// Return:   
////////////////////////////////////////////////////////////////////////
Fecha::~Fecha() {

}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::validaFecha()
// Purpose:    Implementation de Fecha::validaFecha()
// Parametros: 
// Return:   correcto
////////////////////////////////////////////////////////////////////////
bool Fecha::validaFecha()
{
	bool correcto = false;
	if ((mes <= 7) && (mes % 2 != 0) && (dia < 31) && (anio > 1800))
		correcto = true;
	if ((mes <= 7) && (mes % 2 == 0) && (mes != 2) && (dia <= 30) && (anio > 1800))
		correcto = true;
	if ((mes >= 8) && (mes % 2 == 0) && (dia <= 31) && (anio > 1800))
		correcto = true;
	if ((mes >= 8) && (mes % 2 != 0) && (dia <= 30) && (anio > 1800))
		correcto = true;
	if ((mes == 2) && (anio % 4 != 0) && (dia <= 28) && (anio > 1800))
		correcto = true;
	if ((mes == 2) && (anio % 4 == 0) && (dia <= 29) && (anio > 1800))
		correcto = true;
	return correcto;
}