#include <iostream>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5};
    int i, dato;
    char band = 'F';

    dato = 4;

    //busqueda secuencial

    while((band == 'F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El número a buscar no existe en el arreglo";
    }
    else if(band == 'V'){
        cout<<"El número ha sido encontrado en la pos: " <<i-1;
    }

}