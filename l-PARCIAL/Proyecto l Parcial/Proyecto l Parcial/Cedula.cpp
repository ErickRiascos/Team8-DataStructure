/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Proyecto
Fecha creación: 15/06/2021
Fecha modificación: 26/06/2021*/
#include "Cedula.h"
#include <stdlib.h>
#include <conio.h>
////////////////////////////////////////////////////////////////////////
// Name:       ingresarCedula(char* a)
// Purpose:    Implementation de ingresarCedula()
// Parametros:
// - a
// Return:  
////////////////////////////////////////////////////////////////////////
/*Ingresa la cedula y la transforma a valor entero*/
void Cedula::ingresarCedula(char* a){
	this->numeros=(int*)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		*(numeros+i)=*(a+i)-48;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       mostrarCedula()
// Purpose:    Implementation de mostrarCedula()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
/*Imprime los datos de la cedula como enteros*/
void Cedula::mostrarCedula()
{
	for (int i = 0;i < 10;i++) 
		  std::cout<< * (numeros + i);
}
////////////////////////////////////////////////////////////////////////
// Name:       validarCedula()
// Purpose:    Implementation de validarCedula()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////

/*Valida que la cedula sea correcta 
@return bool*/
bool Cedula::validarCedula(){

	int* aux=(int*)calloc(10,sizeof(int));
	int a=0, v=0;
	for(int i=0;i<10;i++){
		if(i%2!=0){
			*(aux+i)=*(numeros+i);	
		}
		else{
			if(*(numeros+i)*2<10)
				*(aux+i)=*(numeros+i)*2;
			else
				*(aux+i)=*(numeros+i)*2-9;	
		}	
	}
	for(int i=0;i<9;i++){
		a+=*(aux+i);
	}	
	v=a;
	while(v%10!=0)
		v++;
	if ((v - a) == *(numeros + 9))
		return true;
	else
		return false;
}

////////////////////////////////////////////////////////////////////////
// Name:       toString()
// Purpose:    Implementation de toString()
// Parametros:
// Return:  
////////////////////////////////////////////////////////////////////////
char* Cedula::toString()
{
	char* a = (char*)calloc(15, sizeof(char));
	for (size_t i = 0; i < 10; i++)
	{
		*(a + i) = *(numeros + i) + 48;
	}
	return a;
}

