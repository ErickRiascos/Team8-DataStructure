/*Fecha creación: 07/05/2021
Fecha modificación: 17/06/2021*/
#include <iostream> 
#include "Pascal.h"
using namespace std;
////////////////////////////////////////////////////////////////////////
// Nombre:       Pascal::Pascal(int)
// Propósito:    Implementacion de Pascal::Pascal()
// Parametros:
// Return: 
////////////////////////////////////////////////////////////////////////
Pascal::Pascal(int)
{
	
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Pascal::llenar_pos(int fila, int indice)
// Propósito:    Implementacion de Pascal::llenar_pos()
// Parametros:
// - fila
// - indice
// Return: int
////////////////////////////////////////////////////////////////////////
int Pascal::llenar_pos(int fila, int indice) {
    if (fila == 1)
        return 1;   else{
    if (indice == 0 || indice == fila - 1)           
        return 1;
    else
        return llenar_pos(fila - 1, indice - 1) + llenar_pos(fila - 1, indice);
}
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Pascal::espacios_en_blanco(int n)
// Propósito:    Implementacion de Pascal::espacios_en_blanco()
// Parametros:
// - n
// Return: 
////////////////////////////////////////////////////////////////////////
void Pascal::espacios_en_blanco(int n) {
    if (n > 0) {
        cout << " ";
        espacios_en_blanco(n - 1);
    }
    else cout << "";
}
////////////////////////////////////////////////////////////////////////
// Nombre:       Pascal::mostrar_pascal(int pos, int fila, int n, int esp, bool band)
// Propósito:    Implementacion de bool Pascal::mostrar_pascal()
// Parametros:
// -  pos
// -  fila
// -  n
// -  esp
// -  band
// Return: bool
////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////
// Nombre:       Pascal::triangulo_pascal(int filas)
// Propósito:    Implementacion de Pascal::triangulo_pascal()
// Parametros:
// - filas
// Return: 
////////////////////////////////////////////////////////////////////////
void Pascal::triangulo_pascal(int filas) {
    mostrar_pascal(0, 1, filas, filas, true);
}