#include <iostream>
#include "Operaciones.h"
using namespace std;

int main()
{
    Operaciones op;
	double ang,num;
	cout << "Inserte el angulo: ";
	cin >> ang;
	cout.precision(4);
	double num2 = op.radian(ang);
	num = op.coseno(num2);
	cout << "El coseno del angulo insertado es :" << num << endl;
	return 0;

}



