/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Serie Taylor funcion Tangente
Fecha creación: 06/05/2021
Fecha modificación: 17/06/2021 */
#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Tangente.h"

using namespace std;
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
    int opcion;
    bool repetir = true;
    double x;
    Tan s;
    do {
        cout << "\n1. Calcular la Tan de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        opcion = atoi(ingresar("Elija una opcion: "));
        switch (opcion) {
        case 1:
            x = atoi(ingresar("\nIngrese el valor del angulo en grados:"));
            cout << "\nTan del angulo: \t" << s.calcular_Tan(s.grados_to_radian(x)) << endl;
            break;
        case 2:
            repetir = false;
            break;
        }
    } while (repetir);
}

