/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 18:51:48
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"
#include<iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::getMatriz()
// Purpose:    Implementation of Matriz::getMatriz()
// Return:     int[]
////////////////////////////////////////////////////////////////////////

/*int** Matriz::getMatriz()
{
   return matriz;
}*/

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setMatriz(int[]* newMatriz)
// Purpose:    Implementation of Matriz::setMatriz()
// Parameters:
// - newMatriz
// Return:     void
////////////////////////////////////////////////////////////////////////

/*void Matriz::setMatriz(int** newMatriz)
{
   matriz = newMatriz;
}*/

void Matriz::llenarMatriz(){
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++){
			std::cout << "Ingrese numeros [" << i + 1 <<"]"<< "["<<j+1<<"]: ";
			std::cin>>matriz[i][j];
		}
	}
}

void Matriz::imprimirMatriz(){
	for (int i = 0;i < 10;i++) {
		std::cout <<std::endl;
		for (int j = 0;j < 10;j++) {
			std::cout << matriz[i][j]<<"\t";
		}
	}
}

void Matriz::encerar()
{
	for (int i = 0;i < 10;i++) {
		for (int j = 0; j < 10;j++) {
			matriz[i][j] = 0;
		}
	}
}


////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz(int _filas, int _columnas)
// Purpose:    Implementation of Matriz::Matriz()
// Parameters:
// - _matriz
// Return:     
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
// Name:       Matriz::~Matriz()
// Purpose:    Implementation of Matriz::~Matriz()
// Return:     
////////////////////////////////////////////////////////////////////////

