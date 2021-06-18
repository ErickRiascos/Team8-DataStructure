/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
#include "Lista.h"
#include <iostream>
bool Lista::listaVacia(){
    return (this->primero==NULL);
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::Lista()
// Propósito:    Implementacion de Lista::Lista()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
Lista::Lista(){
    this->primero = NULL;
    this->actual = NULL;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::insertarCabeza(int val)
// Propósito:    Implementacion de Lista::insertarCabeza()
// Parametros:
// -val
// Return:
////////////////////////////////////////////////////////////////////////
void Lista::insertarCabeza(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }else {
        this->actual->siguiente = nuevo;
    }
    this->actual = nuevo;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::insertarCola(int val)
// Propósito:    Implementacion de Lista::insertarCola()
// Parametros:
// Return:
// -val
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::mostrar()
// Propósito:    Implementacion de Lista::mostrar()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
void Lista::mostrar(){
    Nodo* tmp=this->primero;
    while (tmp){
        std::cout << tmp->valor<<"->";
        tmp = tmp->siguiente;
    }
    std::cout << "NULL"<<std::endl;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::eliminar_Cabeza()
// Propósito:    Implementacion de Lista::eliminar_Cabeza()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Lista::eliminar_Cola()
// Propósito:    Implementacion de Lista::eliminar_Cola()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////

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
