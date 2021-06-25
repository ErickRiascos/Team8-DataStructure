#pragma once
#pragma warning(disable : 4996)
#include "Persona.h"
#include <iostream>
/*Constructor de Persona */
Persona::Persona(Fecha _nacimiento, char* _nombres, char* _apellidos, char* _direccion, char* _telefono, int _monto, Fecha _inicio, int _meses, Cedula _ci)
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
	this->ci = _ci;
	calcularPago();
}
Persona::Persona(Fecha a,int meses)
{
	this->inicio = a;
	this->meses = meses;
}
/*Imprime toda la informacion de la persona*/
void Persona::toString()
{
	int i = 0;
	std::cout << "\nCedula: ";
	ci.mostrarCedula();
	std::cout << "\nFecha de nacimiento: ";
	nacimiento.imprimirFecha();
	std::cout<< "Edad: "<<edad<<"\nNombres: " << nombre << "\nApellidos: " << apellido << " " << "\nDireccion: " << direccion << "\nTelefono: " << telefono<<"\nCorreo: "<<email<<std::endl;
	std::cout << "Rol de Pago: "<<std::endl;
	imprimirFechas();
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
void Persona::imprimirFechas(){
	for (int i = 0;i < meses;i++) {
		Fecha a=*(rolPago + i);
		a.imprimirFecha();
	}
}

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
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 1);
						*(rolPago + i) = aux;
					}
				}
				else {
					if (aux.validarExceso(2)) {
						printf("Hola");
						aux.setDia(aux.getDia() + 2);
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 2);
						*(rolPago + i) = aux;
					}
				}
				aux.setDia(inicio.getDia());
			}
			else {
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
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 1);
						*(rolPago + i) = aux;
					}
				}
				else {
					if (aux.validarExceso(2)) {
						aux.setDia(aux.getDia() + 2);
						*(rolPago + i) = aux;
						aux.setMes(aux.getMes() - 1);
					}
					else {
						aux.setDia(aux.getDia() + 2);
						*(rolPago + i) = aux;
					}
				}
				aux.setDia(inicio.getDia());
			}
			else {
				*(rolPago + i) = aux;
			}
		}
	}
}



