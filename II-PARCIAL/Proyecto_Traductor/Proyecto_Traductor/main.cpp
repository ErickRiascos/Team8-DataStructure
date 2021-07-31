#pragma once
#pragma warning(disable : 4996)
#include "Nodo.h"
#include "Operaciones.h"
#include "Menu.h"
#include "conio.h"
#include <iostream>
using namespace std;
char* ingresarLet(const char* msj)
{
	char* datos = (char*)calloc(30, sizeof(char));
	int i = 0;
	char c;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= 97 && c <= 122) {
			printf("%c", c);
			*(datos + i++) = c;
		}
	}
	return datos;
}
int main()
{
	Nodo* raiz = new Nodo();
	Operaciones o;
	bool repite = true;
	int n;
	std::string palabra;
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Insertar Palabra","Buscar Palabra","Eliminar Palabra","Imprimir ","Salir" };
	do {
		Menu m(titulo, opciones, 5);
		system("CLS");
		int opcion = m.getOpcion();
		switch (opcion) {
		case 1:
			palabra = ingresarLet("Ingrese una nueva palabra: ");	
			o.insertar(palabra, raiz);
			std::cout << "\n";
			system("pause");
			break;
		case 2:{
			o.setSufijo("");
			palabra = ingresarLet("Ingrese la palabra a buscar: ");
			if(o.buscar(raiz, palabra))
				cout<<"\nPalabra "<<palabra<<" encontrada ";
			else
				cout << "\nPalabra " << palabra << " no encontrada ";
			std::cout << "\n";
			system("pause");
			break;
		}
		case 3:
			system("pause");
			break;
		case 4:
			o.imprimir(raiz);
			system("pause");
			break;
		case 5:
			std::cout << "Saliendo...";
			repite = false;
			break;
		}
	} while (repite);

}
