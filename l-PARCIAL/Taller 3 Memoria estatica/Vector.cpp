/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Memoria Estática
Fecha creación: 30/05/2021
Fecha modificación: 30/05/2021*/
#include "Vector.h"
Vector::Vector(int vec[10]){
	for(int i=0;i<10;i++){
		vect[i]=vec[i];
	}
}
void Vector::setVect(int vec[10]){
	for(int i=0;i<10;i++){
		vect[i]=vec[i];
	}
}
int* Vector::getVect(){
	return vect;
}
