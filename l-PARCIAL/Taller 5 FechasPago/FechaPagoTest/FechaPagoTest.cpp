#include "pch.h"
#include "CppUnitTest.h"
#include "../FechasPago/Fecha.h"
#include "../FechasPago/Fecha.cpp"
#include "../FechasPago/Persona.h"
#include "../FechasPago/Persona.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FechaPagoTest
{
	TEST_CLASS(FechaPagoTest)
	{
	public:
		
		TEST_METHOD(calcular_Dia_Test)
		{
			Fecha f(03,06,2021);
			Assert::AreEqual(f.calcularDia(), 4);

		}
		TEST_METHOD(calcular_Pago_Test) {
			std::string name = "Erick";
			Fecha f(03,06,2021);
			Persona p(name,f,2);
			Assert::IsNotNull(p.calcularPago());
		}
	};
}
