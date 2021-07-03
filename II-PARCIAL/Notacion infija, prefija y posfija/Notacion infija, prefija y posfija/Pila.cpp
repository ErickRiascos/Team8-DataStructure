#include "Pila.h"
#include <iostream>
bool Pila::pilaVacia(){
    return (this->primero==NULL);
}

Nodo* Pila::getUltimo()
{
    return actual;
}

Nodo* Pila::getPrimero()
{
    return primero;
}

Pila::Pila(){
    this->primero = NULL;
    this->actual = NULL;
}

void Pila::apilar(char val) {
    Nodo* nuevo = new Nodo(val);
    if (pilaVacia()) {
        this->primero = nuevo;
        this->actual = primero;
    }
    else {
        nuevo->siguiente = primero;
    }
    this->primero = nuevo;
}

void Pila::mostrar(){
    Nodo* tmp=this->primero;
    while (tmp){
        std::cout << tmp->valor;
        tmp = tmp->siguiente;
    }
}

char Pila::desapilar() {
    Nodo* aux_borrar;
    char a;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
    }
    else{
        primero = primero->siguiente;
        a= aux_borrar->getValor();
        delete aux_borrar;
        return a;
    }
}

