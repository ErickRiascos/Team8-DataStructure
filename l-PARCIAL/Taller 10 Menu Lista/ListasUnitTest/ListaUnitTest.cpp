#include "pch.h"
#include "CppUnitTest.h"
#include "../Listas/Lista.h"
#include"../Listas/Lista.cpp"
#include"../Listas/Nodo.h"
#include"../Listas/Nodo.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListasUnitTest
{
	TEST_CLASS(ListasUnitTest)
	{
	public:
		TEST_METHOD(insertar_eliminar_Listas_Test){
			Lista m;
			m.insertarCabeza();
			m.eliminar_Cabeza();
			m.insertarCola();
			m.eliminar_Cola();
			Assert::IsNotNull(m.mostrar());
		}
	};
}
