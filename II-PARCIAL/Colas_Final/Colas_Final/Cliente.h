/***********************************************************************
 * Module:  Cliente.h
 * Author:  Usuario
 * Modified: martes, 6 de julio de 2021 19:21:32
 * Purpose: Declaration of the class Cliente
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Cliente_h)
#define __Class_Diagram_1_Cliente_h

class Cliente
{
public:
   Cliente(int, int, int );
   Cliente() = default;
   ~Cliente();
   int getTiempollegada(void);
   void setTiempollegada(int newTiempollegada);
   int getTiempoespera(void);
   void setTiempoespera(int newTiempoespera);
   int getTiempoNoTrabaja(void);
   void setTiempoNoTrabaja(int newTiempoNoTrabaja);
   int getTiempoServicio(void);
   void setTiempoServicio(int newTiempoServicio);
   int getTiempoSalida(void);
   void setTiempoSalida(int newTiempoSalida);
   int getTiempoEntreLLegadas(void);
   void setTiempoEntreLLegadas(int newTiempoEntreLLegadas);
   int getIdentificador(void);
   void setIdentificador(int newIdentificador);
   void toString();
protected:
private:
   int tiempoLlegada;
   int tiempoEspera;
   int tiempoNoTrabaja;
   int tiempoServicio;
   int tiempoSalida;
   int tiempoEntreLlegadas;
   int identificador;


};

#endif