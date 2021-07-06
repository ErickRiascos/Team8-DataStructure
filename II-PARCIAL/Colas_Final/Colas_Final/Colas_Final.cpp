/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: Ejercicio Colas, Implementar funciones lambda, DLL, Imagen Generada y Marquesina
Fecha creacipn: 05/07/2021
Fecha modificacion: 05/07/2021*/
#pragma warning(disable:4996)
#define _WIN32_WINNT 0x0500
#include "windows.h"
#include<stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include "Lectura.h"
#include "Menu.h"

using namespace std;

int main() {
	Lectura l;
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 5;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("Title Universidad de las Fuerzas Armadas ESPE");
	system("mode con: cols=260 lines=50");
	l.lectura_Imagen();
	system("pause");
	system("CLS");
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 20;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("mode con: cols=60 lines=20");
	bool repite = true;
	int n;
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Ingresar por la cabeza","Ingresar por la cola","Eliminar por la cabeza","Eliminar por la cola","Mostrar","Salir" };
	do {
		Menu m(titulo, opciones, 6);
		system("CLS");
		int opcion = m.getOpcion();
		switch (opcion) {
		case 1:
			std::cout << "\n";
			system("pause");
			break;
		case 2:
			std::cout << "\n";
			system("pause");
			break;
		case 3:
			system("pause");
			break;
		case 4:
			system("pause");
			break;
		case 5:
			system("pause");
			break;
		case 6:
			std::cout << "Saliendo...";
			repite = false;
			break;
		}
	} while (repite);
	return 0;
	return 0;

}

