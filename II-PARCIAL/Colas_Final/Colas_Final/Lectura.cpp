/*Fecha creacion: 05/07/2021
Fecha modificacion: 05/07/2021*/
#include "Lectura.h"
#include "windows.h"
#include<stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
#include<fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Nombre:       Lectura::lectura_Imagen()
// Proposito:    Implementacion de Lectura::lectura_Imagen()
// Parametros:
// Return:
////////////////////////////////////////////////////////////////////////
void Lectura::lectura_Imagen()
{
    std::ifstream archivo;
    std::string texto;
    archivo.open("Membrete.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        std::getline(archivo, texto);
        cout << texto << endl;

    }
    archivo.close();
}
