
#include "Matriz.h"

int** Matriz::getMatriz(void)
{
	return matriz;
}
void Matriz::setMatriz(int** matrix)
{
	matriz = matrix;
}
Matriz::Matriz(int** _matriz)
{
	this->matriz = _matriz;
}
Matriz::Matriz() {
}
