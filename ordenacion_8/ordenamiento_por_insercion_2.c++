#include <iostream>

using namespace std;


int main(){
    int numeros[9] = {1,6,9,3,4,5,2,7,8}, i, pos, aux;

    //algoritmo de ordenamiento por insercción
    for(i=0; i<9; i+=1){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos-=1;
        }
        numeros[pos] = aux;
    }

    cout<<"Orden ascendente: ";
    for(i=0;i<9;i+=1){
        cout<<numeros[i]<<' ';
    }

    
    cout<<"\nOrden descendente: ";

    for(i=8; i>=0; i-=1){
        cout<<numeros[i]<<' ';
    }

    return 0;
}