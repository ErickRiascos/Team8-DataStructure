/***********************************************************************
 * Module:  Datos.h
 * Author:  Leo
 * Modified: jueves, 27 de mayo de 2021 19:18:23
 * Purpose: Declaration of the class Datos
 ***********************************************************************/
#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
template <typename Data>
class Datos
{
public:
	Datos() = default;
	Datos(Data datoA, Data datoB);
	Data getDatoA(void);
	void setDatoA(Data datoA);
	Data getDatoB(void);
	void setDatoB(Data datoB);
	~Datos();
private:
   Data dato1;
   Data dato2;
};
#endif
