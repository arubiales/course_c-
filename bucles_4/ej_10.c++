#include <iostream>
using namespace std;


int main(){
    int n, factorial = 1, resultado = 0;

    cout<<"Introduzca un número: "; cin>>n;

    for(int i=1; i<=n; i+=1){
        factorial *= i;
        resultado += factorial;
    }

    cout<<resultado<<endl;
}