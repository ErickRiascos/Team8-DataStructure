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
		TEST_METHOD(insertar_Listas_Test) {
			Lista m;
			m.insertarCabeza(1);
			Assert::IsNotNull(m.getNodo());
		}
		TEST_METHOD(eliminar_Listas_Test) {
			Lista m;
			m.insertarCabeza(1);
			m.eliminar_Cabeza();
			Assert::IsNull(m.getNodo());
		}
	};
}