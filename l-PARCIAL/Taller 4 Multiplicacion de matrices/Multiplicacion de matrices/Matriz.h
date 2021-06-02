/***********************************************************************
 * Module:  Matriz.h
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 18:51:48
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__Multiplicacion_de_matrices_Matriz_h)
#define __Multiplicacion_de_matrices_Matriz_h
#include<iostream>

class Matriz
{
public:
   //int** getMatriz();
   //void setMatriz(int**);
   void llenarMatriz();
   void imprimirMatriz();
   Matriz()=default;
   int matriz[10][10];
};
#endif