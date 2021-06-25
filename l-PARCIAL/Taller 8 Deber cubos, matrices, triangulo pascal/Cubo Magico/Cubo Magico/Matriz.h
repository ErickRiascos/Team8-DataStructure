/* Fecha creación : 31 / 05 / 2021
Fecha modificación : 24 / 06 / 2021 */
#pragma once
class Matriz
{
private:
	int** matriz;

public:
	Matriz() = default;
	int** get_matriz();
	void set_matriz(int**);
};