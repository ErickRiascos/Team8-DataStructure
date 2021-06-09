/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Ibarra Deyvid
Triangulo de pascal
Fecha creación : 07 / 06 / 2021
Fecha modificación : 08 / 06 / 2021 */
#include <iostream> 
#include "Pascal.h"
using namespace std;

Pascal::Pascal(int)
{
	
}

int Pascal::llenar_pos(int fila, int indice) {
    if (fila == 1)
        return 1;   else{
    if (indice == 0 || indice == fila - 1)           
        return 1;
    else
        return llenar_pos(fila - 1, indice - 1) + llenar_pos(fila - 1, indice);
}
}

void Pascal::espacios_en_blanco(int n) {
    if (n > 0) {
        cout << " ";
        espacios_en_blanco(n - 1);
    }
    else cout << "";
}
bool Pascal::mostrar_pascal(int pos, int fila, int n, int esp, bool band) {

    if (fila <= n) {
        if (band == true) {
            espacios_en_blanco(esp);
            band = false;
        }
        cout << llenar_pos(fila, pos) << " ";
        if (pos < fila - 1)
            mostrar_pascal(pos + 1, fila, n, esp, band);
        else {
            cout << endl;
            band = true;
            mostrar_pascal(0, fila + 1, n, esp - 1, band);
        }
    }
    else {
        cout << endl;
        band = true;
    }
    return band;
}
void Pascal::triangulo_pascal(int filas) {
    mostrar_pascal(0, 1, filas, filas, true);
}