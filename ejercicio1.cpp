#include <iostream>
using namespace std;
int main(){
    int op1,op2,r,salir=0,opc;
    char op;
    do{
        system("cls");
        cout<<"Calculadora!"<<endl<<endl;
        cout<<"1) Operar"<<endl;
        cout<<"2) Salir"<<endl<<endl;
        cout<<"Introduce una opcion: "; cin>>opc;
        system("cls");
        switch (opc){
        case 1:
            cout<<"Introduce los numeros a operar y el operador [numero 1, operador , numero 2 ]: "; cin>>op1>>op>>op2; // introducir 2 operadores y op (la operacion)
            system("cls");
            switch (op){
            case '+':
                r=op1+op2;
                cout<<"La respuesta es: "<<r<<endl;
                system("pause");
                break;
            case '-':
                r= op1-op2;
                cout<<"La respuesta es: "<<r<<endl;
                system("pause");
                break;
            case '*':
                r=op1*op2;
                cout<<"La respuesta es: "<<r<<endl;
                system("pause");
                break;
            case '/':
                if(op2!=0){
                    r=op1/op2;
                    cout<<"La respuesta es: "<<r<<endl;
                    system("pause");
                }else{
                    cout<<"Valor indefinido ( numero 2 = 0 )"<<endl;
                    system("pause");
                }
                break;
            default:
                cout<<"Operador desconocido"<<endl;
                system("pause");
                break;
            }
            break;
        case 2:
            salir=1;
            cout<<"Gracias por usar el programa! "<<endl;
            system("pause");
            break;
        default:
            cout<<"Valor mal introducido"<<endl;
            system("pause");
            break;
        }
    } while (salir==0);
    
    return 0;
}