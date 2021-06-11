/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
#pragma warning(disable : 4996)
#include <iostream>
#include "Lista.h"
#include "Menu.h"
int main(int argc, char** argv) {
	Lista lst;
	bool repite = true;
	int n;
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Ingresar por la cabeza","Ingresar por la cola","Eliminar por la cabeza","Eliminar por la cola","Mostrar","Salir"};
	do {
		Menu m(titulo, opciones, 6);
		system("CLS");
		int opcion=m.getOpcion();
		switch (opcion) {
		case 1:
			std::cout << "Ingrese un valor entero: " << std::endl;
			std::cin >> n;
			lst.insertarCabeza(n);
			system("pause");
			break;
		case 2:
			std::cout << "Ingrese un valor entero: " << std::endl;
			std::cin >> n;
			lst.insertarCola(n);
			system("pause");
			break;
		case 3:
			lst.eliminar_Cabeza();
			std::cout << "Elemento eliminado..." << std::endl;
			system("pause");
			break;
		case 4:
			lst.eliminar_Cola();
			std::cout << "Elemento eliminado..." << std::endl;
			system("pause");
			break;
		case 5:
			lst.mostrar();
			system("pause");
			break;
		case 6:
			std::cout << "Saliendo...";
			repite = false;
			break;
		}
	} while (repite);
	return 0;
}
