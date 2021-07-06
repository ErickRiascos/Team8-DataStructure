#pragma once
#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include<conio.h>
#include "Calculadora.h"
int main() {
    std::cout << "Ingrese expresion en Postfija: ";
    char c;
    char* exp = (char*)calloc(100, sizeof(char));
    int i = 0;
    while ((c = getch()) != 13) {
        printf("%c", c);
        *(exp + i) = c;
        i++;
    }
    /// Interpretarla y dar el resultado
    Calculadora polaca(exp);
    polaca.decode();
    return 0;
}