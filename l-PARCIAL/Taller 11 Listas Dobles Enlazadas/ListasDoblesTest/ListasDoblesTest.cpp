#include "pch.h"
#include "CppUnitTest.h"
#include "../Listas Dobles Enlazadas/ListaDobleEnlazada.h"
#include "../Listas Dobles Enlazadas/ListaDobleEnlazada.cpp"
#include "../Listas Dobles Enlazadas/Nodo.h"
#include "../Listas Dobles Enlazadas/Nodo.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListasDoblesTest
{
	TEST_CLASS(ListasDoblesTest)
	{
	public:
		TEST_METHOD(insertarCabezaTest)
		{
			ListaDobleEnlazada s;
			s.insertarCabeza(1);
			Assert::IsNotNull(s.getNodo());
		}
		
		TEST_METHOD(insertarColaTest)
		{
			ListaDobleEnlazada s;
			s.insertarCola(5);
			Assert::IsNotNull(s.getNodo());
		}
		
	};
}
