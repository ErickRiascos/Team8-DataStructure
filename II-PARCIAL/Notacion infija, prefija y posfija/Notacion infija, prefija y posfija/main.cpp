#pragma once
#pragma warning(disable : 4996)
#include<conio.h>
#include"Extras.h"
#include<stdlib.h>
#include <stdio.h>
#include "Pila.h"
#include <iostream>
#include "Nodo.h"
#include "Lista.h"
/*Validacion de datos algebraicos
@return char*
@parametros const char*
*/
char* ingresar(const char* msj)
{
    char* datos = (char*)calloc(30, sizeof(char));
    int i = 0;
    char c;
    printf("%s", msj);
    while ((c = getch()) != 13) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c == 61)||(c>=40&&c<=57)||(c==94)){
            printf("%c", c);
            *(datos + i++) = c;
        }
    }
    return datos;
}

int prioridad_infija(char a)
{
    if (a == '^')
        return 4;
    if (a == '*')
        return 2;
    if (a == '/')
        return 2;
    if (a == '+')
        return 1;
    if (a == '-')
        return 1;
    if (a == '(')
        return 5;
    if (a == ')')
        return 5;
}

int prioridad_pila(char a)
{
    if (a == '^')
        return 3;
    if (a == '*')
        return 2;
    if (a == '/')
        return 2;
    if (a == '+')
        return 1;
    if (a == '-')
        return 1;
    if (a == '(')
        return 0;
    if (a == ')')
        return 0;
}

const char* funcional(char a) {
    if (a == '^')
        return "POTENCIA(,)";
    if (a == '*')
        return "MULTIPLICACION(,)";
    if (a == '/')
        return "DIVISION(,)";
    if (a == '+')
        return "SUMA(,)";
    if (a == '-')
        return "RESTA(,)";
    if (a == ')')
        return ")";
}

bool esOperador(char a) {
    if (a == '+' || a == '-' || a == '*' || a == '/' || a == '^')
        return true;
    else 
        return false;
}

Lista insertarOperandos(Lista a,Nodo* b) {
    Nodo* aux=b;
    int k = 0;
    if (esOperador(aux->getValor())) {

        for (int i = 0; i < strtmn(funcional(aux->getValor())) - 2; i++) {
            a.insertarCabeza(*(funcional(aux->getValor()) + i));
        }
        if (esOperador(aux->getSiguiente()->getValor())) {
            a = insertarOperandos(a, aux->getSiguiente()); 
        }
        else {
            a.insertarCabeza(aux->getSiguiente()->getValor());
        }
        a.insertarCabeza(',');
        if (esOperador(aux->getSiguiente()->getSiguiente()->getValor())) {
            a=insertarOperandos(a, aux->getSiguiente()->getSiguiente());
        }
        else
        {
            a.insertarCabeza(aux->getSiguiente()->getSiguiente()->getValor());
        }
        a.insertarCabeza(')');
    }
    else {
        a.insertarCabeza(aux->getValor());
    }
    return a;    
}

char* invers(char* a) {
    int i = 0;
    int b = strtmn(a)-1;
    char* aux = (char*)calloc(strtmn(a) + 3, sizeof(char));
    while(*(a+i)!='\0') {
        *(aux + i) = *(a + b--);
        i++;
    }
    return aux;
}

