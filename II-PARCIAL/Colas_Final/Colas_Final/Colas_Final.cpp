/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: Ejercicio Colas, Implementar funciones lambda, DLL, Imagen Generada y Marquesina
Fecha creacipn: 05/07/2021
Fecha modificacion: 05/07/2021*/
#pragma warning(disable:4996)
#define _WIN32_WINNT 0x0500
#include "windows.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include "Lectura.h"
#include "Menu.h"
#include "Cola.h"
#include "Marquesina.h"
#include "Windows.h"
using namespace std;
void usleep(__int64 usec)
{
	HANDLE timer;
	LARGE_INTEGER ft;
	ft.QuadPart = -(10 * usec); // Convert to 100 nanosecond interval, negative value indicates relative time
	timer = CreateWaitableTimer(NULL, TRUE, NULL);
	SetWaitableTimer(timer, &ft, 0, NULL, NULL, 0);
	WaitForSingleObject(timer, INFINITE);
	CloseHandle(timer);
}
int main() {
	std::string marq = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                                                                ";
	Marquesina m(marq);
	while (true)
	{
		while (1) {
			m.generarMarq();
			printf("%s", m.getBanner().c_str());
			Sleep(10);
			system("CLS");
		}
	}
	Lectura l;
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 10;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("color 0a");
	system("Title Universidad de las Fuerzas Armadas ESPE");
	system("mode con: cols=260 lines=55");
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
	system("mode con: cols=130 lines=1200");
	bool repite = true;
	int n;
	system("color 0e");
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Generar Clientes","Mostrar Clientes","Eliminar Datos","Salir"};
	Cola c;
	do {
		Menu m(titulo, opciones, 4);
		system("CLS");
		int opcion = m.getOpcion();
		switch (opcion) {
		case 1:
			std::cout << "\n";
			int n;
			cout << "Ingrese la cantidad de clientes: ";
			cin >> n;
			system("CLS");
			c.generarClientes(n);
			system("pause");
			break;
		case 2:
			std::cout << "\n";
			c.mostrar();
			system("pause");
			break;
		case 3:
			std::cout << "\n";
			c.destruirCola();
			cout << "Se elimino la cola de clientes con exito...\n\n";
			system("pause");
			break;
		case 4:
			std::cout << "Saliendo...";
			repite = false;
			break;
		}
		
	} while (repite);
	return 0;

}

