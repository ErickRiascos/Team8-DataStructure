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
			Matriz res;
			Matriz m;
			Matriz m1;
			Operacion op;
			res.encerar();
			m.encerar();
			m1.encerar();
			for (int i = 0;i < 10;i++) {
				for (int j = 0; j < 10;j++) {
					resul += op.multiplicarMatriz(m,m1).matriz[i][j];
				}
			}
			Assert::AreEqual(esperado, resul);
		};
	};
}

