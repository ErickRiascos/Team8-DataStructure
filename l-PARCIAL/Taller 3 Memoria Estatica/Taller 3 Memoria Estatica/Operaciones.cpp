/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Memoria Estática
Fecha creación: 30/05/2021
Fecha modificación: 30/05/2021*/
#include "Operaciones.h"
#include <stdlib.h>
Operaciones::Operaciones(Vector& vec){
	this->v=vec;
}
void Operaciones::encerar(){
	int vec[10];
	for(int i=0;i<10;i++){
		vec[i]=0;
	}
	this->v.setVect(vec);
}
void Operaciones::ingresar(){
	int vec[10];
	for(int i=0;i<10;i++){
		vec[i]=rand()%11;
	}
	this->v.setVect(vec);
}
float Operaciones::procesar(){
	float promedio=0.0;
	for(int i=0;i<10;i++){
		promedio+=v.getVect()[i];
	}
	return promedio/10;
}
void Operaciones::imprimir(){
	std::cout<<"\nVector=\{";
	for(int i=0;i<10;i++){
		std::cout<< v.getVect()[i]<<" ";
	}
	std::cout<<"\}";
}

Vector Operaciones::getVec()
{
	return v;
}
