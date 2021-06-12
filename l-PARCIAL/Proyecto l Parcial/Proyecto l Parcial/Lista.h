#pragma once
#include "Nodo.h"
class Lista
{
	private:
		Nodo* primero;
		Nodo* actual;
	public:
		Lista();
		bool listaVacia();
		void mostrar();
		void insertar_Persona(Persona);
		void eliminar_Persona();
	};

