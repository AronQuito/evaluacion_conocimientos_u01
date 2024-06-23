#include <iostream>
using namespace std;
float suma(int);
float factorial(int);
int main(){
    float sum;
    int n;
    cin>>n;
    sum=suma(n);
    cout<<sum;
    return 0;
}

float suma(int a){
    float s=0;
    for (int i = 1; i <= a; i++){
        s+=factorial(i)/(2*i);
    }
    return s;
}

float factorial(int b){
    int f=1;
    for (int i = 1; i <=b; i++){
        f*=i;
    }
    return f;
}