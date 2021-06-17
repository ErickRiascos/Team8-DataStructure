#include "pch.h"
#include "CppUnitTest.h"
#include "../Taller 1 Operaciones Basicas/Operaciones.h"
#include "../Taller 1 Operaciones Basicas/Operaciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OperacionesBasicasTest
{
	TEST_CLASS(OperacionesBasicasTest)
	{
	public:
		
		TEST_METHOD(sumaTest)
		{
			Operaciones <int>op(1,1);
			Assert::AreEqual(op.suma(),2);
		}
		TEST_METHOD(restaTest)
		{
			Operaciones <int>op(1, 1);
			Assert::AreEqual(op.resta(), 0);
		}
		TEST_METHOD(divisionTest)
		{
			Operaciones <int>op(1, 1);
			Assert::AreEqual(op.division(), 1);
		}
		TEST_METHOD(multiplicacionTest)
		{
			Operaciones <int>op(1, 1);
			Assert::AreEqual(op.multiplicacion(), 1);
		}
	};
}
