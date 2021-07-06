#include "Pila.h"
#include <iostream>
template <typename dato>
bool Pila<dato>::pilaVacia(){
    return (this->primero==NULL);
}
template <typename dato>
dato Pila<dato>::top(){
    return primero->getValor();
}
template <typename dato>
Nodo<dato>* Pila<dato>::getPrimero(){
    return primero;
}
template <typename dato>
Pila<dato>::Pila(){
    this->primero = NULL;
    this->actual = NULL;
}
template <typename dato>
void Pila<dato>::push(dato val) {
    Nodo<dato>* nuevo = new Nodo<dato>(val);
    if (pilaVacia()) {
        this->primero = nuevo;
        this->actual = primero;
    }
    else {
        nuevo->setSiguiente(primero);
    }
    this->primero = nuevo;
}
template <typename dato>
void Pila<dato>::mostrar(){
    Nodo<dato>* tmp=this->primero;
    while (tmp){
        std::cout << tmp->getValor();
        tmp = tmp->getSiguiente();
    }
}
template <typename dato>
void Pila<dato>::pop() {
    Nodo<dato>* aux_borrar;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
    }
    else{
        primero = primero->getSiguiente();
        delete aux_borrar;
    }
}

