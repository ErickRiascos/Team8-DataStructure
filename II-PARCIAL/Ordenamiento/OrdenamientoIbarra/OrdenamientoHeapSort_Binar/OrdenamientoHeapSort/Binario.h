#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Binario {
public:
    int vector[100], i, j, aux, izq, der, m;
    void Binario1(int[], int);
    void mostrar(int[], int);
};

void Binario::Binario1(int V[], int N) {
    for (i = 1; i < N; i++) {
        aux = V[i];
        izq = 0;
        der = i - 1;
        while (izq <= der) {
            m = ((izq + der) / 2);
            if (aux < V[m])
                der = m - 1;
            else
                izq = m + 1;
        }
        j = i - 1;
        while (j >= izq) {
            V[j + 1] = V[j];
            j = j - 1;
        }
        V[izq] = aux;
    }
}

void Binario::mostrar(int V[], int N) {
    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }
}
