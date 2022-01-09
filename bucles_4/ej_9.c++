#include <iostream>
using namespace std;

int main(){
    int n, resultado = 1;

    cout<<"Introduzca un número: "; cin>>n;

    for(int i=1; i<=n; i+=1){
        resultado *= i;
    }

    cout<<resultado<<endl;
}