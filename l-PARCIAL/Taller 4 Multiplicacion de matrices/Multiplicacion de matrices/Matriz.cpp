#include "Matriz.h"
#include<iostream>

 ////////////////////////////////////////////////////////////////////////
// Name:       Matriz::llenarMatriz()
// Purpose:    Implementation de Matriz::llenarMatriz()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::llenarMatriz(){
	for (int i = 0;i < 10;i++) {
		for (int j = 0;j < 10;j++){
			std::cout << "Ingrese numeros [" << i + 1 <<"]"<< "["<<j+1<<"]: ";
			std::cin>>matriz[i][j];
		}
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimirMatriz()
// Purpose:    Implementation de Matriz::imprimirMatriz()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::imprimirMatriz(){
	for (int i = 0;i < 10;i++) {
		std::cout <<std::endl;
		for (int j = 0;j < 10;j++) {
			std::cout << matriz[i][j]<<"\t";
		}
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::encerar()
// Purpose:    Implementation de Matriz::encerar()
// Parametros:
// Return:    
//////////////////////////////////////////////////////////////////////// 
void Matriz::encerar()
{
	for (int i = 0;i < 10;i++) {
		for (int j = 0; j < 10;j++) {
			matriz[i][j] = 0;
		}
	}
}




