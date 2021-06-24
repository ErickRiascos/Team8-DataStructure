#pragma once
#pragma warning(disable : 4996)
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<Windows.h>
#include "Cedula.h"
#include "Persona.h"
#include "Lista.h"

char* ingresarNum(const char* msj)
{
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}
char* ingresarLet(const char* msj)
{
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c == 32)) {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}
int main() {
    Lista prs;
    bool op=true;
    do {
        switch (atoi(ingresarNum("\t\tMenu\n1) Ingresar persona.\n2) Mostrar Datos.\n3) Salir.\nIngrese una opcion: "))) {
        case 1: {      
            Cedula ci;
            ci.ingresarCedula(ingresarNum("\nIngrese numero de cedula: "));    
            Persona p(ingresarLet("\nIngrese nombres: "), ingresarLet("\nIngrese apellidos: "), ci);
            prs.insertar_Persona(p);
            std::cout << "\nPersona agregada exitosamente...\n";
            system("pause");
            system("CLS");
            break;
        }
        case  2:
            prs.generarCorreo();
            prs.mostrar();
            system("pause");
            system("CLS");
            break;
        case 3:
            std::cout << "\nSaliendo...";
            op = false;
            break;
        }    
    }while (op);
}