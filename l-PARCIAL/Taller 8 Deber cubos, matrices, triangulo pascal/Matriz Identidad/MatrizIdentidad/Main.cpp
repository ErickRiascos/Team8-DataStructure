/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Matriz identidad
Fecha creación: 03/05/2021
Fecha modificación: 24/06/2021 */
#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include "Matriz.h"
#include "MatrizIdentidad.h"
#include "Utils.h"
int main()
{
    int aux;
    bool validarAux = true;
    while (validarAux)
    {
        std::cout << "INGRESE EL TAMANIO DE LA MATRIZ:  ";
        std::cin >> aux;
        validarAux = Utils::Validation::validarNumeros(aux);
    }
    validarAux = true;

    Matriz<int> matriz1{ aux };
    int** matrizTest = matriz1.getMatriz();
    for (int i = 0; i < aux; ++i)
    {
        for (int j = 0; j < aux; ++j)
        {
            bool validate = true;
            while (validate)
            {
                std::cout << "Ingrese los elementos [" << i << "][" << j << "]: ";
                std::cin >> matrizTest[i][j];
                validate = Utils::Validation::validarNumeros(matrizTest[i][j]);
            }
        }
    }
    MatrizIdentidad::gauss_jordan(matriz1);
    MatrizIdentidad::imprimir(matriz1);
    return (0);
}
