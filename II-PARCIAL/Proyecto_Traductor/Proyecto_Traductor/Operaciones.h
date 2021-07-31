#pragma once
#include "Nodo.h"
class Operaciones
{
private:
	std::string sufijo;
	std::string suf;
public:
	int pos;
	Operaciones() = default;
	void mover_nodos_hijos(Nodo*&, Nodo*&);
	int get_posicion_corte(Nodo*, std::string);
	bool hoja_izquierda(Nodo*);
	Nodo* dividir_nodos(Nodo*&, std::string, int);
	Nodo* insertar(std::string, Nodo*&);
	bool buscar(Nodo*, std::string);
	void imprimir(Nodo*);
};

