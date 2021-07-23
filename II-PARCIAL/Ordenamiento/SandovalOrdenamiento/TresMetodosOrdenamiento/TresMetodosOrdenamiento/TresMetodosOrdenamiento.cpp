#include <iostream>
#include "Lista_Arreglos.h"
#include "MetodosOrdenamiento.h"
using namespace std;
int main()
{
    Lista_Arreglos lista;
    Lista_Arreglos listaOrdenada;
    int dim = 500;
    MetodosOrdenamiento m;
    lista.generarListaIngresar(dim);
    cout << "\n";
    cout << "ListaGenerada:";
    lista.mostrar();
    cout << "\n\n";
    cout << "Lista Ordenada: ";
    //listaOrdenada = m.mezclaDirecta(lista);
    //listaOrdenada = m.algInsercion(lista , dim);
    listaOrdenada = m.algSeleccion(lista,dim);
    listaOrdenada.mostrar();

}