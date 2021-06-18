#include "Persona.h"
////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(std::string _nombre, Fecha _fecha_Inicio,int _mes_Pago)
// Purpose:    Implementation de Persona::Persona()
// Parametros:
// - _nombre
// - _fecha_Inicio
// - _mes_Pago
// Return:    
////////////////////////////////////////////////////////////////////////
Persona::Persona(std::string _nombre, Fecha _fecha_Inicio,int _mes_Pago)
{
	this->nombre = _nombre;
	this->fecha_Inicio = _fecha_Inicio;
	this->mes_Pago = _mes_Pago;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation de Persona::~Persona()
// Parametros:
// Return:    
////////////////////////////////////////////////////////////////////////
Persona::~Persona()
{
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha* Persona::calcularPago()
// Purpose:    Implementation de Fecha* Persona::calcularPago()
// Parametros:
// Return:    vec
////////////////////////////////////////////////////////////////////////
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
