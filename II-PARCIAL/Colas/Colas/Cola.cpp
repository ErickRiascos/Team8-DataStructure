#include "Cola.h"
#include <iostream>

bool Cola::colaVacia() {
    return (this->primero == NULL);
}


Cola::Cola() {
    this->primero = NULL;
    this->ultimo = NULL;
}

Nodo* Cola::ultimoNodo() {
    Nodo* tmp = primero;
    while (tmp->siguiente != nullptr) {
        tmp = tmp->siguiente;
    }
    return tmp;
}

void Cola::encolar(Cliente val)
{
    tamanio++;
    Nodo* nodo = new Nodo(val);
    if (primero == nullptr) {
        this->primero = nodo;
        ultimo = primero;
        return;
    }
    else {
        Nodo* aux = ultimoNodo();
        aux->siguiente=nodo;
        ultimo = aux;
    }
}


void Cola::mostrar()
{
    if (primero != nullptr) {
        Nodo* tmp = this->primero;
        std::cout << "N\tT.L\tT.E\tT.N.C\tT.Sr\tT.S\tT.E.L"<<std::endl;
        while (tmp) {
            tmp->usuario.toString();
            std::cout << std::endl;
            tmp = tmp->siguiente;
        }
    }
    else {
        std::cout << "No hay datos a mostrar\n";
    }
    
}

void Cola::desencolar(){
    if (primero!=nullptr) {
    tamanio--;
    Nodo* tmp=primero;
    primero = primero->siguiente;
    delete tmp;
    }
    else {
        std::cout << "Cola vacia\n";
    }
}

Nodo* Cola::getPrimero()
{
    return this->primero;
}

int Cola::getTamanio()
{
    return this->tamanio;
}

void Cola::generarClientes(int n)
{
    Cliente primero(1, 0, 0);
    int ts = primero.getTiempoSalida();
    int tl = primero.getTiempollegada();
    int j = 2;
    encolar(primero);
    for (int i = 0; i < n-1; i++)
    {
        Cliente c(j++, tl, ts);
        encolar(c);
        ts = c.getTiempoSalida();
        tl = c.getTiempollegada();

    }
}

void Cola::recorrer(std::function<void(Cliente)>recorrido) {
    Nodo* tmp = primero;
    int indice = 0;
    while (tmp != nullptr) {
        recorrido(tmp->usuario);
        tmp = tmp->siguiente;
    }
}
