/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Matriz identidad
Fecha creación: 03/05/2021
Fecha modificación: 17/06/2021 */
#pragma warning (disable:4996)
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Matriz.h"
#include "Operacion.h"
#include <stdlib.h>;
using namespace std;
char* ingresar(const char* msj)
{
    char* datos = (char*)calloc(10, sizeof(char));
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
int main()
{
    Matriz matrix;
    int dim;
    int** mat;
    Operacion op;
    printf("\n\t ///////////////////LA MATRIZ IDENTIDAD /////////////////////\n");
    dim = atoi(ingresar("\nIngrese la dimension :"));
    matrix.setMatriz(op.segmentar(dim));
    mat = matrix.getMatriz();
    op.encerar(mat, dim);
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
           mat[i][j] = atoi(ingresar("\nIngrese numero fila-columna : "));

        }
    }
    cout << "\n" << endl;
    op.identidad(mat, dim);
    op.imprimir(mat, dim);
    
    return 0;
	
}
