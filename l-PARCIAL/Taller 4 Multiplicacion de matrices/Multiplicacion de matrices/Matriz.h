/*Fecha creación: 31/05/2021
Fecha modificación: 17/06/2021*/
#if !defined(__Multiplicacion_de_matrices_Matriz_h)
#define __Multiplicacion_de_matrices_Matriz_h
#include<iostream>

class Matriz
{
public:
   void llenarMatriz();
   void imprimirMatriz();
   Matriz()=default;
   void encerar();
   int matriz[10][10];
};
#endif