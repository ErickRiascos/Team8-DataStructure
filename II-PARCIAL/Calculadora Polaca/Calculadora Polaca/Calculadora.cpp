#pragma warning (disable: 4996)
#include <math.h>
#include "Calculadora.h"
#define PI 3.141559265358979323846
#define E  0.00001
int sq(int x) {
    return x * x;
}
//int pow(int b, int e) {
//    if (e == 0)
//        return 1;
//    if (e == 1)
//        return b;
//    if (e % 2 == 0)
//        return sq(pow(b, e / 2));
//    return b * pow(b, e - 1);
//}
double factorial(int n)
{
    double fac = 1;
    for (int i = 2; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
double sin(double x)
{
    int n = 100;
    double sumatoria = 0;
    for (int i = 0; i <= n; i++) {
        sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
    }
    return sumatoria;
}
double modulo(double numero)
{
    if (numero < 0)
    {
        return -1 * numero;
    }
    return numero;
}
double cos(double x)
{
    double num = 0;
    double num2 = 0;
    int i = 0;
    do
    {
        num2 = num;
        num += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        i++;
    } while (modulo(num - num2) >= E);
    return num;
}
double grados_to_radian(double x)
{
    double radian = 0;
    radian = x * (3.14159265358979323846 / 180);

    return radian;
}
double tan(double x)
{
    if (x != grados_to_radian(90)) {


        double sumatoria = 0;
        double num = 0;
        double num2 = 0;
        int i = 0;
        for (int i = 0; i < 100; i++) {
            sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
        }
        do
        {
            num2 = num;
            num += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
            i++;
        } while (modulo(num - num2) >= 0.00001);
        return sumatoria / num;
    }
    else
        std::cout << "La tangente no existe" << std::endl;

}
double csc(double x)
{
    int n = 100;
    double sumatoria = 0;
    for (int i = 0; i < n; i++) {
        sumatoria += (pow(-1, i) / factorial((2 * i) + 1)) * pow(x, (2 * i) + 1);
    }
    return 1 / sumatoria;
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
        n *= 10;
        n += *(line+i) - '0';
    }
    return n;
}
bool isop(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%' || c == 's'|| c == 'S' || c == 'c' || c == 'C' || c == 't' || c == 'T' || c == 'l' || c == 'L' || c == 'n' || c == 'N' || c == 'm' || c == 'M';
}
/// Precedencia de los operadores
int prec(char s) {
    if (s == 's'|| s == 'S' || s == 'c' || s == 'C' || s == 't' || s == 'T' || s == 'l' || s == 'L' || s == 'n' || s == 'N' || s == 'm' || s == 'M')
        return 4;
    if (s == '^')
        return 3;
    if (s == '*' || s == '/' || s == '%')
        return 2;
    if (s == '+' || s == '-')
        return 1;
    return 0;
}




void Calculadora::solve(char o)
{
   /// Extraemos los dos valores y
   /// guardamos el resultado en dependencia
   /// del operador.
    double b, a;
    b = res.top();
    res.pop();
    if (o != 's'&& o != 'S' && o != 'c' && o != 'C' && o != 't' && o != 'T' && o != 'l' && o != 'L' && o != 'n' && o != 'N' && o != 'm' && o != 'M') {
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
            printf("\nERROR. DIVISION POR CERO\n");
            exit(0);
        }
        res.push(a / b);
    }
    else if (o == '^')
        res.push(pow(a, b));
    else if (o == '%') {
        if (b == 0) {
            printf("\nERROR. MODULO INDEFINIDO\n");
            exit(0);
        }
        res.push(int(a) % int(b));
    }
    else if (o == 's'|| o=='S') {
        res.push(sin((b * PI)/ 180));
    }else if (o == 'c' || o == 'C') {
        res.push(cos((b * PI) / 180));
    }else if (o == 't' || o == 'T') {
        res.push(tan((b * PI) / 180));
    }else if (o == 'n' || o == 'N') {
        res.push(csc((b * PI) / 180));
    }
    op.pop();

    //falta cosecante y cotangente
    // no deja escribir las letras c, t y n
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
