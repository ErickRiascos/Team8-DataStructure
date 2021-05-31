/***********************************************************************
 * Module:  Persona.h
 * Author:  Erick
 * Modified: lunes, 31 de mayo de 2021 10:20:54
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Fecha-Persona_Persona_h)
#define __Fecha-Persona_Persona_h

class Fecha;

class Persona
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   Persona(std::string _nombre, std::string _apellido, std::string _cedula);
   ~Persona();

   Fecha** fecha;

protected:
private:
   std::string nombre;
   std::string apellido;
   std::string cedula;


};

#endif
