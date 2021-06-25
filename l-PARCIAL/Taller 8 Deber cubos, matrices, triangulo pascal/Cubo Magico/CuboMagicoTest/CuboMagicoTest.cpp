#include "pch.h"
#include "CppUnitTest.h"

#include"../Cubo Magico/Matriz.h"
#include"../Cubo Magico/Matriz.cpp"
#include"../Cubo Magico/Operation.h"
#include"../Cubo Magico/Operation.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CuboMagicoTest
{
	TEST_CLASS(CuboMagicoTest)
	{
	public:
		TEST_METHOD(encerarTest)
		{
			Operation m;
			Matriz z;
			int y;
			m.encerar(z, y);
		}
		TEST_METHOD(ingresarTest)
		{
			Operation m;
			Matriz z;
			int y;
			m.ingresar(z, y);
		}
		TEST_METHOD(imprimirTest)
		{
			Operation m;
			Matriz z;
			int y;
			m.imprimir(z, y);
		}
		TEST_METHOD(cuboMagicoTest)
		{
			Operation m;
			Matriz z;
			int y;
			m.cubo_magico(z, y);
		}
	};
}

