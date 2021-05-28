/***********************************************************************
 * Module:  Operaciones.cpp
 * Author:  Johan
 * Modified: jueves, 27 de mayo de 2021 22:46:43
 * Purpose: Implementation of the class Operaciones
 ***********************************************************************/
#include "Operaciones.h"
Operaciones::Operaciones(Datos<float> new_data){
	this->data_United = new_data;
}
float Operaciones::operator +() {
	return float(this->data_United.getDatoA())+float(this->data_United.getDatoB());
}
float Operaciones::operator +(float data_a) {
	return float(this->data_United.getDatoA()) + float(this->data_United.getDatoB()+data_a);
}
float Operaciones::operator -(){
	return float(this->data_United.getDatoA())-float(this->data_United.getDatoB());
}
float Operaciones::operator -(float data_a) {
	return float(this->data_United.getDatoA()) - float(this->data_United.getDatoB()-data_a);
}
float Operaciones::operator /(float data_a) {
	if (data_a == 0) {
		return 0;
	}
	else {	
		return float(this->data_United.getDatoB()) / data_a;
	}
}



		