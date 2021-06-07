/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Ibarra Deyvid
Funcion Tangente
Fecha creación: 06/05/2021
Fecha modificación: 07/05/2021*/
#include <iostream>
#include "Tangente.h"

using namespace std;
int main()
{
    int opcion;
    bool repetir = true;
    double x;
    Tan s;
    do {
        cout << "\n1. Calcular la Tan de un numero en grados" << endl;
        cout << "2. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el valor del angulo en grados:" << endl;
            cin >> x;
            cout << "Tan del angulo: \t" << s.calcular_Tan(s.grados_to_radian(x)) << endl;
            break;
        case 2:
            repetir = false;
            break;
        }
    } while (repetir);
}

