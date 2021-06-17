#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OperacionesTest
{
	TEST_CLASS(OperacionesTest){
	public:
		
		TEST_METHOD(ope_test){
			int a = 1;
			Assert::AreEqual(1, a);
		}
	};
}
