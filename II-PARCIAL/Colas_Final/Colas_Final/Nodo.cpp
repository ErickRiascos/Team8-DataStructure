#include "Nodo.h"
#include<iostream>
Nodo::Nodo(Cliente val){
	this->usuario = val;
	this->siguiente = NULL;
}
