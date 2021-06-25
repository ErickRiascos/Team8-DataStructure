/*Fecha creación : 27 / 05 / 2021
Fecha modificación : 24 / 06 / 2021*/
#pragma once
class Datoss{
public:

	double get_B(void);
	void set_B(double new_Value_B);
	int get_A(void);
	void set_A(int new_Value_A);
	float get_C(void);
	void set_C(int new_Value_C);
	Datoss() = default;
	Datoss(int new_Value_A, double new_Value_B, float new_Value_C);

	double suma(float A);	double suma(double B, float A);
	double suma(int C, double B, float A);

	double resta(double B, float A);
	double resta(int C, double B, float A);

	double multiplication(int A);
	double multiplication(double  A, int B);
	double multiplication(float  A, double B, int vC);

private:
	int A;
	double B;
	float C;
};
