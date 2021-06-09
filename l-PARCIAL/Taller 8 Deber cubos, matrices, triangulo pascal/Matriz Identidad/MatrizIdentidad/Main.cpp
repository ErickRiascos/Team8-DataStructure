#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Matriz.h"
#include "Operacion.h"
#include <stdlib.h>;
using namespace std;

int main()
{
    Matriz matrix;
    int dim;
    int** mat;
    Operacion op;
    printf("\n\t ///////////////////LA MATRIZ IDENTIDAD /////////////////////\n");
    printf("\nIngrese la dimension :");
    scanf_s("%d", &dim);
    matrix.setMatriz(op.segmentar(dim));
    mat = matrix.getMatriz();
    op.encerar(mat, dim);
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("\nIngrese el numero [%d][%d] matriz: ", i+1,j+1);
            scanf_s("%d", &mat[i][j]);

        }
    }
    cout << "\n" << endl;
    op.identidad(mat, dim);
    op.imprimir(mat, dim);
    
    return 0;
	
}