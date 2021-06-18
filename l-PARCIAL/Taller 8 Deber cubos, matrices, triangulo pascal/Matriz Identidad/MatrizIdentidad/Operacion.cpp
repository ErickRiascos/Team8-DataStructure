/*Fecha creación: 03/05/2021
Fecha modificación: 17/06/2021 */
#include "Operacion.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Nombre:       Operacion::segmentar(int dim) 
// Propósito:    Implementacion de Operacion::segmentar
// Parametros:
// -  dim
// Return:int**
////////////////////////////////////////////////////////////////////////
int** Operacion::segmentar(int dim) {
    int** matriz, j;
    matriz = (int**)malloc(dim * sizeof(int*));
    for (j = 0; j < dim; j++) 
    {
        matriz[j] = (int*)malloc(dim * sizeof(int));
    }
    return matriz;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Operacion::encerar(int** matriz, int dim) 
// Propósito:    Implementacion de Operacion::encerar()
// Parametros:
// -  matriz
// -  dim
// Return:
////////////////////////////////////////////////////////////////////////
void Operacion::encerar(int** matriz, int dim)
{
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matriz + i) + j) = 0;
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Operacion::identidad(int** M, int n)
// Propósito:    Implementacion de Operacion::identidad()
// Parametros:
// -  M
// -  n
// Return:
////////////////////////////////////////////////////////////////////////
void Operacion::identidad(int** M, int n)
{
    double may; //variable para almacenar el mayor de la columna k
    int ind;    //indice del mayor-->indice de may
    double aux;
    double pivote;

    for (int k = 0; k < n; k++)
    { //recorrer columnas de la matriz reducida
        may = abs(M[k][k]);
        ind = k;
        //recorrer filas de la columna k para buscar el indice del mayor
        for (int l = k + 1; l < n; l++)
        {
            if (may < abs(M[l][k]))
            {
                may = abs(M[l][k]);
                ind = l;
            }
        }

        //cambiar filas
        if (k != ind)
        {
            for (int i = 0; i < n; i++)
            {
                aux = M[k][i];
                M[k][i] = M[ind][i];
                M[ind][i] = aux;
            }
        }
        if (M[k][k] == 0)
        {
            cout << "no tiene solucion" << endl;
            break;
        }
        else
        {

            for (int i = 0; i < n; i++)
            { //recorrer fila
                if (i != k)
                {
                    pivote = -M[i][k];
                    for (int j = k; j < n; j++)
                    { //recorrer elementos de una fila

                        M[i][j] = M[i][j] + pivote * M[k][j] / M[k][k];
                    }
                }
                else
                {
                    pivote = M[k][k];
                    for (int j = k; j < n; j++)
                    {
                        M[i][j] = M[i][j] / pivote;
                    }
                }
            }
        }
    }
}
////////////////////////////////////////////////////////////////////////
// Nombre:        Operacion::imprimir(int** matriz, int dim)
// Propósito:    Implementacion de Operacion::imprimir()
// Parametros:
// -  matriz
// -  dim
// Return:
////////////////////////////////////////////////////////////////////////
void Operacion::imprimir(int** matriz, int dim) {
    int i, j;
    for (i = 0; i < dim; i++) 
    {
        for (j = 0; j < dim; j++) 
        {
            printf(" ");
            printf("%d", *(*(matriz + i) + j));
            printf(" ");
        }
        printf("\n");
    }
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Operacion::Operacion()
// Propósito:    Implementacion de Operacion::Operacion()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
Operacion::Operacion()
{
}

  
