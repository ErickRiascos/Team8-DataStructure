#include "pch.h"
#include "CppUnitTest.h"
#include "../FechasPago/Fecha.h"
#include "../FechasPago/Persona.h"
#include "../FechasPago/Fecha.cpp"
#include "../FechasPago/Persona.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FechaTest
{
	TEST_CLASS(FechaTest)
	{
	public:
		
		TEST_METHOD(calcularDiaTest){
			Fecha f(8, 06, 2021);
			Assert::AreEqual(f.calcularDia(), 2);
		}
		TEST_METHOD(calcularPagoTest) {
			Fecha f(8, 06, 2021);
			Persona p("Erick",f,12);
			Assert::IsNotNull(p.calcularPago());
		}
	};
}
