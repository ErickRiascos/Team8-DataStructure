#pragma warning(disable:4996)
#include "Marquesina.h"
#include <iostream>
Marquesina::Marquesina(std::string& a){
    banner = a;
}

std::string Marquesina::getBanner(){
    return banner.c_str();
}

void Marquesina::generarMarq()
{
    char* temp = (char*)calloc(strlen(banner.c_str()), sizeof(char));
    strcpy(temp, banner.c_str());
    banner.erase(0, 1);
    banner += *(temp + 0);   
}

