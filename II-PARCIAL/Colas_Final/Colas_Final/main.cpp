/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: Ejercicio Colas, Implementar funciones lambda, DLL, Imagen Generada y Marquesina
Fecha creacipn: 05/07/2021
Fecha modificacion: 05/07/2021*/
#pragma warning(disable:4996)
#define _WIN32_WINNT 0x0500
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <thread>
#include <Windows.h>
#include "Lectura.h"
#include "Menu.h"
#include "Cola.h"
#include "Marquesina.h"
#include "Windows.h"
using namespace std;

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void marq(string a) {	
	Marquesina m(a);
	while (1) {
		this_thread::sleep_for(chrono::milliseconds(50));
		m.generarMarq();
		//gotoxy(0, 0);
		//std::cout << m.getBanner().c_str();
		SetConsoleTitleA(m.getBanner().c_str());		
	}
}

void menu() {
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
	system("color 0e");
	system("mode con: cols=138 lines=5000");
	bool repite = true;
	int n;
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Generar Clientes","Mostrar Clientes","Eliminar Datos","Salir" };
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
}

int main() {
	string txt = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                                                                                                 ";
	thread t(menu);
	thread th(marq, txt);
	if (th.joinable()&&t.joinable()) {
		t.join();
		th.join();
	}
}

