#include "Fecha.h"
#include <iostream>

Fecha::Fecha(int _dia, int _mes, int _anio)
{
	this->dia = _dia;
	this->mes = _mes;
	this->anio = _anio;

	if (anio%4==0) {
		switch (this->mes) {
			case 1:
				m = 0;
				break;
			case 2:
				m = 3;
				break;
			case 3:
				m = 4;
				break;
			case 4:
				m = 0;
				break;
			case 5:
				m = 2;
				break;
			case 6:
				m = 5;
				break;
			case 7:
				m = 0;
				break;
			case 8:
				m = 3;
				break;
			case 9:
				m = 6;
				break;
			case 10:
				m = 1;
				break;
			case 11:
				m = 4;
				break;
			case 12:
				m = 6;
				break;
		}
	}
	else {
		switch (this->mes) {
			case 1:
				m = 0;
				break;
			case 2:
				m = 3;
				break;
			case 3:
				m = 3;
				break;
			case 4:
				m = 6;
				break;
			case 5:
				m = 1;
				break;
			case 6:
				m = 4;
				break;
			case 7:
				m = 6;
				break;
			case 8:
				m = 2;
				break;
			case 9:
				m = 5;
				break;
			case 10:
				m = 0;
				break;
			case 11:
				m = 3;
				break;
			case 12:
				m = 5;
				break;
		}
	}
}

int Fecha::calcularDia() {
	int diaResultado;
	int a= this->anio;
	int d= this->dia;
	int m=this->m;
	diaResultado = ((anio - 1) % 7 + ((anio - 1) / 4 - (3 * ((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
	return diaResultado;
}

void Fecha::imprimirFecha()
{
	std::cout << dia << "-" << mes << "-" << anio << std::endl;
}

void Fecha::setDia(int _dia)
{
	this->dia = _dia;
}

int Fecha::getDia()
{
	return dia;
}

void Fecha::setMes(int _mes)
{	
	if (mes==12) {
		mes = 1;
		anio += 1;
	}
	else {
		this->mes = _mes;
	}
}


int Fecha::getMes()
{
	return mes;
}

void Fecha::setAnio(int _anio)
{
	this->anio = _anio;
}

int Fecha::getAnio()
{
	return anio;
}



Fecha::~Fecha() {

}
