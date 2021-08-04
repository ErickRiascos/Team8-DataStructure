#include "pch.h"
#include "CppUnitTest.h"
#include "../Notacion infija, prefija y posfija/Extras.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestNotacion
{
	TEST_CLASS(UnitTestNotacion)
	{
	public:
		
		TEST_METHOD(prioridadPilaTest)
		{
			Assert::AreEqual(strtmn("Hola"), 4);
		}
	};
}
