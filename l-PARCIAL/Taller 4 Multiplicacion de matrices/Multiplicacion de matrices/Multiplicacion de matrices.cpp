/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller 4 Multiplicacion de matrices
Fecha creación: 31/05/2021
Fecha modificación: 17/06/2021*/
// Multiplicacion de matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma warning (disable:4996)
#include <conio.h>
#include <iostream>
#include "Matriz.h"
#include"Operacion.h"

char* ing(const char* msj)
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

int main(){

    
    Matriz m1;
    Matriz m;
    int dim;
    dim = atoi(ing("\nIngrese la dimension :"));
    
    std::cout << "\nIngrese primer matriz:" << std::endl;
    m.llenarMatriz(dim);
    m.imprimirMatriz(dim);
    std::cout << "\nIngrese segunda matriz:" << std::endl;
    m1.llenarMatriz(dim);
    m1.imprimirMatriz(dim);
    Operacion op;
    std::cout << "\nResultado:" << std::endl;
    op.multiplicarMatriz(m, m1,dim).imprimirMatriz(dim);
    getch();
}
