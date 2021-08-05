#include "pch.h"
#include "CppUnitTest.h"
#include "../Proyecto_Traductor/RadixTree.h"
#include "../Proyecto_Traductor/RadixTree.cpp"
#include "../Proyecto_Traductor/Nodo.h"
#include "../Proyecto_Traductor/Nodo.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProyectoTraductor
{
	TEST_CLASS(UnitTestProyectoTraductor)
	{
	public:
		TEST_METHOD(insertar_test)
		{
			Nodo* c=new Nodo();
			RadixTree b;
			b.insertar("prueba",c);
			Assert::IsNotNull(c);
		}
		TEST_METHOD(buscar_test)
		{
			Nodo* c = new Nodo();
			RadixTree b;
			b.insertar("prueba", c);
			Assert::IsTrue(b.buscar(c,"prueba"));
		}
	};
}
