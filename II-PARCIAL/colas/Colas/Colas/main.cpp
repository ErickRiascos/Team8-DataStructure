#pragma once
#include "Cliente.h"
#include "Cola.h"
int main(int argc, char** argv) {
	Cola d;
	d.generarClientes(30);
	d.mostrar();
}