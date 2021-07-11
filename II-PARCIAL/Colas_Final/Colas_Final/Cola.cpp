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
    Nodo* tmp=primero;
    primero = primero->siguiente;
    delete tmp;
    }
    else {
        std::cout << "Cola vacia\n";
    }
    tamanio--;
}

Nodo* Cola::getPrimero()
{
    return this->primero;
}

int Cola::getTamanio()
{
    return this->tamanio;
}

void Cola::genClientes(int n,std::function<Cliente()> cola)
{
    if (colaVacia()) {
        Cliente aux = cola();
        int ts = aux.getTiempoSalida();
        int tl = aux.getTiempollegada();
        int j = 2;
        for (int i = 0; i < n - 1; i++)
        {
            Cliente c(j++, tl, ts);
            encolar(c);
            ts = c.getTiempoSalida();
            tl = c.getTiempollegada();
        }
        std::cout << "Se genero la cola de clientes con exito...\n\n";
    }
    else {
        std::cout << "\nCola llena, porfavor debe eliminar los anteriores datos...\n";
    }
}


void Cola::destruirCola()
{
    int n=tamanio;
    for (int i= 0; i < n;i++) {
            desencolar();        
    }

}

void Cola::recorrer(std::function<void(Cliente)>recorrido) {
    Nodo* tmp = primero;
    while (tmp != nullptr) {
        recorrido(tmp->usuario);
        tmp = tmp->siguiente;
    }
}
 
double Cola::promedio(std::function<double()>prom)
{
    return prom() / tamanio;
}


