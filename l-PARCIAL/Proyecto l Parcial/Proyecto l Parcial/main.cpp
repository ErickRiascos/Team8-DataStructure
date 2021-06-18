#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include "Fecha.h"
#include "Lista.h"
#include "Persona.h"
#include <conio.h>
//Validacion de datos
char* ingresarLet(const char* msj)
{
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= 65 && c <= 90)||(c>=97&&c<=122)||(c==32)) {
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}
char* ingresarNum(const char* msj)
{
    char* datos=(char*)calloc(30,sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            *(datos+i++) = c;
        }
    }
    return datos;
}
//Funcion principal main
int main() {
    bool op = true;
	Lista prs;
    int opc;
    do {
        std::cout << "\tMENU:\n1) Ingresar persona\n2) Mostrar personas\n3) Salir\nIngrese una opcion: ";
        std::cin >> opc;
        system("CLS");
        switch (opc){
        case 1: {
            Fecha ini(atoi(ingresarNum("\nDia: ")), atoi(ingresarNum("\nMes: ")), atoi(ingresarNum("Ingrese fecha de inicio de pago...\nAnio: ")));
            Cedula ci;
            ci.ingresarCedula(ingresarNum("\nIngrese numero de cedula: "));
            Fecha nac(atoi(ingresarNum("\nDia: ")), atoi(ingresarNum("\nMes: ")), atoi(ingresarNum("\nIngrese fecha de nacimiendo...\nAnio: ")));
            if (ci.validarCedula() && nac.validaFecha() && ini.validaFecha()) {
                system("CLS");
                Persona p(nac, ingresarLet("\nIngrese nombres: "), ingresarLet("\nIngrese apellidos: "), ingresarLet("\nIngrese direccion: "), ingresarNum("\nIngrese telefono: "), atoi(ingresarNum("\nIngrese monto neto: ")), ini, atoi("\nIngrese la cantidad de meses diferidos"), ci);
                prs.insertar_Persona(p);
                system("CLS");
            }
            else {
                if (ci.validarCedula() == false)
                    std::cout << "\nIngrese una cedula valida...";
                if (nac.validaFecha() == false)
                    std::cout << "\nIngrese una fecha de nacimiento valida...";
                if (ini.validaFecha() == false)
                    std::cout << "\nIngrese una fecha de inicio valida...";
            }
            std::cout << "\nPersona agregada exitosamente...\n";
            system("pause");
            system("CLS");
            break;
        }
        case 2:
            prs.mostrar();
            system("pause");
            system("CLS");
            break;
        case 3:op = false;
            break;
        default:std::cout << "\nIngrese una opcion valida...";
            break;
        }
        
    } while (op);
    
    return 0;
}