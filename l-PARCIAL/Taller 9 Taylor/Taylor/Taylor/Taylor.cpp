/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller de Serie Taylor funcion Cosecante
Fecha creación: 05/05/2021
Fecha modificación: 17/06/2021 */
#pragma warning(disable : 4996)
#include <conio.h>
#include <iostream>
#include "Coseno.h"
#include "Seno.h"
#include "Csc.h"
#include "Tangente.h"
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
        double r, num2;
        Coseno c;
        Seno b;
        Csc s(x);
        Tangente a;
        switch (opcion) {
        case 1:
            x = atoi(ingresar("\nIngrese el valor del angulo en grados: \n"));
            s.setAngulo(x);
            s.gradARad();
            cout.precision(4);
            num2 = c.radian(x);
            r = c.coseno(num2);
            cout << "\nCoseno del angulo :" << r << endl;
            cout << "\nSeno del angulo: \t" << b.calcular_Seno(b.grados_to_radian(x)) << endl;
            cout << "\nCsc del angulo: \t" << s.calcular() << endl;
            cout << "\nTan del angulo: \t" << a.calcular_Tan(a.grados_to_radian(x)) << endl;

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