#include "Tablero.h"
#include <stdlib.h>
#include <iostream>
Tablero::Tablero(int n){
	reinas = (int*)malloc(n * 4);
	dimension = n;
	exito = true;
	solucion = false;
	soluciones = 0;
}

bool Tablero::validacion(int etapa){
	for (int i = 0; i < etapa; i++){
		if (*(reinas + i) == *(reinas + etapa) || abs(*(reinas + i) - *(reinas + etapa)) == abs(i - etapa))
			return false;
	}
	return true;
}

bool Tablero::posReinas(int etapa)
{
	if (etapa > dimension)
		return false;
	*(reinas + etapa) = 0;
	do {
		if (validacion(etapa)) {
			if (etapa != dimension-1)
				exito = posReinas(etapa + 1);
			else {
				exito = false;
			}			
		}
		if (validacion(dimension - 1) && etapa == dimension - 1) {
			soluciones++;
			printf("Solucion %d: ",soluciones);
			imprimir();
		}
		if (*(reinas + etapa) == dimension - 1) {
			break;
		}
		*(reinas + etapa) = *(reinas + etapa) + 1;
	} while (1);		
	return exito;
}

void Tablero::imprimir() {
	printf("\n\n");
	for (int y = 0;y < dimension;y++) {
		for (int x = 0; x < dimension; x++)
		{
			if (y == *(reinas + x)) {
				printf("Q ");
			}
			else {
				printf("* ");
			}
		}
		printf("\n");
	}
}

int Tablero::getSoluciones()
{
	return soluciones;
}
