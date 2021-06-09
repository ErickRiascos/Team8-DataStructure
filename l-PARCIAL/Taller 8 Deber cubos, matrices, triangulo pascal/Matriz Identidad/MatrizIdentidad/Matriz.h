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