#include "pch.h"
#include "CppUnitTest.h"
#include "../Proyecto l Parcial/Fecha.cpp"
#include "../Proyecto l Parcial/Fecha.h"
#include "../Proyecto l Parcial/Lista.h"
#include "../Proyecto l Parcial/Lista.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProyectoTest
{
	TEST_CLASS(ProyectoTest)
	{
	public:
		TEST_METHOD(calcularDiaTest) {
			Fecha f(8, 06, 2021);
			Assert::AreEqual(f.calcularDia(), 2);
		}
		TEST_METHOD(calcularEdadTest) {
			Fecha inicio(9, 06, 2021);
			Fecha nacimiento(1, 9, 2001);
			Assert::AreEqual(nacimiento.calcularEdad(inicio), 19);
		}
		TEST_METHOD(imprimirDiaTest) {
			Fecha f(9, 06, 2021);
			char a[] = "Miercoles";
			for (int i = 0; i < 10; i++) {
				Assert::AreEqual(a[i], f.get_Dia()[i]);
			}
		}
		TEST_METHOD(listaVaciaTest) {

		}
		TEST_METHOD(insertar_PersonaTest) {
			Lista l;
			Fecha f(10,12,2002);
			Cedula cd(1719851527);
			Persona p((f),"Johan", "Godoy", "Solanda", "0998164369", 3600, 2019, 36, (cd));
			l.insertar_Persona(p);

		}
		TEST_METHOD(eliminar_PersonaTest) {
			Lista l;
			Fecha f(10, 12, 2002);
			Cedula cd(1719851527);
			Persona p2((f), "Johan", "Godoy", "Solanda", "0998164369", 3600, 2019, 36, (cd));
			l.eliminar_Persona(p2);
		}
		TEST_METHOD(generarCorreo) {

		}
		TEST_METHOD(calcularRepeticionesTest) {

		}
	};
}
