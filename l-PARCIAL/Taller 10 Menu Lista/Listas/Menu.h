/*Fecha creación: 09/06/2021
Fecha modificación: 17/06/2021*/
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

