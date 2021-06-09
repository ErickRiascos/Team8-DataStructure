#include "pch.h"
#include "CppUnitTest.h"
#include"../Cubo Magico/Vector.h"
#include"../Cubo Magico/Vector.cpp"
#include"../Cubo Magico/Cubo.h"
#include"../Cubo Magico/Cubo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CuboMagicoTest
{
	TEST_CLASS(CuboMagicoTest)
	{
	public:
		TEST_METHOD(segmentarVectorTest)
		{
			Vector v(2);
			v.segmentar();
			Assert::IsNotNull(v.getNumeros());
		}
		TEST_METHOD(paresVectorTest)
		{
			Vector v(2);
			v.segmentar();
			Assert::IsNotNull(v.calcularPares());
		}
		TEST_METHOD(imparesVectorTest)
		{
			Vector v(2);
			Assert::IsNotNull(v.calcularImpares());
		}
		TEST_METHOD(ordenarVectorTest)
		{
			Vector v(2);
			v.segmentar();
			v.ordenar();
			Assert::IsNotNull(v.getNumeros());
		}
		TEST_METHOD(sumaVectorTest)
		{
			Vector v(2);
			v.segmentar();
			Assert::AreEqual(v.calcularSuma(), 0);
		}
		TEST_METHOD(segmentarCuboTest)
		{
			Vector v(9);
			v.segmentar();
			Cubo c(v);
			c.segmentar();
			Assert::AreEqual(*(*(c.getCubo()+0)+0), 0);
		}
		TEST_METHOD(llenarCuboTest)
		{
			Vector v(9);
			v.segmentar();
			Cubo c(v);
			c.segmentar();
			c.llenar();
			Assert::AreEqual(*(*(c.getCubo() + 0) + 0), 0);
		}
	};
}
