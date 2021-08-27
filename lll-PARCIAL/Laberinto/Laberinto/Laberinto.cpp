#pragma warning (disable:4996)
#include "Laberinto.h"
#include <stdlib.h>
#include<iostream>
#include <windows.h>
#include <fstream>
#include<clocale>
#include<string>
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
Laberinto::Laberinto(int a,int b){
	x = a;
	y = b;
	this->matriz = (int**)malloc(x*sizeof(int*));
	for (int i = 0;i < x; i++) {
		*(this->matriz + i) = (int*)calloc(y,sizeof(int));
	}
	generarLaberinto();
	fin = false;
}

void Laberinto::generarLaberinto()
{
	int j = 0;
	std::ifstream archivo;
	std::string texto;
	char* a=(char*)calloc(texto.length(),sizeof(char));
	archivo.open("laberinto.txt" , std::ios::in);
	if (archivo.fail()) {
		std::cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!archivo.eof()) {
		getline(archivo, texto);
		strcpy(a, texto.c_str());
		for (int i = 0; i < strlen(a); i++){
			*(*(matriz + i) + j)=*(a+i)-48;
		}
		j++;
	}
	archivo.close();
}

void Laberinto::imprimir(){
	for (int i = 0; i < y; i++){
		for (int j = 0;j < x;j++) {
			if(*(*(matriz + j) + i)==0)
				std::cout << (char)178;
			if (*(*(matriz + j) + i) == 1)
				std::cout << ' ';
			if (*(*(matriz + j) + i) == 2)
				std::cout << (char)245;
			if (*(*(matriz + j) + i) == 3)
				std::cout << 'L';
			if (*(*(matriz + j) + i) == 4)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
}

bool Laberinto::buscarSolucion(int a,int b){
	do{		
		gotoxy(0, 0);
		*(*(matriz + b) + a) = 2;
		imprimir();
		if (validar(a, b) != 0) {
			switch (validar(a, b)) {
			case 1:
				fin = buscarSolucion(a - 1, b);
				break;
			case 2:
				fin = buscarSolucion(a + 1, b);
				break;
			case 3:
				fin = buscarSolucion(a, b + 1);
				break;
			case 4:
				fin = buscarSolucion(a, b - 1);
				break;
			}			
		}
		else {
			*(*(matriz + b) + a) = 4;
			break;
		}
	} while (!fin);
	return fin;
}

int Laberinto::validar(int a,int b)
{
	if (*(*(matriz + b - 1) + a) == 1)
		return 4;
	if (*(*(matriz + b + 1) + a) == 1)
		return 3;
	if (*(*(matriz + b) + a + 1) == 1)
		return 2;
	if (*(*(matriz + b) + a - 1) == 1)
		return 1;
	if (a == 28 || b == 113 || a == 0 || b == 0)
		return 0;
	if (*(*(matriz + b - 1) + a) == 3 || *(*(matriz + b + 1) + a) == 3 || *(*(matriz + b) + a + 1) == 3 || *(*(matriz + b) + a - 1) == 3)
		fin = true;
	return 0;
	
}
