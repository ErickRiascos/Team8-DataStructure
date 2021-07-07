
#include "Cliente.h"
#include <iostream>

int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
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
   // TODO : implement
}


int Cliente::getTiempollegada(void)
{
   return tiempoLlegada;
}


void Cliente::setTiempollegada(int newTiempollegada)
{
   tiempoLlegada = newTiempollegada;
}


int Cliente::getTiempoespera(void)
{
   return tiempoEspera;
}


void Cliente::setTiempoespera(int newTiempoespera)
{
   tiempoEspera = newTiempoespera;
}


int Cliente::getTiempoNoTrabaja(void)
{
   return tiempoNoTrabaja;
}


void Cliente::setTiempoNoTrabaja(int newTiempoNoTrabaja)
{
   tiempoNoTrabaja = newTiempoNoTrabaja;
}


int Cliente::getTiempoServicio(void)
{
   return tiempoServicio;
}


void Cliente::setTiempoServicio(int newTiempoServicio)
{
   tiempoServicio = newTiempoServicio;
}


int Cliente::getTiempoSalida(void)
{
   return tiempoSalida;
}


void Cliente::setTiempoSalida(int newTiempoSalida)
{
   tiempoSalida = newTiempoSalida;
}


int Cliente::getTiempoEntreLLegadas(void)
{
   return tiempoEntreLlegadas;
}


void Cliente::setTiempoEntreLLegadas(int newTiempoEntreLLegadas)
{
   tiempoEntreLlegadas = newTiempoEntreLLegadas;
}


int Cliente::getIdentificador(void)
{
   return identificador;
}


void Cliente::setIdentificador(int newIdentificador)
{
   identificador = newIdentificador;
}

void Cliente::toString() {
	std::cout <<identificador+1<< ". Tiempo de llegada: " << tiempoLlegada << ", Tiempo de espera: " << tiempoEspera << ", Tiempo que no trabaja el cajero: " << tiempoNoTrabaja << ", Tiempo de servicio: " << tiempoServicio << ", Tiempo de salida: " << tiempoSalida << ", Tiempo entre llegadas: " << tiempoEntreLlegadas ;
}