/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller Cubo magico
Fecha creación: 31/05/2021
Fecha modificación: 24/06/2021 */

#pragma warning (disable:4996)
#include <iostream>
#include "Operation.h"
#include "Matriz.h"
#include "Valid.h"
using namespace std;

int main()
{
    int tam, pot;
    Operation op;
    Matriz matriz1, matriz2, matriz3;
    std::cout << "---------ELABORACION DEL CUBO MAGICO---------------\n";
    cout << "INGRESE LA DIMENSION DEL CUBO IMPAR:   ";
    tam = Valid::Validacion::validation_numbers<int>("");
    while (tam % 2 == 0) {
        cout << "INGRESE LA DIMENSION DEL CUBO IMPAR:   ";
        tam = Valid::Validacion::validation_numbers<int>("");
    }
    matriz1.set_matriz(op.segmentar(tam));
    op.encerar(matriz1, tam);
    op.cubo_magico(matriz1, tam);
    op.imprimir(matriz1, tam);
}
