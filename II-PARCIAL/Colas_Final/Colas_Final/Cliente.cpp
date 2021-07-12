
#include "Cliente.h"
#include <iostream>

/**
 * La funci�n "max" realiza la entrada de datos maxima para los clientes 
 */
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

/**
 * La funci�n "Cliente" es el constructor para inicializar los datos del objeto 
 */
Cliente::Cliente(int id, int tl, int ts)
{
	this->identificador = id;
	this->tiempoLlegada = tl+rand()%25+1;
	this->tiempoEspera = max(ts,tiempoLlegada)-tiempoLlegada;
	this->tiempoNoTrabaja = max(ts, tiempoLlegada) -ts;
	this->tiempoServicio = rand() % 16 + 1;
	this->tiempoSalida = tiempoLlegada + tiempoEspera+tiempoServicio;
	this->tiempoEntreLlegadas =tiempoLlegada-tl ;
}


Cliente::~Cliente()
{
}

/**
 * La funci�n "getTiempoLlegada" retorna el valor del tiempo de llegada
 */
int Cliente::getTiempollegada(void)
{
   return tiempoLlegada;
}

/**
 * La funci�n "setTiempoLlegada" otroga el valor del tiempo de llegada
 */
void Cliente::setTiempollegada(int newTiempollegada)
{
   tiempoLlegada = newTiempollegada;
}

/**
 * La funci�n "getTiempoEspera" retorna el valor del tiempo de espera
 */
int Cliente::getTiempoEspera(void)
{
   return tiempoEspera;
}

/**
 * La funci�n "setTiempoEspera" otroga el valor del tiempo de espera
 */
void Cliente::setTiempoespera(int newTiempoespera)
{
   tiempoEspera = newTiempoespera;
}

/**
 * La funci�n "getTiempoNoTrabaja" retorna el valor del tiempo no trabajado
 */
int Cliente::getTiempoNoTrabaja(void)
{
   return tiempoNoTrabaja;
}

/**
 * La funci�n "setTiempoNoTrabajo" otroga el valor del tiempo no trabajado
 */
void Cliente::setTiempoNoTrabaja(int newTiempoNoTrabaja)
{
   tiempoNoTrabaja = newTiempoNoTrabaja;
}

/**
 * La funci�n "getTiempoServicio" retorna el valor del tiempo de Servicio
 */
int Cliente::getTiempoServicio(void)
{
   return tiempoServicio;
}

/**
 * La funci�n "setTiempoServicio" otroga el valor del tiempo de servicio
 */
void Cliente::setTiempoServicio(int newTiempoServicio)
{
   tiempoServicio = newTiempoServicio;
}

/**
 * La funci�n "getTiempoSalida" retorna el valor del tiempo de salida
 */
int Cliente::getTiempoSalida(void)
{
   return tiempoSalida;
}

/**
 * La funci�n "setTiempoSalida" otroga el valor del tiempo de salida
 */
void Cliente::setTiempoSalida(int newTiempoSalida)
{
   tiempoSalida = newTiempoSalida;
}

/**
 * La funci�n "getTiempoEntreLlegadas" retorna el valor del tiempo entre llegadas
 */
int Cliente::getTiempoEntreLLegadas(void)
{
   return tiempoEntreLlegadas;
}

/**
 * La funci�n "setTiempoEntreLlegadas" otroga el valor del tiempo entre llegadas
 */
void Cliente::setTiempoEntreLLegadas(int newTiempoEntreLLegadas)
{
   tiempoEntreLlegadas = newTiempoEntreLLegadas;
}

/**
 * La funci�n "getIdentificador" retorna el valor del identificador
 */
int Cliente::getIdentificador(void)
{
   return identificador;
}

/**
 * La funci�n "setIdentificador" otorga el valor del identificador
 */
void Cliente::setIdentificador(int newIdentificador)
{
   identificador = newIdentificador;
}

/**
 * La funci�n "toString" imprime los datos del Cliente
 */
void Cliente::toString() {
	std::cout<<"\n"<<identificador<<"\t"<< tiempoLlegada <<"\t"<< tiempoEspera <<"\t"<< tiempoNoTrabaja <<"\t"<< tiempoServicio <<"\t"<< tiempoSalida <<"\t"<< tiempoEntreLlegadas ;
}