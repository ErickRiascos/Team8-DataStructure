#include "Persona.h"
#include <iostream>
bool Persona::listaVacia() {
    return (this->primero == NULL);
}
Persona::Persona() {
    this->primero = NULL;
    this->actual = NULL;
}

void Persona::mostrar() {
    Nodo* tmp = this->primero;
    while (tmp) {
        std::cout << tmp->valor << "->";
        tmp = tmp->siguiente;
    }
    std::cout << "NULL" << std::endl;
}
void Persona::insertar_Cabeza(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        this->actual->siguiente = nuevo;
    }
    this->actual = nuevo;
}
void Persona::eliminar_Cabeza() {
    Nodo* aux_borrar;
    Nodo* anterior = NULL;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
        std::cout << "No se apunta a ningun elemento, vacio\n";
    }
    else if (anterior == NULL) {
        primero = primero->siguiente;
        delete aux_borrar;
    }
}
