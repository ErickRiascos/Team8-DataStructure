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

