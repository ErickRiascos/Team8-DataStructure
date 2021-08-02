#include "Lista.h"
#include <iostream>
template <typename dato>
bool Lista<dato>::listaVacia(){
    return (this->primero==NULL);
}
template <typename dato>
Lista<dato>::Lista(){
    this->primero = NULL;
    this->actual = NULL;
}
template <typename dato>
void Lista<dato>::enlistar(dato val) {
    Nodo<dato>* nuevo = new Nodo<dato>(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }else {
        this->actual->setSiguiente(nuevo);
    }
    this->actual = nuevo;
}
template <typename dato>
void Lista<dato>::enlistarTop(dato val) {
    Nodo<dato>* nuevo = new Nodo<dato>(val);
    if (listaVacia()) {
        this->primero = nuevo;
    }
    else {
        nuevo->setSiguiente(primero);
    }
    this->primero = nuevo;
}
template <typename dato>
void Lista<dato>::mostrar(){
    Nodo<dato>* tmp=this->primero;
    while (tmp){
        std::cout << tmp->getValor()<<"->";
        tmp = tmp->getSiguiente();
    }
    std::cout << "NULL\n";
}
template <typename dato>
void Lista<dato>::eliminarTop() {
    Nodo<dato>* aux_borrar;
    aux_borrar = primero;
    if (aux_borrar == NULL) {
        std::cout << "\nLista vacia";
    }
    else{
        primero = primero->getSiguiente();
        delete aux_borrar;
    }
}
template <typename dato>
void Lista<dato>::desenlistar() {
    if (primero == actual){
        delete actual;
    }
    else {
        Nodo<dato>* temp = this->primero;
        while (temp->getSiguiente()!=nullptr) {
            temp = temp->getSiguiente();
        }
        actual = temp;
        temp = actual->getSiguiente();
        actual->setSiguiente(nullptr);
        delete temp;
    }
}

template<typename dato>
void Lista<dato>::generarLista(int n)
{
    for (size_t i = 0; i < n; i++)
        enlistar(rand()%1000+1);
    this->tamanio = n;
}

template<typename dato>
Nodo<dato>* Lista<dato>::getTop()
{
    return primero;
}

template<typename dato>
int Lista<dato>::getTamanio()
{
    return this->tamanio;
}

template<typename dato>
Nodo<dato>* Lista<dato>::getPos(int a)
{
    Nodo<dato>* tmp = primero;
    int i = 0;
    while (i!=a) {
        tmp = tmp->getSiguiente();
        i++;
    }
    return tmp;
}

template<typename dato>
void Lista<dato>::setPos(dato a,int b)
{
    Nodo<dato>* tmp = primero;
    int i = 0;
    while (i != b) {
        tmp = tmp->getSiguiente();
        i++;
    }
    tmp->setValor(a);
}

template<typename dato>
dato Lista<dato>::getMDato()
{
    Nodo<dato> * tmp= primero;
    dato aux = tmp->getValor();
    while (tmp)
    {
        if (aux<tmp->getValor()) {
            aux = tmp->getValor();
        }
        tmp = tmp->getSiguiente();
    }
    return aux;
}

//
//void aleatorios(std::function<void(int, int)>aleatorios) {
//    int min, max;
//    std::cout << "Ingrese el valor 1: ";
//    std::cin >> min;
//    std::cout << "Ingrese el valor 2: ";
//    std::cin >> max;
//    for (int i = min; i < max; i++) {
//        std::cout << 1 + (rand() % 1000) << std::endl;
//    }
//
//}