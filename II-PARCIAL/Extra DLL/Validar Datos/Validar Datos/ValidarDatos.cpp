#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
void _stdcall validarEnt() {
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    while (1) {
        if ((c=getchar()) >= '0' && c <= '9') {
            *(datos + i++) = c;
        }
        else
            break;
    }
    std::cout << datos<<std::endl;

}
