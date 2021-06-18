/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu
Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
#pragma warning(disable : 4996)
#include <iostream>
#include "Lista.h"
#include "Menu.h"
#include<conio.h>
char* ingresar(const char* msj)
{
	char* datos = (char*)calloc(10, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
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
			n = atoi(ingresar("Ingrese un valor entero: "));
			lst.insertarCabeza(n);
			std::cout << "\n";
			system("pause");
			break;
		case 2:
			n = atoi(ingresar("Ingrese un valor entero: "));
			lst.insertarCola(n);
			std::cout << "\n";
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
