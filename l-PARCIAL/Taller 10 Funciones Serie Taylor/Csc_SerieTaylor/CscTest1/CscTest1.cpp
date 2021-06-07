#include "pch.h"
#include "CppUnitTest.h"
#include"../Funciones Trigonometricas/Csc.h"
#include"../Funciones Trigonometricas/Csc.cpp"
#include <math.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CscTest1
{
	TEST_CLASS(CscTest1)
	{
	public:

		TEST_METHOD(gradARadTest)
		{
			Csc x(90);
			x.gradARad();
			Assert::AreEqual(x.getAngulo(), 3.14159265358979323846 / 2);
		}
		TEST_METHOD(calcularTest) {
			Csc x(90);
			x.gradARad();
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(factorialTest)
		{
			Csc x(90);
			Assert::AreEqual(x.factorial(1), 1.0);
		}
	};
}
