#include "Fecha.h"
#include <iostream>
#include <ctime>
#include <conio.h>
//Constructor de la Fecha
Fecha::Fecha(int _dia, int _mes, int _anio)
{
	int mesesAnioBisiesto[] = { 0,3,4,0,2,5,0,3,6,1,4,6 };
	int mesesAnioNormal[] = { 0,3,3,6,1,4,6,2,5,0,3,5 };
	this->dia = _dia;
	this->mes = _mes;
	this->anio = _anio;
	for (int i = 0; i < 12; i++) {
		if (anio % 4 == 0 && i + 1 == mes)
			m = mesesAnioBisiesto[i];
		if (anio % 4 != 0 && i + 1 == mes)
			m = mesesAnioNormal[i];
	}
}
/*Calcula que dia es la fecha ingresada 
/@return entero siendo 0 Domingo y 5 Viernes*/
int Fecha::calcularDia() {
	if (validaFecha()) {
		return ((anio - 1) % 7 + ((anio - 1) / 4 - (3 * ((anio - 1) / 100 + 1) / 4)) % 7 + m + dia % 7) % 7;
	}
	else {
		return -1;
	}	
}
/*Imprime la fecha*/
void Fecha::imprimirFecha()
{
	std::cout << get_Dia()<<", "<<dia << "-" << mes << "-" << anio << std::endl;
}
/*Imprime en letras el dia que es ejm: "Lunes"*/
char* Fecha::get_Dia()
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

/*Calcula la edad a partir de la fecha de inicio de pagi
@parametro Fecha inicio
@return entero siendo la edad del usuario*/
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
	if (validaFecha()) {
		this->dia = _dia;
	}
	else {
		this->dia = 1;
		mes++;
	}
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

/*Valida que la fecha ingresada exista
@return bool*/
bool Fecha::validaFecha()
{
	bool correcto = false;
	if ((mes <= 7) && (mes % 2 != 0) && (dia <= 31) && (anio > 1800))
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

Fecha::~Fecha() {

}
bool Fecha::validarExceso(int a)
{
	bool correcto = false;
	if ((mes <= 7) && (mes % 2 != 0) && (dia + a > 31) && (anio > 1800))
		correcto = true;
	if ((mes <= 7) && (mes % 2 == 0) && (mes != 2) && (dia + a > 30) && (anio > 1800))
		correcto = true;
	if ((mes >= 8) && (mes % 2 == 0) && (dia + a > 31) && (anio > 1800))
		correcto = true;
	if ((mes >= 8) && (mes % 2 != 0) && (dia + a > 30) && (anio > 1800))
		correcto = true;
	if ((mes == 2) && (anio % 4 != 0) && (dia + a > 28) && (anio > 1800))
		correcto = true;
	if ((mes == 2) && (anio % 4 == 0) && (dia + a > 29) && (anio > 1800))
		correcto = true;
	return correcto;
}


