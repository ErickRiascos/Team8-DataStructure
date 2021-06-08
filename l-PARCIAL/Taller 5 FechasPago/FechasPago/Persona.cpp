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
	Fecha *vec= (Fecha*)calloc(mes_Pago,sizeof(Fecha));
	Fecha aux=fecha_Inicio;
	for (int i = 0; i < mes_Pago; i++) {
		aux.setMes(aux.getMes() + 1);
		if (aux.calcularDia() == 0 || aux.calcularDia() == 6) {
			if (aux.calcularDia() == 0) {
				aux.setDia(fecha_Inicio.getDia() + 1);
				*(vec + i) = aux;
				aux.setDia(fecha_Inicio.getDia());
			}else{
				aux.setDia(fecha_Inicio.getDia() + 2);
				*(vec + i) = aux;
				aux.setDia(fecha_Inicio.getDia());
			}
		}
		else {
			*(vec + i) = aux;
		}
	}
	return vec;
}
