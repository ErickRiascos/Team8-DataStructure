#include "Operaciones.h"
#include <iostream>
using namespace std;
void Operaciones::mover_nodos_hijos(Nodo*& raiz, Nodo*& aux)
{
    raiz->fin_palabra = false;
    for (int i = 0; i < 26; i++) {
        if (raiz->hijo[i]) {
            aux->hijo[i] = raiz->hijo[i];

            raiz->hijo[i] = nullptr;
        }
    }
    return;
}

int Operaciones::get_posicion_corte(Nodo* aux, std::string key)
{
    int aux_1 = 0;
    while ((aux_1 < aux->palabra.length()) && (aux_1 < key.length()) && (aux->palabra[aux_1] == key[aux_1])) {
        ++aux_1;
    }
    return aux_1;
}

bool Operaciones::hoja_izquierda(Nodo* raiz)
{
    for (int i = 0; i < 26; i++) {
        if (raiz->hijo[i])
            return false;
    }
    return true;
}

Nodo* Operaciones::dividir_nodos(Nodo*& raiz, std::string izq, int pos)
{
    bool tieneHijo = false;
    if (!hoja_izquierda(raiz))
        tieneHijo = true;

    std::string der;
    int rI, lI;
    der = raiz->palabra.substr(pos);
    raiz->palabra = raiz->palabra.substr(0, pos);

    rI = der[0] - 'a';
    lI = izq[0] - 'a';
    Nodo* hijoIzq, * hijoDer;

    if (tieneHijo && !raiz->fin_palabra) {
        hijoIzq = new Nodo(izq, true);
        hijoDer = new Nodo(der, false);
    }
    else {
        hijoIzq = new Nodo(izq, true);
        hijoDer = new Nodo(der, true);
    }

    mover_nodos_hijos(raiz, hijoDer);

    raiz->hijo[lI] = hijoIzq;
    raiz->hijo[rI] = hijoDer;
    return raiz;
}

Nodo* Operaciones::insertar(std::string key, Nodo*& raiz)
{
    if (key.length() == 0)
        return raiz;

    Nodo* aux = raiz;
    int ind = key[0] - 'a';
    int pos;
    if (aux->hijo[ind]) {
        aux = aux->hijo[ind];
        pos = get_posicion_corte(aux, key);
        key = key.substr(pos);

        if (pos < aux->palabra.length()) {
            aux = dividir_nodos(aux, key, pos);
        }
        else {
            insertar(key, aux);
        }
        if (key.length() == 0)
            aux->fin_palabra = true;
    }
    else {
        aux->hijo[ind] = new Nodo(key, true);
    }
    return aux;
}

bool Operaciones::buscar(Nodo* raiz, std::string palabra)
{
    if (/*root->EOS &&*/ (sufijo == palabra))
        return true;

    if (hoja_izquierda(raiz))
        return false;

    for (int i = 0; i < 26; i++) {
        if (raiz->hijo[i]) {
            pos = sufijo.length();
            sufijo += raiz->hijo[i]->palabra;
            if (buscar(raiz->hijo[i], palabra))
                return true;
            sufijo = sufijo.substr(0, sufijo.length() - raiz->hijo[i]->palabra.length());
        }
    }
    return (/*root->EOS && */(sufijo == palabra));
}

void Operaciones::imprimir(Nodo* raiz)
{
    if (raiz->fin_palabra) {
        cout << suf << " ";
        cout << endl;
    }

    if (hoja_izquierda(raiz))
        return;

    for (int i = 0; i < 26; i++) {
        if (raiz->hijo[i]) {
            pos = suf.length();
            suf += raiz->hijo[i]->palabra;
            imprimir(raiz->hijo[i]);
            suf = suf.substr(0, suf.length() - raiz->hijo[i]->palabra.length());
        }
    }
    return;
}
