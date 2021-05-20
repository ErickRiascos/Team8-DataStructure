#include "Operaciones.h"
#include "stdio.h"
template <typename tipoDato>
Operaciones<tipoDato>::Operaciones(tipoDato _valor1, tipoDato _valor2){
	valor1=_valor1;
	valor2=_valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor1(){
	return valor1;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor2(){
	return valor2;
}

template <typename tipoDato>
void Operaciones<tipoDato>::setValor1(tipoDato a){
	valor1=a;
}

template <typename tipoDato>
void Operaciones<tipoDato>::setValor2(tipoDato b){
	valor2=b;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta(){
	return valor1-valor2;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division(){
	if(valor2==0){
		printf("No se puede dividir!\n");
	}else{
		return valor1/valor2;
	}
}

