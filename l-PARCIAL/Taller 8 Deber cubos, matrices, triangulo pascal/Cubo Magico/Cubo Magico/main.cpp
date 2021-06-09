/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/05/2021
Fecha modificación: 05/05/2021*/
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
