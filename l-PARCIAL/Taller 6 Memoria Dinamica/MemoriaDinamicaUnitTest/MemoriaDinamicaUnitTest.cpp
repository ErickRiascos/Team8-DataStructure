#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MemoriaDinamicaUnitTest
{
	TEST_CLASS(MemoriaDinamicaUnitTest)
	{
	public:
		
		TEST_METHOD(segmentarMatriz){
			Matriz m;
			m.segmentar();			
		}
	};
}
