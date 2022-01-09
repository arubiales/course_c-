#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_numeros();
void buscar_num();

int cantidad, *numeros, num;

int main(){

    pedir_numeros();
    buscar_num();

    delete[] numeros;

    return 0;
}

void pedir_numeros(){

    cout<<"Introduzca la cantidad de números a introducir: "; cin>>cantidad;

    numeros = new int[cantidad];

    for(int i=0; i<cantidad; i++){
        cout<<"Introduzca un número: "; cin>>*(numeros+i);
    }
}


void buscar_num(){
    bool band = false;

    cout<<"\nInrtroduzca un numero a buscar de su arreglo: "; cin>> num;

    for(int i = 0; i<cantidad; i++){
        if(*(numeros+i) == num){
            band = 'V';
        }
    }

    if(band == false){
        cout<<"\nEl número NO ha sido encontrado"<<endl;
    }
    else{
        cout<<"\nEl número ha sido encontrado"<<endl;
    }
}