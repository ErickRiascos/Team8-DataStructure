/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
#include "Lista.h"
#include <iostream>
bool Lista::listaVacia(){
    return (this->primero==NULL);
}

Lista::Lista(){
    this->primero = NULL;
    this->actual = NULL;
}

void Lista::insertarCabeza(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }else {
        this->actual->siguiente = nuevo;
    }
    this->actual = nuevo;
}

void Lista::insertarCola(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        nuevo->siguiente = primero;
    }
    this->primero = nuevo;
}

void Lista::mostrar(){
    Nodo* tmp=this->primero;
    while (tmp){
        std::cout << tmp->valor<<"->";
        tmp = tmp->siguiente;
    }
    std::cout << "NULL"<<std::endl;
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
}


 void Lista::eliminar_Cola() {
        if(primero == actual){
            delete actual;
        }
        else {
            Nodo* temp=this->primero;
            while(temp->siguiente != actual) {
                temp = temp->siguiente;
            }
            actual = temp;
        temp = actual->siguiente;
        actual->siguiente = NULL;
            delete temp;
        }
}
