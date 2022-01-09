#include <iostream>

using namespace std;

//prototipo de funciones
void pedir_datos();
void funpot(int n, int exp);

int n, exp;

int main(){

    pedir_datos();
    funpot(n, exp);


    return 0;
}

void pedir_datos(){
    cout<<"Introduzca un número y el exponente al que quiera que sea elevado: "; cin>>n>>exp;
}

void funpot(int n, int exp){
    long resultado = 1;

    for(int i=1; i<=exp; i+=1){
        resultado *= n;
    }

    cout<<resultado<<endl;
}