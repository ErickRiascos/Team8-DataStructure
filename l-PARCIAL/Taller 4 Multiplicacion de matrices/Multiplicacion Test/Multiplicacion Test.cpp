#include "pch.h"
#include "CppUnitTest.h"


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
			for (int i = 0;i < 10;i++) {
				for (int j = 0; j < 10;j++) {
					m.matriz[i][j] = 0;
					m1.matriz[i][j] = 0;
				}
			}
			for (int i = 0;i < 10;i++) {
				for (int j = 0; j < 10;j++) {
					//resul += op.multiplicarMatriz(m,m1).matriz[i][j];
				}
			}
			Assert::AreEqual(esperado, resul);
		};
	};
}

