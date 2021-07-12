#include "Cola.h"
#include <iostream>


/**
 * La función "colaVacia" otorga NULL a la cola entera para eliminar datos basura 
 */
bool Cola::colaVacia() {
    return (this->primero == NULL);
}

/**
 * La función "Cola" es el constructor del objeto
 */
Cola::Cola() {
    this->primero = NULL;
    this->ultimo = NULL;
}


/**
 * La función "ultimoNodo" otorga NULL a loa valores de la Cola
 */
Nodo* Cola::ultimoNodo() {
    Nodo* tmp = primero;
    while (tmp->siguiente != nullptr) {
        tmp = tmp->siguiente;
    }
    return tmp;
}

/**
 * La función "encolar" va asignando los valores a la Cola 
 */
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

/**
 * La función "mostrar" muestra los datos que se generaron en la cola 
 */
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

/**
 * La función "desencolar" va eliminando los valores a la Cola
 */
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

/**
 * La función "getPrimero" retorna el valor Primero de la cola 
 */
Nodo* Cola::getPrimero()
{
    return this->primero;
}

/**
 * La función "getTamanio" retorna el valor de tamaño de la cola
 */
int Cola::getTamanio()
{
    return this->tamanio;
}

/**
 * La función "genClientes" genera los clientes solicitados en la cola  
 */
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

/**
 * La función "destruirCola" hace el llamado a la funcion "desencolar" con el tamaño respectivo para eliminar a todos los clientes
 */
void Cola::destruirCola()
{
    int n=tamanio;
    for (int i= 0; i < n;i++) {
            desencolar();        
    }

}

/**
 * La función "recorrer" recorre toda la cola de clientes para relizar la creació, cambios o eliminaciones respectivas
 */
void Cola::recorrer(std::function<void(Cliente)>recorrido) {
    Nodo* tmp = primero;
    while (tmp != nullptr) {
        recorrido(tmp->usuario);
        tmp = tmp->siguiente;
    }
}
 
/**
 * La función "promedio" reliza el promedio de los clientes haciendo uso del tamaño de la cola 
 */
double Cola::promedio(std::function<double()>prom)
{
    return prom() / tamanio;
}


