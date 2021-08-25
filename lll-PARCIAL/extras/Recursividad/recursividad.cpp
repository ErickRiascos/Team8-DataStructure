#include<iostream>
#include<cstdlib>
using namespace std;
 
long int potencia(int base,int i){
    if(i==0) 
		return 1;
    if(i==1) 
		return base;
    else 
		return base*potencia(base,i-1);
}
int main( void ){
    int b,i;
    cout<<" Calcular la Potencia de n "<<endl<<endl;
    cout<<" INGRESE BASE: ";
    cin>>b;
 
    do{
        cout<<" ingrese el exponente: ";
		cin>>i;
        if(i<0) cout<<"\ningrese un numero positivo... \n";
    }while(i<0);
    cout<<endl;
    cout<<"\n Base:"<<b;
    cout<<"\n Exp:"<<i;
    cout<<"\n\n el resultado es: "<<potencia(b,i)<<endl<<endl;
 
    return 0;
}
