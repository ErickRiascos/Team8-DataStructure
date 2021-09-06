#pragma once
using namespace std;
template<typename T>
class Operacion
{
private:
public:
	T* dato;
	Operacion() = default;
	void set_operacion(T*);
	T* get_operacion();
	T* segment(int size);
};

template<typename T>
inline void Operacion<T>::set_operacion(T* _data)
{
	this->dato = _data;
}

template<typename T>
inline T* Operacion<T>::get_operacion()
{
	return dato;
}

template<typename T>
inline T* Operacion<T>::segment(int size)
{
	Operacion<T> operacion;
	operacion.set_operacion((T*)realloc(dato, (size + 1) * sizeof(T)));
	return operacion.get_operacion();
}