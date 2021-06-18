#include "pch.h"
#include "CppUnitTest.h"
#include "../Seno_SerieTaylor/Seno.h"
#include "../Seno_SerieTaylor/Seno.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SenoUnitTest
{
	TEST_CLASS(SenoUnitTest)
	{
	public:
		
		TEST_METHOD(factorial_Test)
		{
			Seno s;
			int n=5;
			int v =s.factorial(n);
			Assert::AreNotEqual(v,0);
		}
		TEST_METHOD(grado_to_radian_Test)
		{
			Seno s;
			int n = 5;
			int v = s.factorial(n);
			double r = 90;
			int x = s.grados_to_radian(r);
			Assert::AreEqual(x, 1);
		}
	};
}
