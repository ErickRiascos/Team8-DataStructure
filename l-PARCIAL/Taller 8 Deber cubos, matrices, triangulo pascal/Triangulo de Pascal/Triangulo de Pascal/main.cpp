/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Ibarra Deyvid
Triangulo de pascal
Fecha creaci�n : 07 / 06 / 2021
Fecha modificaci�n : 08 / 06 / 2021 */
#include <iostream>
#include "Pascal.h"
using namespace std;

int main()
{
    int filas;
    cout << "ingrese filas:";
    cin >> filas;
    Pascal i;
    i.triangulo_pascal(filas);
    return 0;
}

