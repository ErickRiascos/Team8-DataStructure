#include "pch.h"
#include "CppUnitTest.h"
#include "../Multiplicacion de matrices/Operacion.h"
#include "../Multiplicacion de matrices/Operacion.cpp"
#include "../Multiplicacion de matrices/Matriz.h"
#include "../Multiplicacion de matrices/Matriz.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MultiplicacionTest
{
	TEST_CLASS(MultiplicacionTest)
	{
	public:
		TEST_METHOD(MultiplicacionMatricesTest) {
			int resul = 0;
			int esperado = 0;
			Matriz m;
			Matriz m1;
			Operacion op;
			m.encerar();
			m1.encerar();
			resul = op.multiplicarMatriz(m, m1).matriz[0][0];
			Assert::AreEqual(esperado, resul);
		};
	};
}

