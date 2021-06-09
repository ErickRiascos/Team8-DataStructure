#include "pch.h"
#include "CppUnitTest.h"
#include "../Taller 9_Cubo_Latino/Matriz.h"
#include "../Taller 9_Cubo_Latino/Matriz.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CuboLatinoUnitTest
{
	TEST_CLASS(CuboLatinoUnitTest)
	{
	public:
		TEST_METHOD(segmentar_Encerar_Matriz_Test) {
			Matriz m;
			m.setDim(2);
			m.segmentar();
			m.encerar();
			Assert::IsNotNull(m.getMatriz());
		}
		TEST_METHOD(generar_Matriz_Test) {
			Matriz m;
			m.setDim(1);
			m.segmentar();
			m.encerar();
			m.generar();
			Assert::IsNotNull(m.getMatriz());
		}
	};
}
