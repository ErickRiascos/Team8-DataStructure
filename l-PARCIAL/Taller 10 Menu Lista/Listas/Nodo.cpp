/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
#include "Nodo.h"
#include<iostream>
Nodo::Nodo(int val){
	this->valor = val;
	this->siguiente = NULL;
}
