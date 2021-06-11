/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
#pragma once
class Menu
{
private:
	const char* titulo;
	const char* opciones[6];
	int n;
	int opcion;
public:
	Menu(const char*, const char* opciones[6], int);
	void gotoxy(short, short);
	int getOpcion();
};

