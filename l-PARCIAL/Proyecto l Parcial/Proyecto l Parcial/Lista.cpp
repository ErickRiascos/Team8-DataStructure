#include "Lista.h"
#include <iostream>
Lista::Lista() {
    this->primero = NULL;
    this->actual = NULL;
}
void Lista::mostrar() {
    Nodo* tmp = this->primero;
    while (tmp) {
        std::cout<<""<< tmp->usuario.getEdad() << "->";
        tmp = tmp->siguiente;
    }
    std::cout << "NULL" << std::endl;
}
bool Lista::listaVacia() {
    return (this->primero == NULL);
}
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
