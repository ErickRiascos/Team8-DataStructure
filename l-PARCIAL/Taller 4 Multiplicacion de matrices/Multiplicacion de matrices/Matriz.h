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
   void encerar();
   int matriz[10][10];
};
#endif