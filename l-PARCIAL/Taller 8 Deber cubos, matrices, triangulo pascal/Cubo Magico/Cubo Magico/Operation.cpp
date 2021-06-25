#include "Operation.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Operation::cubo_magico(Matriz matrix, int _long)
// Purpose:    Implementation de Operation::cubo_magico()
// Parametros:
// - matrix
// - _long
// Return:    
////////////////////////////////////////////////////////////////////////
void Operation::cubo_magico(Matriz matriz, int medida)
{
    int aux = medida * medida;
    int column = medida / 2;
    int fila = 0;

    for (int i = 1; i <= aux; i++) {
        if (*(*(matriz.get_matriz() + fila) + column) != 0) {
            fila = fila + 2;
            if (fila >= medida) {
                fila = fila - medida;
            }
            column = column - 1;
            if (column == -1) {
                column = medida - 1;
            }
        }
        *(*(matriz.get_matriz() + fila) + column) = i;
        fila = fila - 1;
        if (fila == -1) {
            fila = medida - 1;
        }
        column = column + 1;
        if (column == medida) {
            column = 0;
        }
    }
}
////////////////////////////////////////////////////////////////////////
// Name:       Operation::segmentar(int dim)
// Purpose:    Implementation de Operation::segmentar()
// Parametros:
// - dim
// Return:    matrix.get_matriz();
////////////////////////////////////////////////////////////////////////
int** Operation::segmentar(int dim) {
    Matriz matrix;
    int j;
    matrix.set_matriz((int**)malloc(dim * sizeof(int*)));
    for (j = 0; j < dim; j++) {
        *(matrix.get_matriz() + j) = (int*)malloc(dim * sizeof(int));
    }
    return matrix.get_matriz();
}
////////////////////////////////////////////////////////////////////////
// Name:       Operation::encerar(Matriz matriz, int dim)
// Purpose:    Implementation de Operation::encerar()
// Parametros:
// - matriz
// - dim
// Return: 
////////////////////////////////////////////////////////////////////////
void Operation::encerar(Matriz matriz, int dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matriz.get_matriz() + i) + j) = 0;
}
////////////////////////////////////////////////////////////////////////
// Name:       Operation::ingresar(Matriz matriz, int dim)
// Purpose:    Implementation de Operation::ingresar()
// Parametros:
// - matriz
// - dim
// Return:    
////////////////////////////////////////////////////////////////////////
void Operation::ingresar(Matriz matriz, int dim) {
    int i, j;
    cout << "Ingrese los datos:" << endl;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] :";
            cin >> (*(*(matriz.get_matriz() + i) + j));
        }
}
////////////////////////////////////////////////////////////////////////
// Name:       Operation::imprimir(Matriz matriz, int dim)
// Purpose:    Implementation de Operation::imprimir()
// Parametros:
// - matriz
// - dim
// Return:    
////////////////////////////////////////////////////////////////////////
void Operation::imprimir(Matriz matriz, int dim) {
    int i, j;
    printf("\n");
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", *(*(matriz.get_matriz() + i) + j));
            cout << "\t";
        }
        printf("\n");
    }
}
