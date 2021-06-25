/*Fecha creación: 03/05/2021
Fecha modificación: 24/06/2021 */
#pragma once
#include <exception>
template <class T>
class Matriz
{
private:
	T** matriz = nullptr;
	int tam;

public:
	Matriz(int tam);
	void setMatriz(T** matriz);
	T** getMatriz() const noexcept;
	int getTam() const noexcept;
	void liberar();
};

template <class T>
Matriz<T>::Matriz(int tam) : tam(tam)
{
	if (tam < 2)
	{
		throw std::runtime_error("INGRESE UN NUMERO MAYOR A 2: ");
	}
	matriz = (T**)std::calloc(tam, sizeof(T*));

	for (int i = 0; i < tam; ++i)
	{
		matriz[i] = (T*)std::calloc(tam, sizeof(T));
	}
}

template <class T>
void Matriz<T>::setMatriz(T** matriz2)
{
	for (int i = 0; i < tam; ++i)
	{
		for (int j = 0; j < tam; ++j)
		{
			*(*(matriz + i) + j) = *(*(matriz2 + i) + j);
		}
	}
}

template <class T>
T** Matriz<T>::getMatriz() const noexcept
{
	return matriz;
}

template <class T>
int Matriz<T>::getTam() const noexcept
{
	return tam;
}
template <class T>
void Matriz<T>::liberar()
{
	for (int i = 0; i < tam; i++)
	{
		std::cout << i << std::endl;
		liberar(matriz[i]);
	}
	liberar(matriz);
}