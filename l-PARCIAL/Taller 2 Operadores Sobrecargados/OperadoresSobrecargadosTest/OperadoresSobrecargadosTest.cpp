#include "pch.h"
#include "CppUnitTest.h"
#include "../Taller 2/Operaciones.h"
#include "../Taller 2/Datos.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OperadoresSobrecargadosTest
{
	TEST_CLASS(OperadoresSobrecargadosTest)
	{
	public:
		template <typename Data>
		TEST_METHOD(operadorSuma1Test)
		{
			float d=1.0;
			float b=1.0;
			Datos<float> dato(b, d);
			Operaciones op(dato);
			float a = 2.0;
			float c = op.operator+();
			Assert::AreEqual(a,c);
		}
		template <typename Data>
		TEST_METHOD(operadorSuma2Test)
		{
			float b = 1.0;
			float d = 1.0;
			float e = 1.0;
			Datos<float> dato(b, e);
			Operaciones op(dato);
			float a = 3.0;
			float c = op.operator+(d);
			Assert::AreEqual(a, c);
		}	
		template <typename Data>
		TEST_METHOD(operadorRestar1Test)
		{
			float d = 1.0;
			float b = 1.0;
			Datos<float> dato(b, d);
			Operaciones op(dato);
			float a = 0;
			float c = op.operator-();
			Assert::AreEqual(a, c);
		}
		template <typename Data>
		TEST_METHOD(operadorRestar2Test)
		{
			float b = 3.0;
			float d = 1.0;
			float e = 1.0;
			Datos<float> dato(b, d);
			Operaciones op(dato);
			float a = 1.0;
			float c = op.operator-(e);
			Assert::AreEqual(a, c);
		}
		template <typename Data>
		TEST_METHOD(operadorDividirTest)
		{
			float b = 1.0;
			double d = 1.0;
			double e = 1.0;
			Datos<float> dato(b, d);
			Operaciones op(dato);
			float a = 1.0;
			float c = op.operator/(e);
			Assert::AreEqual(a, c);
		}
	};
}
