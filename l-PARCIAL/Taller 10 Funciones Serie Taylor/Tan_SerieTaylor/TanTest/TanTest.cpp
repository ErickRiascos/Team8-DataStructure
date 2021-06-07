#include "pch.h"
#include "CppUnitTest.h"
#include "../Tan_SerieTaylor/Tangente.h"
#include "../Tan_SerieTaylor/Tangente.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TanTest
{
	TEST_CLASS(TanTest)
	{
	public:
		
		TEST_METHOD(factorial)
		{
			Tan x;
			Assert::AreEqual(x.factorial(1), 1.0);
		}

	

		TEST_METHOD(grados1)
		{
			Tan x;

			Assert::AreEqual(x.grados_to_radian(45), 3.14159265358979323846/4);
		}
	};
}
