#include "pch.h"
#include "CppUnitTest.h"
#include "../Listas Dobles Test/ListaDobleEnlazada.h"
#include "../Listas Dobles Test/ListaDobleEnlazada.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListasDoblesTest
{
	TEST_CLASS(ListasDoblesTest)
	{
	public:
		
		TEST_METHOD(insertarCabezaTest)
		{
			ListaDobleEnlazada s;
			int x;
			s.insertarCabeza(x);
			Assert::AreNorEqual(0);
		}
		TEST_METHOD(insertarColaTest)
		{
			ListaDobleEnlazada s;
			int x;
			s.insertarCola(x);
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

	};
}