/*Funcion principal main*/
int main() {
    Pila oper;
    Pila oper1;
    Lista post;
    Lista pre;
    char c;
    std::cout << "CONVERSION DE EXPRESIONES MATEMATICAS DE INFIJA A POSTFIJA Y PREFIJA\n\n";
    char* cad=ingresar("INGRESE EXPRESION INFIJA:");
    char* cad1 = invers(cad);
    /*NOTACION POSTFIJA*/
    for (int i = 0; i < strtmn(cad); i++)
    {
        if ((*(cad + i) >= 49 && *(cad + i) <= 57) || (*(cad + i) >= 97 && *(cad + i) <= 122)||(*(cad + i) >= 65 && *(cad + i) <= 90))//validado para numeros de 1-9 y letras
            post.insertarCabeza(*(cad+i));
        if (esOperador(*(cad + i)))
        {
            if (oper.pilaVacia())
                oper.apilar(*(cad + i));
            else
            {
                if (prioridad_infija(*(cad + i)) > prioridad_pila(oper.getPrimero()->getValor())) {//compara prioridad de operadores
                    oper.apilar(*(cad + i));
                }
                else
                {
                    if (prioridad_infija(*(cad + i)) == prioridad_pila(oper.getPrimero()->getValor())){
                        post.insertarCabeza(oper.desapilar());
                        oper.apilar(*(cad+i));
                    }
                    else
                    {
                        c = oper.desapilar();
                        while (true){
                            post.insertarCabeza(c);
                            c = oper.desapilar();
                            if (prioridad_pila(c) < prioridad_infija(*(cad + i))) {
                                if (oper.pilaVacia())
                                    break;
                                oper.apilar(c);
                                break;
                            }
                                                           
                        }
                        oper.apilar(*(cad + i));
                    }
                }
            }
        }
        if (*(cad+i)==')') {
            c = oper.desapilar();
            while (c != '(') {
                post.insertarCabeza(c);
                c = oper.desapilar();
            }
        }
        
    }
    while (oper.pilaVacia()!=true)//si es que la pila aun no esta nula pasamos los operadores a lista
    {
        c = oper.desapilar();
        post.insertarCabeza(c);
    }    
    std::cout << std::endl<<"NOTACION POSTFIJA: ";
    post.mostrar();
    std::cout << std::endl;

    /*NOTACION PREFIJA*/
    for (int i = 0; i < strtmn(cad1); i++)
    {
        if ((*(cad1 + i) >= 49 && *(cad1 + i) <= 57) || (*(cad1 + i) >= 97 && *(cad1 + i) <= 122) || (*(cad1 + i) >= 65 && *(cad1 + i) <= 90))//validado para numeros de 1-9 y letras
            pre.insertarCabeza(*(cad1 + i));
        if (esOperador(*(cad1 + i)))
        {
            if (oper1.pilaVacia())
                oper1.apilar(*(cad1 + i));
            else
            {
                
                if (prioridad_infija(*(cad1 + i)) > prioridad_pila(oper1.getPrimero()->getValor())) {//compara prioridad de operadores
                    oper1.apilar(*(cad1 + i));
                }
                else
                {
                    if (prioridad_infija(*(cad1 + i)) == prioridad_pila(oper1.getPrimero()->getValor())) {
                        oper1.apilar(*(cad1 + i));
                    }
                    else
                    {
                        c = oper1.desapilar();
                        while (true)
                        {                        
                            if (prioridad_pila(c) <= prioridad_infija(*(cad1 + i))) {
                                oper1.apilar(c);
                                break;
                            }                               
                            pre.insertarCabeza(c);                            
                            if (oper1.pilaVacia()) 
                                break;             
                            c = oper1.desapilar();
                        }
                        oper1.apilar(*(cad1 + i));
                        
                    }
                }
            }
        }
        if (*(cad1 + i) == '(') {
            c = oper1.desapilar();
            while (c != ')') {
                pre.insertarCabeza(c);
                c = oper1.desapilar();
            }
        }

    }
    while (oper1.pilaVacia() != true)//si es que la pila aun no esta nula pasamos los operadores a lista
    {
        c = oper1.desapilar();
        pre.insertarCabeza(c);
    }
    std::cout << std::endl << "NOTACION PREFIJA: ";
    Lista aux = pre.voltear();
    aux.mostrar();
    std::cout << std::endl;
    
    /*NOTACION FUNCIONAL*/
    Lista fun= insertarOperandos(fun, aux.getPrimero());    
    std::cout << std::endl << "NOTACION FUNCIONAL: ";
    fun.mostrar();
    std::cout << std::endl;
    return 0;
}