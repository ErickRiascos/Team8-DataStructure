#pragma once
#include "Nodo.h"
#include <iostream>
using namespace std;
Nodo::Nodo(std::string word, bool EOS)
{
    this->palabra = word;
    this->fin_palabra = EOS;
    for (uint32_t t = 0; t < 26; t++)
        this->hijo[t] = nullptr;
}

Nodo::Nodo()
{
    for (uint32_t t = 0; t < 26; t++)
        this->hijo[t] = nullptr;

    this->fin_palabra = false;
}

Nodo::~Nodo()
{
    for (uint32_t t = 0; t < 26; t++) {
        delete[] this->hijo[t];
        this->hijo[t] = nullptr;
    }
}


