#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Seno.h"
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
    double x, r;
    Seno s;
    do {
        cout << "\n1. Calcular el seno de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        opcion = atoi(ingresar("\nElija una opcion : "));
        switch (opcion) {
        case 1:
            x = atoi(ingresar("\nIngrese el valor del angulo en grados:"));
            r = s.grados_to_radian(x);
            cout << "\nSeno del angulo: \t" << s.calcular_Seno(r) << endl;
            break;
        case 2:
            repetir = false;
            break;
        }
    } while (repetir);
}

