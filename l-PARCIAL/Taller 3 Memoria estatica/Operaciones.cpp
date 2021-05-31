/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Memoria Est�tica
Fecha creaci�n: 30/05/2021
Fecha modificaci�n: 30/05/2021*/
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
/*float Operaciones::procesar(int vec[10]){
	float promedio=0.0;
	for(int i=0;i<10;i++){
		promedio+=vec[i];
	}
	return promedio/10;
}*/
void Operaciones::imprimir(){
	int* v1 = v.getVect();
	std::cout<<"\nVector=\{";
	for(int i=0;i<10;i++){
		std::cout<<v1[i]<<" ";
	}
	std::cout<<"\}";
}
