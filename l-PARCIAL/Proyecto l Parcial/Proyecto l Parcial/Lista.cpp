/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Proyecto
Fecha creación: 15/06/2021
Fecha modificación: 26/06/2021*/#pragma once
#pragma warning(disable : 4996)
#include "Lista.h"
#include <iostream>
/*Constructor de la lista*/
Lista::Lista() {
    this->primero = NULL;
    this->actual = NULL;
}
////////////////////////////////////////////////////////////////////////
// Name:       mostrar()
// Purpose:    Implementation de mostrar()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
/*Muestra los elementos existentes en una lista*/
void Lista::mostrar() {
	Nodo* tmp = this->primero;
	while (tmp) {
		std::cout<<tmp->usuario.toString();
		tmp = tmp->siguiente;
	}
}

/*Determina si la lista esta vacia
@return bool*/
bool Lista::listaVacia() {
    return (this->primero == NULL);
}
////////////////////////////////////////////////////////////////////////
// Name:       insertar_Persona(Persona _persona)
// Purpose:    Implementation de insertar_Persona()
// Parametros:
// - _persona
// Return:  
////////////////////////////////////////////////////////////////////////
/*Ingresa un objeto de la clase Persona en la Lista
@parametros Persona*/
void Lista::insertar_Persona(Persona _persona) {
    tamanio++;
    Nodo* nuevo = new Nodo(_persona);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        nuevo->siguiente = primero;
    }
    this->primero= nuevo;
}
////////////////////////////////////////////////////////////////////////
// Name:       eliminar_Persona()
// Purpose:    Implementation de eliminar_Persona()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
/*Elimina la ultima persona ingresada*/
void Lista::eliminar_Persona() {
    Nodo* aux_borrar;
    Nodo* anterior = NULL;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
        std::cout << "Lista de personas, vacia\n";
        std::cout << "Debe ingresar previamente a un usuario valido\n";
    }
    else if (anterior == NULL) {
        primero = primero->siguiente;
        delete aux_borrar;
    }
}

Nodo* Lista::getPrimero()
{
    return primero;
}
////////////////////////////////////////////////////////////////////////
// Name:       generarCorreo()
// Purpose:    Implementation de generarCorreo()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
/*Genera el correo de una lista de personas*/
void Lista::generarCorreo() {
	char dir[] = "@espe.fin.ec";
	int j = 0;
	Nodo* tmp = primero;
	while (tmp) {
		char* _email = (char*)calloc(40, sizeof(char));
		j = 0;
		if (calcularRepeticiones(tmp) == 0) {
			for (int i = 0; i < strlen(tmp->usuario.getInicialesNombres()); i++) {
				*(_email + j++) = *(tmp->usuario.getInicialesNombres() + i);
			}
			for (int i = 0; i < strlen(tmp->usuario.getApellido()); i++) {
				*(_email + j++) = *(tmp->usuario.getApellido() + i);
			}
			for (int i = 0; i < strlen(dir); i++) {
				*(_email + j++) = *(dir + i);
			}
		}
		else {
			for (int i = 0; i < strlen(tmp->usuario.getInicialesNombres()); i++) {
				*(_email + j++) = *(tmp->usuario.getInicialesNombres() + i);
			}
			for (int i = 0; i < strlen(tmp->usuario.getApellido()); i++) {
				*(_email + j++) = *(tmp->usuario.getApellido() + i);
			}
			*(_email + j++) = calcularRepeticiones(tmp) + 48;
			for (int i = 0; i < strlen(dir); i++) {
				*(_email + j++) = *(dir + i);
			}
		}
		tmp->usuario.setEmail(_email);
		tmp = tmp->siguiente;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       calcularRepeticiones(Nodo* a)
// Purpose:    Implementation de calcularRepeticiones()
// Parametros:
// - a
// Return:  i
////////////////////////////////////////////////////////////////////////
/*Calcula el numero de repetciones de iniciales y apellido de las personas
@parametro: Nodo
@return: int*/
int Lista::calcularRepeticiones(Nodo* a)
{
	int i = 0;
	Nodo* aux2 = a->siguiente;
	while (aux2) {
		if (strcmp(a->usuario.getInicialesNombres(), aux2->usuario.getInicialesNombres()) == 0 && strcmp(a->usuario.getApellido(), aux2->usuario.getApellido()) == 0)
			i++;
		aux2 = aux2->siguiente;
	}
	return i;
}

int Lista::getTamanio()
{
	return tamanio;
}

char* Lista::getPdf()
{
	Nodo* tmp = this->primero;
	char* aux = (char*)calloc(1000, sizeof(char));
	while (tmp){
		strcat(aux, tmp->getUsuario().toString());
		tmp = tmp->getSiguiente();
	}
	return aux;
}
////////////////////////////////////////////////////////////////////////
// Name:       unirInfo(char* recive, const char* source)
// Purpose:    Implementation de unirInfo()
// Parametros:
// - recive, source
// Return:  
////////////////////////////////////////////////////////////////////////
void Lista::unirInfo(char* recive, const char* source)
{
	int k = strlen(recive);
	int j = strlen(source);
	int z = 0;
	for (int i = 0; i < j + 2; i++) {
		*(recive + k++) = *(source + z++);
	}
}


