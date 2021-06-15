#include "Cedula.h"
#include <stdlib.h>
#include <conio.h>
void Cedula::ingresarCedula(){
	this->numeros=(int*)calloc(10,sizeof(int));
	for(int i=0;i<10;i++){
		*(numeros+i)=getch()-48;
		std::cout<<*(numeros+i);
	}
}

void Cedula::validarCedula(){
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
	if((v-a)==*(numeros+9))
		std::cout<<"\nCedula VERIFICADA";
	else
		std::cout<<"\nCedula INCORRECTA";
}


