#include <iostream>
using namespace std;

int main(){
    int n, resultado = 0;

    cout<<"Introduzca un número: "; cin>>n;

    for(int i=1; i <n+1; i+=2){
        resultado += i;
        if((resultado == n) || (resultado > n)){
            resultado += (2*n)-1;
            break;
        }
    }

    cout<<resultado<<endl;
}