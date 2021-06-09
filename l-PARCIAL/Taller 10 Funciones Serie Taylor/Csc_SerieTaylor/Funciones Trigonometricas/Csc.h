/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores:  Riascos Erick
Csc Serie de Taylor
Fecha creación: 05/05/2021
Fecha modificación: 05/05/2021*/
#pragma once
class Csc{
private:
	int n;
	double x;
public:
	Csc(double);
	Csc() = default;
	double calcular();
	double factorial(int);
	void gradARad();
	void setAngulo(double);
	double getAngulo();
};

