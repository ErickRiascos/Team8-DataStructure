#include "Marquesina.h"
#include <conio.h>
#include <stdio.h>

#include <string.h>
#include <iostream>
#include <windows.h>
char* Marquesina::getBanner()
{
    return banner;
}
void usleep(__int64 usec)
{
    HANDLE timer;
    LARGE_INTEGER ft;

    ft.QuadPart = -(10 * usec); // Convert to 100 nanosecond interval, negative value indicates relative time

    timer = CreateWaitableTimer(NULL, TRUE, NULL);
    SetWaitableTimer(timer, &ft, 0, NULL, NULL, 0);
    WaitForSingleObject(timer, INFINITE);
    CloseHandle(timer);
}
void Marquesina::generarMarq()
{
    unsigned short derecha, izquierda, repite, longitud;

    longitud = strlen(banner);

    for (repite = 1; repite <= 3; repite++)
    {
        for (derecha = 1; derecha <= longitud; derecha++)
        {
            gotoxy(derecha, 1);
            printf("\b ");
            printf("%s", banner);
            usleep(100000);

        }
        system("CLS");
        usleep(10000);

    }
}

void Marquesina::gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
