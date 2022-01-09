#include <iostream>

using namespace std;

int main(){
    int numeros[5] = {3,2,1,5,4};
    int i, j, aux, min;

    for(i=0; i<5; i+=1){
        min = i; //suponemos que la primera posición es el número mínimo
        for(j=i+1; j<5; j+=1){
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i+=1){
        cout<<numeros[i]<<' ';
    }

    return 0;
}