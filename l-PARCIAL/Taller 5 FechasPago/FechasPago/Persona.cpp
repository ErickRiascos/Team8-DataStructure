/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Godoy Johan, Ibarra Deyvid, Riascos Erick, Sandoval Leonardo
Taller 5 Fechas de Pago
Fecha creación: 1/6/2021
Fecha modificación: 1/6/2021*/
#include "Persona.h"
Persona::Persona(std::string _nombre, Fecha _fecha_Inicio,int _mes_Pago)
{
	this->nombre = _nombre;
	this->fecha_Inicio = _fecha_Inicio;
	this->mes_Pago = _mes_Pago;
}
Persona::~Persona()
{
}
Fecha* Persona::calcularPago()
{
	Fecha vec[100];
	for (int i = 0; i < mes_Pago; i++)
	{
		if (this->fecha_Inicio.calcularDia() == 0 || this->fecha_Inicio.calcularDia() == 6) {
			if (this->fecha_Inicio.calcularDia() == 0) {
				int n = fecha_Inicio.getDia() + 1;
				std::cout << "dia: " <<n<< std::endl;
				Fecha f(n, fecha_Inicio.getMes(), fecha_Inicio.getAnio());
				vec[i] = f;
				f.imprimirFecha();
			}else{
				Fecha f(fecha_Inicio.getDia() + 2, fecha_Inicio.getMes(), fecha_Inicio.getAnio());
				vec[i] = f;
			}
		}
		else {
			Fecha f(fecha_Inicio.getDia(), fecha_Inicio.getMes(), fecha_Inicio.getAnio());
			vec[i] = f;
		}
		
	}
		fecha_Inicio.setMes(fecha_Inicio.getMes() + 1);
		
	return vec;
}
