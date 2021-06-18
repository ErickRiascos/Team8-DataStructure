/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Serie Taylor funcion Cosecante
Fecha creación: 05/05/2021
Fecha modificación: 17/06/2021 */
#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Csc.h"
#include<conio.h>
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
    double x=0, r;
    do {
        cout << "MENU:\n1. Calcular la csc de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        opcion = atoi(ingresar("Elija una opcion: "));
        Csc s(x);
        switch (opcion) {
        case 1:
            x = atoi(ingresar("\nIngrese el valor del angulo en grados: \n"));
            s.setAngulo(x);
            s.gradARad();
            cout << "\nCsc del angulo: \t" << s.calcular() << endl;
            break;
        case 2:
            repetir = false;
            cout << "\n" ;
            break;
        }
        system("pause");
        system("CLS");
    } while (repetir);
}
