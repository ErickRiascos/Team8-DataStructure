/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Memoria Dinamica: Potencia de Matrices
Fecha creación: 05/05/2021
Fecha modificación: 17/05/2021*/
#pragma warning (disable:4996)
#include <conio.h>
#include <iostream>
#include "Vector.h"
#include "Cubo.h"
char* ingresar(const char* msj)
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
int main()
{
    int dim;
    dim = atoi(ingresar("Ingrese la cantidad de numeros con los que va a llenar el cubo(numero impar):  "));
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
