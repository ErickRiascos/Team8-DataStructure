/***********************************************************************
 * Module:  Operaciones.cpp
 * Author:  Johan
 * Modified: jueves, 27 de mayo de 2021 22:46:43
 * Purpose: Implementation of the class Operaciones
 ***********************************************************************/
#include "Operaciones.h"
 ////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::Operaciones(Datos<float> new_data)
 // Propósito:    Implementacion de Operaciones::Operaciones()
 // Parametros:
 // - new_data
 // Return:     
 ////////////////////////////////////////////////////////////////////////
Operaciones::Operaciones(Datos<float> new_data){
	this->data_United = new_data;
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::operator +()
 // Propósito:    Implementacion de Operaciones::operator +()
 // Parametros:
 // Return:  float   
 ////////////////////////////////////////////////////////////////////////
float Operaciones::operator +() {
	return float(this->data_United.getDatoA())+float(this->data_United.getDatoB());
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::operator +(float data_a)
 // Propósito:    Implementacion de Operaciones::operator +()
 // Parametros:
 // - data_a
 // Return: float   
 ////////////////////////////////////////////////////////////////////////
float Operaciones::operator +(float data_a) {
	return float(this->data_United.getDatoA()) + float(this->data_United.getDatoB()+data_a);
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::operator -()
 // Propósito:    Implementacion de Operaciones::operator -()
 // Parametros:
 // Return:    float 
 ////////////////////////////////////////////////////////////////////////
float Operaciones::operator -(){
	return float(this->data_United.getDatoA())-float(this->data_United.getDatoB());
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::operator -(float data_a)
 // Propósito:    Implementacion de Operaciones::operator -()
 // Parametros:
 // - data_a
 // Return:     float
 ////////////////////////////////////////////////////////////////////////
float Operaciones::operator -(float data_a) {
	return float(this->data_United.getDatoA()) - float(this->data_United.getDatoB()-data_a);
}
////////////////////////////////////////////////////////////////////////
 // Nombre:       Operaciones::operator /(float data_a)
 // Propósito:    Implementacion de Operaciones::operator /()
 // Parametros:
 // - data_a
 // Return:     float
 ////////////////////////////////////////////////////////////////////////
float Operaciones::operator /(float data_a) {
	if (data_a == 0) {
		return 0;
	}
	else {	
		return float(this->data_United.getDatoB()) / data_a;
	}
}



		