#include "pch.h"
#include "CppUnitTest.h"
#include "../Triangulo de Pascal/Pascal.h"
#include "../Triangulo de Pascal/Pascal.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPascal
{
	TEST_CLASS(UnitTestPascal)
	{
	public:
		
		TEST_METHOD(llenarpos1)
		{
			Pascal a;
			Assert::AreEqual(a.llenar_pos(1, 1),1);
		}
		TEST_METHOD(espaciosBlancos)
		{
			Pascal a;
			Assert::IsTrue(a.mostrar_pascal(2, 3, 1, 0, true));
		}
	};
}
