#include <iostream>
using namespace std;


int main(){
    int edad;

    cout<<"\nDigite un número: "; cin>>edad;

    if((edad >= 18) && (edad <= 25)){
        cout<<"\nEdad dentro de rango"<<endl;
    }
    else{
        cout<<"\nEdad fuera de rango"<<endl;
    }
    
    return 0;
}