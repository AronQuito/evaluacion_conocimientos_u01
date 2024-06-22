#include <iostream>
using namespace std;
int main(){
    int op1,op2,r;
    char op;
    cout<<"Calculadora!"<<endl;
    cout<<"Introduce los numeros a operar y el operador [numero 1, operador , numero 2 ]: "; cin>>op1>>op>>op2; // introducir 2 operadores y op (la operacion)
    switch (op){
    case '+':
        r=op1+op2;
        break;
    case '-':
        r= op1-op2;
        break;
    case '*':
        r=op1*op2;
        break;
    case '/':
        r=op1/op2;
        break;
    default:
        cout<<"Valor desconocido"<<endl;
        r=0;
        break;
    }

    cout<<"La respuesta es: "<<r; // respuesta

    return 0;
}