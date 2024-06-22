#include <iostream>
using namespace std;
int main(){
    int op1,op2,r;
    char op;
    cin>>op1,op2,op; // introducir 2 operadores y op (la operacion)

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
    }

    cout<<"r"; // respuesta

    return 0;
}