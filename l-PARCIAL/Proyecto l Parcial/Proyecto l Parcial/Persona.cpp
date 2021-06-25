/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Proyecto
Fecha creación: 15/06/2021
Fecha modificación: 26/06/2021*/
#pragma once
#pragma warning(disable : 4996)
#include "Persona.h"
#include <iostream>
/*Constructor de Persona */
Persona::Persona(Fecha _nacimiento, char* _nombres, char* _apellidos, char* _direccion, char* _telefono, int _monto, Fecha _inicio, int _meses, Cedula _ci,int _interes)
{
	this->email = (char*)calloc(30, sizeof(char));
	this->apellido = _apellidos;
	this->meses = _meses;
	this->direccion = _direccion;
	this->edad = _nacimiento.calcularEdad(_inicio);
	this->inicio = _inicio;
	this->monto = _monto;
	this->nacimiento = _nacimiento;
	this->nombre = _nombres;
	this->telefono = _telefono;
	this->interes = _interes;
	this->ci = _ci;
	calcularPago();
}
Persona::Persona(Fecha a,int meses)
{
	this->inicio = a;
	this->meses = meses;
}

////////////////////////////////////////////////////////////////////////
// Name:       toString()
// Purpose:    Implementation de toString()
// Parametros:
// Return:  aux
////////////////////////////////////////////////////////////////////////
/*Imprime toda la informacion de la persona*/
char* Persona::toString()
{
	int i = 0;
	int a = 100 +strlen(imprimirFechas())+strlen(nombre) + strlen(apellido) + strlen(email) + strlen(direccion) + strlen(telefono) + strlen(ci.toString());
	char* aux = (char*)calloc(a, sizeof(char));
	char* ed = (char*)calloc(5, sizeof(char));
	itoa(edad, ed, 10);
	unirInfo(aux, "\nCliente: ");
	unirInfo(aux, "\nCedula: ");
	unirInfo(aux, ci.toString());
	unirInfo(aux, "\nNombres: ");
	unirInfo(aux, nombre);
	unirInfo(aux, "\nApellidos: ");
	unirInfo(aux, apellido);
	unirInfo(aux, "\nEdad: ");
	unirInfo(aux, ed);
	unirInfo(aux, "\nEmail: ");
	unirInfo(aux, email);
	unirInfo(aux, "\n");
	unirInfo(aux, imprimirFechas());
	return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       getInicialesNombres()
// Purpose:    Implementation de getInicialesNombres()
// Parametros:
// Return:  aux
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Name:       getApellido()
// Purpose:    Implementation de getApellido()
// Parametros:
// Return: 
////////////////////////////////////////////////////////////////////////
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

void Persona::setEmail(char* _email){
	strcpy(email,_email);
}

char* Persona::imprimirFechas(){
	char* aux = (char*)calloc(1000,sizeof(char));
	unirInfo(aux, "Rol pago:");
	for (int i = 0;i < meses;i++) {
		Fecha a=*(rolPago + i);
		unirInfo(aux,"\n");
		unirInfo(aux, a.toString());
	}
	return aux;
}
////////////////////////////////////////////////////////////////////////
// Name:       calcularPago()
// Purpose:    Implementation de calcularPago()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
/*Produce un vector con todas las fechas que la persona debe pagar y valida si es un dia laboral
@return Fecha* (arreglo)*/
void Persona::calcularPago()
{
	this->rolPago = (Fecha*)calloc(this->meses, sizeof(Fecha));
	Fecha aux = inicio;
	for (int i = 0; i < meses; i++) {
		aux.setMes(aux.getMes() + 1);
		if (aux.calcularDia() == -1) {
			aux.setDia(1);
			aux.setMes(aux.getMes() + 1);
			if ((aux.calcularDia() == 0 || aux.calcularDia() == 6)) {
				if (aux.calcularDia() == 0) {
					if (aux.validarExceso(1)) {
						aux.setDia(aux.getDia() + 1);
						aux.setMontoMens((this->monto/meses * interes)+(this->monto/meses));
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 1);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
					}
				}
				else {
					if (aux.validarExceso(2)) {
						printf("Hola");
						aux.setDia(aux.getDia() + 2);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 2);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
					}
				}
				aux.setDia(inicio.getDia());
			}
			else {
				aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
				*(rolPago + i) = aux;
			}
			aux.setDia(inicio.getDia());
			aux.setMes(aux.getMes() - 1);
		}
		else {
			if ((aux.calcularDia() == 0 || aux.calcularDia() == 6)) {
				if (aux.calcularDia() == 0) {
					if (aux.validarExceso(1)) {
						aux.setDia(aux.getDia() + 1);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 1);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
					}
				}
				else {
					if (aux.validarExceso(2)) {
						aux.setDia(aux.getDia() + 2);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 2);
						aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
						*(rolPago + i) = aux;
					}
				}
				aux.setDia(inicio.getDia());
			}
			else {
				aux.setMontoMens((this->monto / meses * interes) + (this->monto / meses));
				*(rolPago + i) = aux;
			}
		}
	}
}

void Persona::unirInfo(char* recive, const char* source)
{
	int k = strlen(recive);
	int j = strlen(source);
	int z = 0;
	for (int i = 0; i < j + 2; i++) {
		*(recive + k++) = *(source + z++);
	}
}



