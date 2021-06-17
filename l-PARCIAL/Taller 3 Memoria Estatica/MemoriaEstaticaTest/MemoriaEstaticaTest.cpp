#include "pch.h"
#include "CppUnitTest.h"
#include "../Taller 3 Memoria Estatica/Operaciones.h"
#include "../Taller 3 Memoria Estatica/Operaciones.cpp"
#include "../Taller 3 Memoria Estatica/Vector.h"
#include "../Taller 3 Memoria Estatica/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MemoriaEstaticaTest
{
	TEST_CLASS(MemoriaEstaticaTest)
	{
	public:
		
		TEST_METHOD(encerarTest)
		{
			Operaciones o;
			o.encerar();
			Assert::AreEqual(o.getVec().getVect()[0],0);
		}
		TEST_METHOD(ingresarTest)
		{
			Operaciones o;
			o.encerar();
			o.ingresar();
			Assert::AreEqual(o.getVec().getVect()[0], 8);
		}
		TEST_METHOD(procesarTest)
		{
			Operaciones o;
			bool op=false;
			o.encerar();
			o.ingresar();
			if (o.procesar()>0) {
				op = true;
			}
			Assert::IsTrue(op);
		}

	};
}
