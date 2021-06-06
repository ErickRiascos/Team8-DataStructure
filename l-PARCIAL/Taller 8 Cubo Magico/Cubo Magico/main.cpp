// Cubo Magico.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector.h"
#include "Cubo.h"
int main()
{
    int dim;
    std::cout << "Ingrese la cantidad de numeros con los que va a llenar el cubo(numero impar):  ";
    std::cin >> dim;
    Vector v(dim);
    v.segmentar();
    v.ingresar();
    v.ordenar();
    Cubo c(v);
    c.segmentar();
    c.llenar();
    c.imprimir();
    std::cout << "La suma del cubo magico es: " << v.calcularSuma();

}
