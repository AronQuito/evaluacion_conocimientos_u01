#include <iostream>
using namespace std;
int main(){
    int n1,n2,c=0,i=1;
    cout<<"Calculadora de PESI! "<<endl;
    cout<<"Coloca los 2 numeros a evaluar: ";cin>>n1>>n2;
    while (i<=n1 && i<=n2){
        if (n1%i==0 && n2%i==0){
            c++;
        }
        if (c>1){
            i=n1;
        }
        i++;
    }
    if (c>1){
        cout<<"DICHOS NUMEROS NO SON PESI";
    }else{
        cout<<"DICHOS NUMEROS SON PESI";
    }
    
    return 0;
}