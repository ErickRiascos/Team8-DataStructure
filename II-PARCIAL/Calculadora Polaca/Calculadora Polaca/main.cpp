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
        if ((c >= '0' && c <= '9')|| c== 32|| (c >= 42 && c <= 47&&c!=44&&c!=46)|| c==94|| c == 83 ||c == 115||c==99||c==67 || (c >= 108 && c <= 110) || (c >= 76 && c <= 78)|| c==116 ||c==84||c==37) {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}
int main() {
    bool a=true;
    while (a) {
        printf("---------------------------------- CALCULADORA POLACA ---------------------------------\n\n");
        printf(" Se recomienda usar esta nomeclatura para hacer uso de las funciones trigonometricas \n\n");
        printf("(s) -> Seno \n");
        printf("(c) -> Coseno \n");
        printf("(t) -> Tangente \n");
        printf("(m) -> Secante \n");
        printf("(n) -> Cosecante \n");
        printf("(l) -> Cotangente \n\n");
        char* exp = ingresarDoubl("Ingrese expresion en Postfija: ");
        /// Interpretarla y dar el resultado
        Calculadora polaca(exp);
        polaca.decode();
        char b;
        Pila<std::string> hist;
        hist.push(exp);
        std::cout << "\nDesea ingresar otra ves(S/N): ";
        std::cin >> b;
        if (b == 'n' || b == 'N')
            a = false;
        else
            system("CLS");
    }
    
    return 0;
}