/***********************************************************************
 * Module:  Fecha.h
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 10:20:54
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Fecha-Persona_Fecha_h)
#define __Fecha-Persona_Fecha_h

class Fecha
{
public:
   Fecha(int _dia, int _mes, int _anio, int Parameter_4);
   ~Fecha();
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif