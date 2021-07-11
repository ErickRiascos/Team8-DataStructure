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
		/*gotoxy(0, 0);
		std::cout << m.getBanner().c_str();*/
		SetConsoleTitleA(m.getBanner().c_str());		
	}
}

void menu() {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
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
			c.genClientes(n,[&c]() {
				Cliente primero(1, 0, 0);
				int ts = primero.getTiempoSalida();
				int tl = primero.getTiempollegada();
				c.encolar(primero);
				Cliente aux=primero;
				return aux;
				});
			system("pause");
			break;
		case 2: {
			double promedio = 0,pte=0,ptn=0,pts=0,ptel=0;
			int cc=0;
			std::cout << "N\tT.L\tT.E\tT.N.C\tT.Sr\tT.S\tT.E.L";
			c.recorrer([](Cliente t) {
				t.toString();
				});
			c.recorrer([&pte, &ptn,&pts,&ptel,&cc](Cliente t) {
				ptn += t.getTiempoNoTrabaja();
				pts += t.getTiempoServicio();
				ptel += t.getTiempoEntreLLegadas();
				pte += t.getTiempoEspera();
				if (t.getTiempoEspera()>0) {
					cc++;
				}
				});
			promedio = c.promedio([pte]() {
				return pte;
				});
			std::cout << "\nPromedio de tiempo de espera: " << promedio << std::endl;
			promedio = c.promedio([ptn]() {
				return ptn;
				});
			std::cout << "Promedio de tiempo que no trabaja el cajero: " << promedio << std::endl;
			promedio = c.promedio([pts]() {
				return pts;
				});
			std::cout << "Promedio de tiempo de servicio: " << promedio << std::endl;
			promedio = c.promedio([ptel]() {
				return ptel;
				});
			std::cout << "Promedio de tiempo entre llegadas: " << promedio << std::endl;
			std::cout << "Promedio de clientes en cola: " << cc << std::endl;
			system("pause");
			break;
		}
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
	string txt = "UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                                                                     ";
	thread t(menu);
	thread th(marq, txt);
	if (th.joinable()&&t.joinable()) {
		t.join();
		th.join();
	}
}

