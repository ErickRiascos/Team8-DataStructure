#include "Tablero.h"
#include <stdlib.h>
#include <iostream>
Tablero::Tablero(int n)
{
	reinas = (int*)calloc(n * 4, sizeof(int));
	dimension = n;
	for (int i = 0;i < dimension;i++) {
		*(reinas + i) = n+1;
	}
}

bool Tablero::validacion(int etapa)
{
	imprimir();
	printf("\n");
	for (int i = 0; i < dimension; i++){
		if (i!=etapa&&(*(reinas+i)==*(reinas+etapa)||abs(*(reinas + i)-*(reinas + etapa))==abs(i-etapa))) {
			printf("%d-%d",i,etapa);
			return false;
		}
	}
	return true;
}

bool Tablero::posReinas(int etapa)
{
	if (etapa>dimension)
		return false;
	exito = false;
	*(reinas + etapa) = 0;
	do {
		*(reinas + etapa) = *(reinas + etapa) + 1;
		if (validacion(etapa)) {
			if (etapa <= dimension) {
				exito = posReinas(etapa+1);
			}
			else {
				exito = true;
			}
		}
	} while (exito);
	return exito;
}

void Tablero::imprimir(){
	for (int i = 0; i < dimension; i++){
		std::cout << *(reinas + i) << " ";
	}
}
