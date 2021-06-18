/*Fecha creación: 03/05/2021
Fecha modificación: 17/06/2021 */
#pragma once

class Matriz
{
public:
	int** getMatriz(void);
	void setMatriz(int**);
	Matriz(int**);
	Matriz();
	~Matriz() = default;
private:
	int** matriz;
};
