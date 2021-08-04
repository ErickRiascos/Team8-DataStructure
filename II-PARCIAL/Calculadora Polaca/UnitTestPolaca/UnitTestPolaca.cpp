#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculadora Polaca/Calculadora.h"
#include "../Calculadora Polaca/Calculadora.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPolaca
{
	TEST_CLASS(UnitTestPolaca)
	{
	public:
		
		TEST_METHOD(converTest)
		{
			Calculadora c("2+5");
			Assert::AreEqual(2,c.convert(0,1));
		}
	};
}
