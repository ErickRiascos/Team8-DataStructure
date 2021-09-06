#pragma warning (disable: 4996)
#include <iostream>
#include <conio.h>
#include "Ordenamiento.h"
#include "Operacion.h"

int main()
{
	
	Operacion<int> operacion;
	Ordenamiento<int> op;
	int cantidad = 10;
	cout << "Ordenamiento por el metodo Seleccion" << endl;
	operacion.set_operacion(op.Segmentar(cantidad));
	cout << "numeros alatorios generados" << endl;
	op.añadir(operacion, cantidad);
	op.imprimir(operacion, cantidad, [](int valor) {
		cout << valor << endl;});
	cout << "Los numeros aleatorios an sido ordenados" << endl;
	op.Seleccion(operacion, cantidad);
	op.imprimir(operacion, cantidad, [](int valor) {
		cout << valor << endl;
		});

	cout << "Ordenamiento por el metodo De casilleros" << endl;
	operacion.set_operacion(op.Segmentar(cantidad));
	cout << "numeros alatorios generados" << endl;
	op.añadir(operacion, cantidad);
	op.imprimir(operacion, cantidad, [](int value) {
		cout << value << endl; });
	cout << "Los numeros aleatorios an sido ordenados" << endl;
	op.Casilleros(operacion, cantidad);
	op.imprimir(operacion, cantidad, [](int value) {
		cout << value << endl;
		});
	getch();

}