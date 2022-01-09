#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, resultado = 0;

    cout<<"Introduzca un número: "; cin>>n;

    for(int i=2; i<=n*2; i+=2){
        resultado += (i-1) - i;
    }

    cout<<resultado<<endl;

    return 0;
}