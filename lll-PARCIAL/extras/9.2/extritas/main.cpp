#pragma warning(disable:4996)
#include <algorithm>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include<conio.h>
#include <vector>


using namespace std;
void creararchivo();

int main()
{ 
    creararchivo();   
}

void creararchivo()
{
    FILE* fichero;
    char c;
    fichero = fopen("texto.txt", "rb");
    if (!fichero) {
        fclose(fichero);
        printf("No se puede abrir el fichero: %s\n", "texto.txt");
        return;
    }
    while (!feof(fichero)) {
        c = getc(fichero);
        printf("%c", c);
    }
    fclose(fichero);
}


