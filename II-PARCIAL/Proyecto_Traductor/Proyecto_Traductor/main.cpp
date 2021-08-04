/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: Ejercicio
Fecha creacipn: 27/07/2021
Fecha modificacion: 08/02/2021*/
#pragma once
#pragma warning(disable : 4996)
#include "Nodo.h"
#include "RadixTree.h"
#include "Menu.h"
#include "conio.h"
#include <fstream>
#include <iostream>
using namespace std;
bool contiene(const char* a,const char* b) {
	bool c = false;
	int j = 0;
	char* aux = (char*)calloc(100, sizeof(char));
	for (int i = 0; i <= strlen(a); i++) {
		if (*(a + i) == ' ')
			i++;
		else {
			if (*(a + i) == ';' || *(a + i) == '\0') {
				j = 0;
				if (!strcmp(aux, b))
					c = true;
				aux = (char*)calloc(100, sizeof(char));
			}
			else
				*(aux + j++) = *(a + i);
		}
		
	}
	return c;
}

void palabra(RadixTree r,Nodo*&raiz,char* cjPalabras) {	
	char* aux = (char*)calloc(100, sizeof(char));
	int j = 0;
	for (int i = 0; i < strlen(cjPalabras); i++){
		if (*(cjPalabras+i)==';'|| *(cjPalabras + i) == ' ') {
			string s = aux;
			r.insertar(s, raiz);
			aux = (char*)calloc(100, sizeof(char));
			j = 0;
		}
		else
			*(aux + j++) = *(cjPalabras + i);
	}	
}

char* expEsp(const char* a) {
	bool centinela = false;
	char* aux = (char*)calloc(200, sizeof(char));
	int j = 0;
	for (int i = 0; i < strlen(a); i++) {
		if (*(a + i) == '/') {
			centinela = true;
			i++;
		}
		if (centinela) {
			*(aux + j) = *(a + i);
			j++;
		}
	}
	return aux;
}

char* expIng(const char* a) {
	char* aux = (char*)calloc(200, sizeof(char));
	int i = 0, j = 0;
	while (*(a + i) != '/') {
		*(aux + j) = *(a + i);
		j++;
		i++;
	}
	return aux;
}

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
	char* word = NULL;
	Nodo* raizIng = new Nodo();
	Nodo* raizEsp = new Nodo();
	RadixTree o;
	bool repite = true;
	int n = 0, x = 0;
	const char* titulo = "MENU PRINCIPAL";
	const char* opciones[] = { "Ingles-Español","Español-Ingles","Salir" };
	string s;
	char* aux = NULL;	
	do {
		Menu m(titulo, opciones, 3);
		aux = (char*)calloc(100, sizeof(char));
		word = (char*)calloc(20, sizeof(char));
		system("CLS");
		int opcion = m.getOpcion();
		switch (opcion) {
		case 1: {
			x = 0;
			n = 0;
			strcpy(word, ingresarLet("Ingrese palabra en ingles: "));
			ifstream f("dic1.txt");
			if (f.is_open()) {
				while (!f.eof()&&x!=1) {
					getline(f, s);
					if (contiene(expIng(s.c_str()), word)) {
						strcpy(aux, expIng(s.c_str()));
						palabra(o, raizIng, aux);
						x++;
					}
					n++;
				}
				f.close();
			}
			else cout << "Error de apertura del archivo." << endl;
			x = 0;
			aux = (char*)calloc(100, sizeof(char));
			f.open("dic1.txt");
			if (f.is_open()) {
				while (!f.eof()) {
					if (x == n) {
						strcpy(aux, (expEsp(s.c_str())));
						palabra(o, raizEsp, aux);
					}
					getline(f, s);
					x++;
				}
				f.close();
			}
			else cout << "Error de apertura del archivo." << endl;
			o.buscar(raizEsp, aux);
			cout << endl << "Traduccion: " << aux << endl;
			system("pause");
			break;
		}
		case 2:

			system("pause");
			break;
		case 3:

			system("pause");
			break;
		}
	} while (repite);

}
