#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrizIdentidad/MatrizIdentidad.h"
#include "../MatrizIdentidad/Matriz.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MatrizIdentidadTest
{
	TEST_CLASS(MatrizIdentidadTest)
	{
	public:
		
		TEST_METHOD(GaussJordanTest)
		{
			int dim = 5;
			MatrizIdentidad n;
			//Matriz <T>;
			//Matriz <M2>;
			//n.gauss_jordan(T &M2);
		}
		TEST_METHOD(imprimirTest)
		{
			//Matriz <M>;
			int dim = 2;
			MatrizIdentidad n;
			//n.imprimir(<T>, matriz2);
		}
	};
}
