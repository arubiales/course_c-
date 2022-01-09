#include <iostream>


using namespace std;

int main(){
    int numeros[10] = {10,9,8,7,6, 1, 2,3,4,5}, i, j, aux;

    //algoritmo del método burbuja
    for(i=0; i<10; i+=1){
        for(j=0; j<10;j+=1){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    cout<<"Orden ascendente: ";
    for(i=0; i<10; i+=1){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    cout<<"Orden descendente: ";
    for(i=; i>=0;i-=1){
        cout<<numeros[i]<<" ";
    }



    return 0;
}