#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<string>
#include<stack>
#include<math.h>

using namespace std;

stack<char> op;
stack<double> res;

char line[1001];

/// Convertir un rango de char* a entero
int convert(int a, int b) {

    double n = 0;

    for(int i=a; i<b; i++) {
        n *= 10;
        n += line[i] - '0';
    }
	printf("\n%f n",n);
	printf("\n%f a",a);
	printf("\n%f b",b);
	
    return n;

}

bool isop(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='%' || c=='s';
}

/// Precedencia de los operadores
int prec(char s) {
	if(s=='s')
        return 4;
    if(s=='^')
        return 3;
    if(s=='*' || s=='/' || s=='%')
        return 2;
    if(s=='+' || s=='-')
        return 1;
    return 0;
}

int sq(int x) {
    return x*x;
}

int pot(int b, int e) {
    if(e==0)
        return 1;
    if(e==1)
        return b;
    if(e%2==0)
        return sq(pot(b, e/2));
    return b * pot(b, e-1);
}

void solve(char o) {

    /// Extraemos los dos valores y
    /// guardamos el resultado en dependencia
    /// del operador.
    double b, a;

    b = res.top();
    res.pop();
	printf("b:%f",b);
	if(o!='s'){
		a = res.top();
    	res.pop();
    	printf("\na:%f",a);
	}
    
    if(o == '+')
        res.push(a + b);
    else if(o == '-')
        res.push(a - b);
    else if(o == '*')
        res.push(a * b);
    else if(o == '/') {
        if(b == 0) {
            printf("ERROR. DIVISION POR CERO\n");
            exit(0);
        }
        res.push(a / b);
    } else if(o == '^')
        res.push(pot(a, b));
    else if(o == '%') {
        if(b == 0) {
            printf("ERROR. MODULO INDEFINIDO\n");
            exit(0);
        }
        res.push(int(a) % int(b));
    }
    else if(o == 's') {
    	printf("ENTRO A S, %f\n", sin(b*3.1415/180));
        res.push(sin(b));
    }

    /// Eliminamos el operador de la cola.
    op.pop();

}
//con este de aca opera esta vaina
void decode() {

    int len = strlen(line);

    /// Agregamos el parentesis al final
    line[len++] = ')';
    line[len] = '\0';

    /// Guardamos el ( en op
    op.push('(');
    /// Recorremos la expresion analizando cada caso
    /// por separado
    for(int i=0; i<len; i++){
		printf("\n Line:%c, POS:%d\n",line[i], i);
		if(line[i] == ' ')
            continue;
        else if(line[i]=='(')
            op.push('(');
        else if(line[i]==')') {
	 	
            while(1) {
                if(op.top()=='(') {
                    op.pop();
                    break;
                }
                solve(op.top());
            }

        } else if(isdigit(line[i])) {

            /// Insertamos un numero

            int j=i+1;

            for(; j<len; j++)
                if(!isdigit(line[j]))
                    break;

            res.push(convert(i, j));

			i=j-1;

        } else if(isop(line[i])) {

            /// Insertamos un operador
            op.push(line[i]);
			printf("\n char:%c, %c, pos grl: %d\n",op.top(), line[i], i);
            while(prec(op.top()) >= prec(line[i])){
            	printf("\n char:%c, %c, pos: %d\n",op.top(), line[i], i);
                solve(op.top());
			}

        }
	}
    /// Mostramos el resultado

    printf("RESP%f\n", res.top());

    res.pop();

}

int main() {

    /// Leer la expresion
    gets(line);

    /// Interpretarla y dar el resultado
    decode();

    return 0;

}

