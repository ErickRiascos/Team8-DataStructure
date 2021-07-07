/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
#include "Nodo.h"
#include<iostream>
Nodo::Nodo(Cliente val){
	this->usuario = val;
	this->siguiente = NULL;
}
