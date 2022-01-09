#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3, num4;

    cout<<"\nDigite 3 números: "; cin>>num1>>num2>>num3;
    cout<<"\nDigite un número para comparar si es igual a los anteriores: "; cin>>num4;

    if((num1 == num4) || (num2 == num4) || (num3 == num4)){
        cout<<"\nEl número cuatro coincide con alguno de los anteriores"<<endl;
    }
    else{
        cout<<"\nEl número cutrao NO coincide con ninguno de los anteriores"<<endl;
    }

    return 0;
}