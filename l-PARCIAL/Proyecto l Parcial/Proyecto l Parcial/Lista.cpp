#pragma once
#include "Lista.h"
#include <iostream>
/*Constructor de la lista*/
Lista::Lista() {
    this->primero = NULL;
    this->actual = NULL;
}
/*Muestra los elementos existentes en una lista*/
void Lista::mostrar() {
    Nodo* tmp = this->primero;
    int i =1;   
    while (tmp) {
        std::cout << "CLIENTE " << i++ << ":";
        tmp->usuario.toString();
        tmp = tmp->siguiente;
    }
}
/*Determina si la lista esta vacia
@return bool*/
bool Lista::listaVacia() {
    return (this->primero == NULL);
}
/*Ingresa un objeto de la clase Persona en la Lista
@parametros Persona*/
void Lista::insertar_Persona(Persona _persona) {
    Nodo* nuevo = new Nodo(_persona);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        this->actual->siguiente = nuevo;
    }
    this->actual = nuevo;
}
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
