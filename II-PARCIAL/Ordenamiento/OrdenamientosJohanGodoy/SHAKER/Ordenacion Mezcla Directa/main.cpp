#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main() {
    int i, k, Der, Izq, Aux, N, A[30];
    cout << "METODO DE ORDENAMIENTO - SHAKER SORT" << endl;

    cout << "Ingrese el tama�o del arreglo : " << endl;
    cin >> N;
    k = N;
    Izq = 2;
    Der = N;

    for (i = 1; i <= N; i++) {
        cout << "\tA[" << i << "] : ";
        cin >> A[i];
    }
    do {
        for (i = Der; i >= Izq; i--) {
            if (A[i - 1] > A[i]) {
                Aux = A[i - 1];
                A[i - 1] = A[i];
                A[i] = Aux;
                k = i;
            }
        }
        Izq = k + 1;
        for (i = Izq; i <= Der; i++)
            if (A[i - 1] > A[i]) {
                Aux = A[i - 1];
                A[i - 1] = A[i];
                A[i] = Aux;
                k = i;
            }
        Der = k - 1;
    } while (Izq < Der);

    cout << "\n\tArreglo Ordenado\n\t==================\n";

    for (i = 1; i <= N; i++)
        cout << "\t" << A[i];
    cout << endl << "\t";

    system("pause");
    return 0;
}