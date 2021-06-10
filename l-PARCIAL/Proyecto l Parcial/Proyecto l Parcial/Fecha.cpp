#include "Fecha.h"
#include <iostream>
#include <ctime>
Fecha::Fecha(int _dia, int _mes, int _anio)
{
	this->dia = _dia;
	this->mes = _mes;
	this->anio = _anio;
	int mesesAnioBisiesto[] = { 0,3,4,0,2,5,0,3,6,1,4,6 };
	int mesesAnioNormal[] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
	for (int i = 0; i < 12; i++) {
		if (anio % 4 == 0 && i + 1 == mes) {
			m = mesesAnioBisiesto[i];
		}
		if (anio % 4 != 0 && i + 1 == mes) {
			m = mesesAnioNormal[i];
		}
	}
}

int Fecha::calcularDia() {
	return ((anio - 1) % 7 + ((anio - 1) / 4 - (3 * ((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
}

void Fecha::imprimirFecha()
{
	std::cout << dia << "-" << mes << "-" << anio << std::endl;
}

char* Fecha::imprimirDia()
{
	char* a = (char*)calloc(10, sizeof(char));
	char dias[7][10] = { "Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado" };
	for (int i = 0; i < 7;i++) {
		if (i == calcularDia()) {
			for (int j = 0;j < 10;j++) {
				a[j] = dias[i][j];
			}			
		}
	}
	return a;
}


int Fecha::calcularEdad(Fecha f)
{
	int diaAct=f.getDia();
	int mesAct=f.getMes();
	int anioAct=f.getAnio();	
	if (diaAct != dia && mesAct <= mes) {
		return anioAct - anio-1;
	}
	else
		return anioAct - anio;
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
	if (mes == 12) {
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

