/***********************************************************************
 * Module:  Datos.cpp
 * Author:  Erick
 * Modified: jueves, 27 de mayo de 2021 20:10:15
 * Purpose: Implementation of the class Datos
 ***********************************************************************/
 #include "Datos.h";
template <typename Data>
Data Datos<Data>::getDatoA(void)
{
   return dato1;
}
template <typename Data>
void Datos<Data>::setDatoA(Data newDatoA)
{
   dato1 = newDatoA;
}
template <typename Data>
Data Datos<Data>::getDatoB(void)
{
   return dato2;
}
template <typename Data>
void Datos<Data>::setDatoB(Data newDatoB)
{
   dato2 = newDatoB;
}
template <typename Data>
Datos<Data>::Datos(Data dato_Nuevo_1,Data dato_Nuevo_2)
{
	this->dato1=dato_Nuevo_1;
	this->dato2= dato_Nuevo_2;
}
template <typename Data>
Datos<Data>::~Datos()
{
	
}
template class Datos<int>;
template class Datos<double>;
template class Datos<float>;