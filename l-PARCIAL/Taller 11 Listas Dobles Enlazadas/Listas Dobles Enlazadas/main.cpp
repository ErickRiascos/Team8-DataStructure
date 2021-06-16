/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller Listas Dobles Enlazadas
Fecha creación: 14/06/2021
Fecha modificación: 14/06/2021*/
#include <iostream>
#include "ListaDobleEnlazada.h"
using namespace std;
int main(int argc, char** argv) {
	ListaDobleEnlazada lst;
	lst.insertarCabeza(1);
	lst.insertarCabeza(2);
	lst.insertarCabeza(3);
	lst.insertarCabeza(4);
	lst.insertarCola(5);
	lst.insertarCola(6);
	lst.insertarCola(7);
	lst.insertarCola(8);
	lst.recorrer([](int valor, int indice) {
		std::cout << "Indice:  " << indice << "  valor " << valor << std::endl;
		});
	int suma = 0;
	lst.recorrer([&suma](int valor, int indice) {
		suma += valor;
		});
	std::cout << "Suma de elementos: " << suma << std::endl;
	return 0;
}
