#include "pch.h"
#include "CppUnitTest.h"
#include "../MatrizIdentidad/Operacion.h"
#include "../MatrizIdentidad/Operacion.cpp"
#include "../MatrizIdentidad/Matriz.h"
#include "../MatrizIdentidad/Matriz.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MatrizIdentidadTest
{
	TEST_CLASS(MatrizIdentidadTest)
	{
	public:
		
		TEST_METHOD(segmentar_Test)
		{
			Matriz m;
			int dim = 2;
			Operacion n;
			m.setMatriz(n.segmentar(dim));
			Assert::IsNotNull(m.getMatriz());
		}
		TEST_METHOD(encerar_Test)
		{
			Matriz m;
			int dim = 2;
			Operacion n;
			m.setMatriz(n.segmentar(dim));
			int** mat = m.getMatriz();
			n.encerar(mat,dim);
			Assert::IsNotNull(m.getMatriz());
		}
		TEST_METHOD(identidad_Test)
		{
			Matriz m;
			int dim = 2;
			Operacion n;
			m.setMatriz(n.segmentar(dim));
			int** mat = m.getMatriz();
			n.encerar(mat, dim);
			n.identidad(mat,dim);
			Assert::IsNotNull(m.getMatriz());
		}
	};
}
