#include <iostream>
#include "Seno.h"
using namespace std;
int main()
{
    int opcion;
    bool repetir = true;
    double x, r;
    Seno s;
    do {
        cout << "\n1. Calcular el seno de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el valor del angulo en grados:" << endl;
            cin >> x;
            r = s.grados_to_radian(x);
            cout << "Seno del angulo: \t" << s.calcular_Seno(r) << endl;
            break;
        case 2:
            repetir = false;
            break;
        }
    } while (repetir);
}

