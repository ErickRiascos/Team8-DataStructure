#include "operaciones.h"
#include <iostream>
using namespace std;
void operaciones::imprimir(int x[], int ini, int n)
{
	for (int i = ini; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}

void operaciones::division(int* A, int n)
{
	if (n == 1) { return; }
	int mitad = n / 2;
	int* inicio = new int[mitad];
	int* final = new int[n - mitad];
	for (int i = 0; i < mitad; i++)
		inicio[i] = A[i];
	for (int i = mitad; i < n; i++)
		final[i - mitad] = A[i];
	division(inicio, mitad);
	division(final, n - mitad);
	ordenamiento(inicio, mitad, final, n - mitad, A);
}

void operaciones::ordenamiento(int* a, int b, int* c, int d, int* A)
{
	int i = 0, j = 0, k = 0;
	while ((i < b) && (j < d))
	{
		if (a[i] <= c[j])
		{
			A[k] = a[i];
			i++;
		}
		else
		{
			A[k] = c[j];
			j++;
		}
		k++;
	}
	while (i < b)
	{
		A[k] = a[i];
		i++; k++;
	}
	while (j < d)
	{
		A[k] = c[j];
		j++; k++;
	}
}
