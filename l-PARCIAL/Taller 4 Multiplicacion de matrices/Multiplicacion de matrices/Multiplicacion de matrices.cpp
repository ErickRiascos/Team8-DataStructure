// Multiplicacion de matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Matriz.h"
#include"Operacion.h"

int main(){
    Matriz m1;
    Matriz m;
    std::cout << "Ingrese primer matriz:" << std::endl;
    m.llenarMatriz();
    m.imprimirMatriz();
    std::cout << "\nIngrese segunda matriz:" << std::endl;
    m1.llenarMatriz();
    m1.imprimirMatriz();
    Operacion op;
    std::cout << "\nResultado:" << std::endl;
    op.multiplicarMatriz(m, m1).imprimirMatriz();
}
