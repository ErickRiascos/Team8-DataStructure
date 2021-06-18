/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller Listas Dobles Enlazadas
Fecha creación: 14/06/2021
Fecha modificación: 17/06/2021 */
#include <iostream>
#include "ListaDobleEnlazada.h"
using namespace std;
int main(int argc, char** argv) {
	ListaDobleEnlazada lst;
	//lst.insertarCabeza();
	//lst.insertarCabeza();
	//lst.insertarCabeza();
	//lst.insertarCabeza();
	//lst.insertarCola();
	//lst.insertarCola();
	//lst.insertarCola();
	//lst.insertarCola();
	//lst.recorrer([](int valor, int indice) {
	//	std::cout << "\nIndice:  " << indice << "  valor " << valor << std::endl;
	//	});
	//int suma = 0;
	//lst.recorrer([&suma](int valor, int indice) {
	//	suma += valor;
	//	});
	//std::cout << "Suma de elementos: " << suma << std::endl;
	lst.insertarCabeza(5);
	lst.insertarCola(6);
	lst.recorrer([](int valor, int indice) {
		std::cout << "\nIndice:  " << indice << "  valor " << valor << std::endl;
		});
	return 0;
}
