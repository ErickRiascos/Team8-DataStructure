#pragma once
#include<iostream>
#include<windows.h>
using namespace std;
#define MAX 100
class Heapsort {
public:
    int lista[MAX];
    int j, temp, hijo;
    bool esmonticulo;
    void heapsort(int[], int);
    void monticulo(int[], int, int);
};
void Heapsort::monticulo(int lista[], int primero, int ultimo) {
    cout << endl << endl << "Nuevo Monticulo" << endl << endl;
    esmonticulo = false;
    for (int k = primero; k <= ultimo; k++) {
        cout << lista[k] << "\t";
    }cout << endl;
    while ((primero <= ultimo / 2) && !esmonticulo) {
        if (2 * primero == ultimo) {
            hijo = 2 * primero;
        }
        else {
            if (lista[2 * primero] > lista[2 * primero + 1]) {
                hijo = 2 * primero;
            }
            else {
                hijo = 2 * primero + 1;
            }
        }if (lista[primero] < lista[hijo]) {
            cout << endl << endl << "Cambio de " << lista[primero] << " por " << lista[hijo] << endl << endl;
            temp = lista[primero];
            lista[primero] = lista[hijo];
            lista[hijo] = temp;
            primero = hijo;
        }
        else {
            esmonticulo = true;
        }
    }
}

void Heapsort::heapsort(int lista[], int n) {
    for (j = n / 2; j >= 0; j--) {
        monticulo(lista, j, n);
    }
    for (j = n; j >= 1; j--) {
        temp = lista[0];
        lista[0] = lista[j];
        lista[j] = temp;
        cout << endl << "Sacamos al dato " << lista[j] << " de la lista." << endl << endl;
        cout << endl << "************************************************************" << endl << "Nueva Lista: " << endl << endl;
        for (int k = 0; k < j; k++) {
            cout << lista[k] << "\t";
        }Sleep(2000); cout << endl;
        monticulo(lista, 0, j - 1);
    }

}