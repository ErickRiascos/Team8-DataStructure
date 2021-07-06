#pragma warning (disable: 4996)
#include "Calculadora.h"

bool isop(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%' || c == 's';
}
/// Precedencia de los operadores
int prec(char s) {
    if (s == 's')
        return 4;
    if (s == '^')
        return 3;
    if (s == '*' || s == '/' || s == '%')
        return 2;
    if (s == '+' || s == '-')
        return 1;
    return 0;
}

int sq(int x) {
    return x * x;
}

int pot(int b, int e) {
    if (e == 0)
        return 1;
    if (e == 1)
        return b;
    if (e % 2 == 0)
        return sq(pot(b, e / 2));
    return b * pot(b, e - 1);
}

Calculadora::Calculadora(const char* exp)
{
    line = (char*)calloc(strlen(exp), sizeof(char));
    strcpy(line, exp);
}

int Calculadora::convert(int a, int b)
{
    double n = 0;
    for (int i = a; i < b; i++) {
        n += *(line+i) - '0';
    }
    return n;
}

void Calculadora::solve(char o)
{
    double b, a;
    b = res.top();
    res.pop();
    if (o != 's') {
        a = res.top();
        res.pop();
    }
    if (o == '+')
        res.push(a + b);
    else if (o == '-')
        res.push(a - b);
    else if (o == '*')
        res.push(a * b);
    else if (o == '/') {
        if (b == 0) {
            printf("ERROR. DIVISION POR CERO\n");
            exit(0);
        }
        res.push(a / b);
    }
    else if (o == '^')
        res.push(pot(a, b));
    else if (o == '%') {
        if (b == 0) {
            printf("ERROR. MODULO INDEFINIDO\n");
            exit(0);
        }
        res.push(int(a) % int(b));
    }
    else if (o == 's') {
        printf("ENTRO A S, %f\n", sin(b * 3.1415 / 180));
        res.push(sin(b));
    }
    op.pop();
}

void Calculadora::decode()
{
    int len = strlen(line);
    *(line + len++) = ')';
    *(line + len) = '\0';
    op.push('(');
    for (int i = 0; i < len; i++) {
        if (*(line + i) == ' ')
            continue;
        else if (*(line + i) == '(')
            op.push('(');
        else if (*(line + i) == ')') {
            while (1) {
                if (op.top() == '(') {
                    op.pop();
                    break;
                }
                solve(op.top());
            }
        }
        else if (isdigit(*(line+i))) {
            int j = i + 1;
            for (; j < len; j++)
                if (!isdigit(*(line + j)))
                    break;
            res.push(convert(i, j));
            i = j - 1;
        }
        else if (isop(*(line + i))) {
            op.push(*(line + i));
            while (prec(op.top()) >= prec(*(line+i))) {
                solve(op.top());
            }
        }
    }
    printf("\nResultado: %f", res.top());
    res.pop();
}
