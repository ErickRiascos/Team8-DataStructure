/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Listas: implementar un menu 
Fecha creación: 08/06/2021
Fecha modificación: 10/06/2021*/
#pragma once
class Nodo{
private:
	int valor;
	Nodo *siguiente;
public:
	Nodo(int);
	friend class Lista;
};

