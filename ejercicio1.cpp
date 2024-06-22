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
        cout<<"La respuesta es: "<<r;
        break;
    case '-':
        r= op1-op2;
        cout<<"La respuesta es: "<<r;
        break;
    case '*':
        r=op1*op2;
        cout<<"La respuesta es: "<<r;
        break;
    case '/':
        if(op2!=0){
            r=op1/op2;
            cout<<"La respuesta es: "<<r;
        }else{
            cout<<"Valor indefinido ( numero 2 = 0 )";
        }
        break;
    default:
        cout<<"Valor desconocido";
        break;
    }

    return 0;
}