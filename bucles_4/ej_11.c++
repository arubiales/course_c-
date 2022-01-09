#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, resultado = 0;

    cout<<"Introduzca un número: "; cin>> n;

    for(int i=1; i<=n; i+=1){
        resultado += pow(2, i);
    }

    cout<<resultado<<endl;
}