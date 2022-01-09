#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int opt, num, resultado = 0;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. cubo de un número ";
    cout<<"2. Numero par o inpar ";
    cout<<"3. Salir ";
    cin>>opt;

    switch(opt){
        case 1:
            cout<<"\nIngrese un número: "; cin>>num;
            resultado = pow(num, 3);
            cout<<resultado; break;
        
        case 2:
            cout<<"\nIngrese un número: "; cin>>num;
            resultado = num % 2;
            if(resultado == 0){
                cout<<"El número es par: "<<endl; break;
            }
            else{
                cout<<"El número es impar: "<<endl; break;
            }
        case 3:
            cout<<"\nGracias por usar su cajero virtual"<<endl; break;
    }

    return 0;
}