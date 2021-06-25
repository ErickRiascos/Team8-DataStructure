#pragma once
#include "Nodo.h"
#include <functional>
class Lista
{
	private:
		Nodo* primero;
		Nodo* actual;
		int tamanio = 0;
	public:
		Lista();
		bool listaVacia();
		void mostrar();
		void insertar_Persona(Persona);
		void eliminar_Persona();
		Nodo* getPrimero();
		void generarCorreo();
		int calcularRepeticiones(Nodo*);
		int getTamanio();
		char* getPdf();
		void unirInfo(char*,const char*);
	};

