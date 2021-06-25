#pragma once
#include "Matriz.h"
#include <exception>
#include <iostream>
class MatrizIdentidad
{

public:

    template <typename T>
    static inline void gauss_jordan(Matriz<T>&);
    template <typename T>
    static void imprimir(Matriz<T> matrix);
};

////////////////////////////////////////////////////////////////////////
// Name:       MatrizIdentidad::gauss_jordan(Matriz<T>& matriz2)
// Purpose:    Implementation de MatrizIdentidad::gauss_jordan(Matriz<T>& matriz2)
// Parametros:
// - T
// - matriz2
// Return:    
////////////////////////////////////////////////////////////////////////
template <typename T>
static void inline MatrizIdentidad::gauss_jordan(Matriz<T>& matriz2)
{
    T** matriz = matriz2.getMatriz();
    int n = matriz2.getTam();
    T lim;   //variable para almacenar el mayor de la columna k
    int ind; //indice del mayor-->indice de may
    T aux;
    T pivote;

    for (int k = 0; k < n; k++)
    { //recorrer columnas de la matriz reducida
        lim = abs(*(*(matriz + k) + k));
        ind = k;
        //recorrer filas de la columna k para buscar el indice del mayor
        for (int l = k + 1; l < n; l++)
        {
            if (lim < abs(*(*(matriz + l) + k)))
            {
                lim = abs(*(*(matriz + l) + k));
                ind = l;
            }
        }

        //cambiar filas
        if (k != ind)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    std::cout << "[" << *(*(matriz + i) + j) << "]";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
            for (int i = 0; i < n; i++)
            {
                aux = *(*(matriz + k) + i);
                *(*(matriz + k) + i) = *(*(matriz + ind) + i);
                *(*(matriz + ind) + i) = aux;
            }
        }
        if (*(*(matriz + k) + k) == 0)
        {
            std::cout << "no tiene solucion" << std::endl;
            break;
        }
        else
        {

            for (int i = 0; i < n; i++)
            { //recorrer fila
                if (i != k)
                {
                    pivote = -*(*(matriz + i) + k);
                    for (int j = k; j < n; j++)
                    { //recorrer elementos de una fila

                        *(*(matriz + i) + j) = *(*(matriz + i) + j) + pivote * *(*(matriz + k) + j) / *(*(matriz + k) + k);
                    }
                }
                else
                {
                    pivote = *(*(matriz + k) + k);
                    for (int j = k; j < n; j++)
                    {
                        *(*(matriz + i) + j) = *(*(matriz + i) + j) / pivote;
                    }
                }
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < n; ++j)
                    {
                        std::cout << "[" << *(*(matriz + i) + j) << "]";
                    }
                    std::cout << std::endl;
                }
                std::cout << std::endl;
            }
        }
    }
}

template <class T>
////////////////////////////////////////////////////////////////////////
// Name:       MatrizIdentidad::imprimir(Matriz<T> matriz)
// Purpose:    Implementation de MatrizIdentidad::imprimir(Matriz<T> matriz)
// Parametros:
// - T
// - matriz2
// Return:    
////////////////////////////////////////////////////////////////////////
inline void MatrizIdentidad::imprimir(Matriz<T> matriz)
{
    T** _matriz_print = matriz.getMatriz();
    int size = matriz.getTam();
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << "[" << _matriz_print[i][j] << "]";
        }
        std::cout << std::endl;
    }
}

