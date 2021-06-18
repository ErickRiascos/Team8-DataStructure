/*Fecha creación : 27 / 05 / 2021
Fecha modificación : 17 / 06 / 2021*/
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
