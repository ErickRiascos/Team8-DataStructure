

#include <iostream>
#include "operaciones.h"
using namespace std;
int main() {

    operaciones list;
    int lista[] = {87,43,2,11,42,35,3,42,45,33,21};
    int n = sizeof(lista) / sizeof(int);
    cout << endl;
    cout << "  NUMEROS INGRESADOS: ";
    list.imprimir(lista, 0, n);
    list.division(lista, n);
    cout << "ORDENAMIENTO MERGE SORT: ";
    list.imprimir(lista, 0, n);
    return 0;

}