/**************************
 * Headers
 **************************/
#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <cmath>
#include "pdf.h"
#include "Fecha.h"
#include "Lista.h"
#include "Persona.h"
#include <conio.h>
#include "convertidor.h"
 /**************************
  * Using Declarations
  **************************/

using std::ostringstream;
using std::ifstream;
using std::complex;
using std::cout;
using std::endl;
using std::ios;

/**************************
 * Local Functions
 **************************/


 // ---------------------------------------------------
 // Read 'fileName' and populate 'lines' with its
 // contents (on success, return true).  On error,
 // populate 'errMsg' and return false.
 // ---------------------------------------------------

static bool getLines(const string& fileName, vector<string>& lines, string& errMsg) {
    ifstream in;

    in.open(fileName.c_str(), ios::binary);

    if (!in)
    {
        errMsg = "Could not open: [" + fileName + "]";
        return(false);
    }

    string line = "";

    for (;;)
    {
        char c = (char)in.get();

        if (in.eof())
        {
            if (line != "")
                lines.push_back(line);

            break;
        }

        line += c;

        if (c == '\n')
        {
            lines.push_back(line);
            line = "";
        }
    }

    in.close();

    return(true);
}

// ---------------------------------------------------
// Draw 'theText' at: [x, y] (using the specified
// font and font size) with a box around it
// ---------------------------------------------------

static void drawBoundedText(const string& theText, int x, int y, PDF::Font theFont, int fontSize, PDF& p) {
    p.setFont(theFont, fontSize);

    p.showTextXY(theText, x, y);

    int width = PDF::stringWidth(
        theFont, fontSize, theText
    );

    int offset = (int)(0.4 * fontSize + 0.5);

    p.drawRect(x, y - offset, width, fontSize + offset);
}

// ---------------------------------------------------
// Demonstrate:
//
//    - text wrapping
//    - drawing and filling of circles and ellipses
//    - drawing and filling of rectangles and polygons
//    - drawing lines, using different line widths
//    - use of images
// ---------------------------------------------------



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
void unirInfo1(char* recive, const char* source)
{
    int k = strlen(recive);
    int j = strlen(source);
    int z = 0;
    for (int i = 0; i < j + 2; i++) {
        *(recive + k++) = *(source + z++);
    }
}

/**************************
 * Main
 **************************/

int main()
{
    bool op = true;
    Lista prs;
    int opc;
    do {
        std::cout << "\tMENU:\n1) Ingresar persona\n2) Mostrar personas\n3) Generar PDF\n4) Salir\nIngrese una opcion: ";
        std::cin >> opc;
        system("CLS");
        switch (opc) {
        case 1: {
            Fecha ini(atoi(ingresarNum("\nDia: ")), atoi(ingresarNum("\nMes: ")), atoi(ingresarNum("Ingrese fecha de inicio de pago...\nAnio: ")));
            Cedula ci;
            ci.ingresarCedula(ingresarNum("\nIngrese numero de cedula: "));
            Fecha nac(atoi(ingresarNum("\nDia: ")), atoi(ingresarNum("\nMes: ")), atoi(ingresarNum("\nIngrese fecha de nacimiendo...\nAnio: ")));
            if (ci.validarCedula() && nac.validaFecha() && ini.validaFecha()) {
                system("CLS");
                Persona p(nac, ingresarLet("\nIngrese nombres: "), ingresarLet("\nIngrese apellidos: "), ingresarLet("\nIngrese direccion: "), ingresarNum("\nIngrese telefono: "), atoi(ingresarNum("\nIngrese monto neto: ")), ini, atoi(ingresarNum("Ingrese la cantidad de meses diferidos: ")), ci);
                prs.insertar_Persona(p);
                std::cout << "\nPersona agregada exitosamente...\n";
                system("pause");
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
            system("pause");
            system("CLS");
            break;
        }
        case 2:
            prs.generarCorreo();
            prs.mostrar();
            std::cout << std::endl;
            system("pause");
            system("CLS");
            break;

        case 3: {
            creacion_PDF(prs.getPdf(), strlen(prs.getPdf()));
            system("pause");
            system("CLS");
            break;
        }
        case 4:
            op = false;
            break;
        default:
            std::cout << "\nIngrese una opcion valida...";
            system("pause");
            system("CLS");
            break;
        }

    } while (op);

    return 0;

}