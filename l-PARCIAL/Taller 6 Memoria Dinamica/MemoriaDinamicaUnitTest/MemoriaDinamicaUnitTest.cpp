#include "pch.h"
#include "CppUnitTest.h"
#include "../Memoria Dinamica/Matriz.h"
#include"../Memoria Dinamica/Matriz.cpp"
#include"../Memoria Dinamica/Operaciones.h"
#include"../Memoria Dinamica/Operaciones.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MemoriaDinamicaUnitTest
{
	TEST_CLASS(MemoriaDinamicaUnitTest)
	{
	public:
		TEST_METHOD(segmentar_Encerar_Matriz_Test){
			Matriz m;
			m.setDim(2);
			m.segmentar();
			m.encerar();
			Assert::IsNotNull(m.getMatriz());
		}
		TEST_METHOD(calcular_Test) {
			Matriz m;
			m.setDim(2);
			m.segmentar();
			m.encerar();
			Matriz m1;
			m1.setDim(2);
			m1.segmentar();
			m1.encerar();
			Operaciones op;
			Assert::IsNotNull(op.calcular(m,m1).getMatriz());
		}
		TEST_METHOD(ingresar_Matriz_Test) {
			Matriz m;
			m.setDim(1);
			m.segmentar();
			m.encerar();
			Assert::IsNotNull(m.getMatriz());
		}
	};
}
