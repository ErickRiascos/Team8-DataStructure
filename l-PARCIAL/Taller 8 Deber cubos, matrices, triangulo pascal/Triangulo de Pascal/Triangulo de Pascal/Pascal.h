/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Ibarra Deyvid
Triangulo de pascal
Fecha creaci�n : 07 / 06 / 2021
Fecha modificaci�n : 08 / 06 / 2021 */
#pragma once
class Pascal{
private:
	int fila ,n ,indice;
public:
	Pascal(int);
	Pascal() = default;
	int llenar_pos(int, int);
	void espacios_en_blanco(int );
	bool mostrar_pascal(int ,int ,int ,int ,bool);
	void triangulo_pascal(int);
	
};