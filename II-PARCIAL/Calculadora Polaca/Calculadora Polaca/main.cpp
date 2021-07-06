#pragma once
#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include<conio.h>
#include "Calculadora.h"
char* ingresarDoubl(const char* msj)
{
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= '0' && c <= '9') || c == 46|| c== 32|| (c >= 42 && c <= 47)|| c==94|| c == 83 ||c == 115) {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}
int main() {
    char* exp = ingresarDoubl("Ingrese expresion en Postfija: ");
    /// Interpretarla y dar el resultado
    Calculadora polaca(exp);
    polaca.decode();
    return 0;
}