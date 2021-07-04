#include "Lista.h"
#include <iostream>
bool Lista::listaVacia(){
    return (this->primero==NULL);
}

Lista::Lista(){
    this->primero = NULL;
    this->actual = NULL;
}

void Lista::insertarCabeza(char val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }else {
        this->actual->siguiente = nuevo;
    }
    this->actual = nuevo;
    tamanio++;
}

void Lista::insertarCola(char val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        nuevo->siguiente = primero;
    }
    this->primero = nuevo;
    tamanio++;
}

void Lista::mostrar(){
    Nodo* tmp=this->primero;
    while (tmp){
        std::cout << tmp->valor;
        tmp = tmp->siguiente;
    }
}

void Lista::eliminar_Cabeza() {
    Nodo* aux_borrar;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
        std::cout << "\nNo se apunta a ningun elemento, Lista vacia";
    }
    else{
        primero = primero->siguiente;
        delete aux_borrar;
    }
    tamanio--;
}

void Lista::eliminar_Cola() {
    if (primero == actual){
        delete actual;
    }
    else {
        Nodo* temp = this->primero;
        while (temp->siguiente != actual) {
            temp = temp->siguiente;
        }
        actual = temp;
        temp = actual->siguiente;
        actual->siguiente = NULL;
        delete temp;
    }
    tamanio--;
}

Lista Lista::voltear(){
    
    Lista aux;
    int a = tamanio;
    Nodo* tmp = primero;
    for (int i = 0;i < a;i++) {
        char a = ultimoNodo()->getValor();
        aux.insertarCabeza(a);
        eliminar_Cola();
    }
    primero = tmp;
    return aux;
}

Nodo* Lista::ultimoNodo()
{
    Nodo* tmp = primero;    
    while (tmp->siguiente!=nullptr) {
        tmp = tmp->siguiente;
    }
    return tmp;
}

Nodo* Lista::getPrimero()
{
    return primero;
}

void Lista::copiar(Lista a)
{
    Nodo* tmp = a.primero;
    while (tmp) {
        insertarCabeza(tmp->valor);
        tmp = tmp->siguiente;
    }
}


