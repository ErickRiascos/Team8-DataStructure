#pragma warning(disable : 4996)
#include "Cedula.h"
#include <stdlib.h>
#include <conio.h>
char* validarDatos(const char* msj)
{
	char* datos = (char*)calloc(30, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
/*Ingresa la cedula y la transforma a valor entero*/
void Cedula::ingresarCedula(char* a){
	this->numeros=(int*)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		*(numeros+i)=*(a+i)-48;
	}
}
/*Imprime los datos de la cedula como enteros*/
void Cedula::mostrarCedula()
{
	for (int i = 0;i < 10;i++) 
		  std::cout<< * (numeros + i);
}

/*Valida que la cedula sea correcta */
void Cedula::encriptarCedula(int a,int b){
	int* aux = (int*)calloc(10, sizeof(int));
	*(numeros + a)=*(numeros+a) + b;
	if (*(numeros+a)>9){
		*(aux + a) = *(numeros + a)%9;
	}
	else {
		*(aux + a) = *(numeros + a);
	}
	*(numeros + a) = *(aux + a);
	a++;
	if (a < 10)
		encriptarCedula(a,b);	
}
/*Valida que la cedula sea correcta
@return bool*/
bool Cedula::validarCedula() {

	int* aux = (int*)calloc(10, sizeof(int));
	int a = 0, v = 0,z=0;
	for (int i = 0;i < 10;i++) {
		if (i % 2 != 0) {
			*(aux + i) = *(numeros + i);
		}
		else {
			if (*(numeros + i) * 2 < 10)
				*(aux + i) = *(numeros + i) * 2;
			else
				*(aux + i) = *(numeros + i) * 2 - 9;
		}
	}
	for (int i = 0;i < 9;i++) {
		a += *(aux + i);
	}
	v = a;
	while (v % 10 != 0)
		v++;
	if ((v - a) == *(numeros + 9))
		return true;
	else
		return false;
}

char* Cedula::toString()
{
	char* a = (char*)calloc(15, sizeof(char));
	for (size_t i = 0; i <10; i++)
	{
		*(a + i) = *(numeros + i) + 48;
	}
	return a;
}



