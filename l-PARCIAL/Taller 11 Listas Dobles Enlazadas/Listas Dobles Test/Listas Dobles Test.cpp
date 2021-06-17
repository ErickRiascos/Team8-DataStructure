#include "pch.h"
#include "CppUnitTest.h"
#include "../Listas Dobles Enlazadas/ListaDobleEnlazada.h"
#include "../Listas Dobles Enlazadas/ListaDobleEnlazada.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListasDoblesTest
{
	TEST_CLASS(ListasDoblesTest)
	{
	public:
		
		TEST_METHOD(insertarCabezaTest)
		{
			ListaDobleEnlazada s;
			s.insertarCabeza(5);
			Assert::IsNull(s.getNodo()->getSiguiente());
		}
		/*
		TEST_METHOD(insertarColaTest)
		{
			ListaDobleEnlazada s;
			s.insertarCola(5);
			Assert::AreNorEqual(0);
		}
		TEST_METHOD(recorrerTest)
		{
			ListaDobleEnlazada s;
			int x;
			int y;
			s.insertarCabeza(x,y);
			Assert::AreNorEqual(0);
		}
		*/
	};
}
