#pragma once
#include<string>
class Nodo
{
private:
public:
	std::string palabra;
	bool fin_palabra;
	Nodo* hijo[26];
	Nodo(std::string, bool);
	Nodo();
	~Nodo();

};

