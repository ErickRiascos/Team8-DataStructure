/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Proyecto
Fecha creación: 15/06/2021
Fecha modificación: 26/06/2021*/
#pragma once
#pragma warning(disable : 4996)
#include "Fecha.h"
#include <iostream>
#include <ctime>
#include <conio.h>
////////////////////////////////////////////////////////////////////////
// Name:       Fecha(int _dia, int _mes, int _anio)
// Purpose:    Implementation de Fecha()
// Parametros:
// - _dia, _mes, _anio
// Return:  
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:       calcularDia()
// Purpose:    Implementation de la funcion calcularDia()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:       get_Dia()
// Purpose:    Implementation de la funcion get_Dia()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:       calcularEdad(Fecha f)
// Purpose:    Implementation de la funcion calcularEdad()
// Parametros:
// -f
// Return:  anioAct - anio
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:       setDia(int _dia)
// Purpose:    Implementation de la funcion setDia()
// Parametros:
// - _dia
// Return:  
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
// Name:       setMes(int _mes)
// Purpose:    Implementation de la funcion setMes()
// Parametros:
// -  _mes
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

////////////////////////////////////////////////////////////////////////
// Name:       validaFecha()
// Purpose:    Implementation de la funcion validaFecha()
// Parametros:
// Return:  correcto
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Name:       validarExceso(int a)
// Purpose:    Implementation de la funcion validarExceso()
// Parametros:
// - a
// Return:  correcto
////////////////////////////////////////////////////////////////////////
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

void Fecha::setMontoMens(double a)
{
	this->montoMens = a;
}
////////////////////////////////////////////////////////////////////////
// Name:       toString()
// Purpose:    Implementation de la funcion toString()
// Parametros:
// Return:  a
////////////////////////////////////////////////////////////////////////
char* Fecha::toString()
{
	char* a = (char*)calloc(100,sizeof(char));
	char* aux=(char*)calloc(15, sizeof(char));
	unirInfo(a, "\n");
	unirInfo(a,get_Dia());
	unirInfo(a, ", ");
	itoa(dia, aux, 10);
	unirInfo(a, aux);
	unirInfo(a, "-");
	aux = (char*)calloc(5, sizeof(char));
	itoa(mes, aux, 10);
	unirInfo(a, aux);
	unirInfo(a, "-");
	aux = (char*)calloc(5, sizeof(char));
	itoa(anio, aux, 10);
	unirInfo(a, aux);
	aux = (char*)calloc(15, sizeof(char));
	itoa(montoMens, aux, 10);
	unirInfo(a, ", Valor a cancelar: $");
	unirInfo(a,aux);
	return a;
}
void Fecha::unirInfo(char* recive, const char* source)
{
	int k = strlen(recive);
	int j = strlen(source);
	int z = 0;
	for (int i = 0; i < j + 2; i++) {
		*(recive + k++) = *(source + z++);
	}
}


