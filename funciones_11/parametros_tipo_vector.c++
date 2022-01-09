#include <iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
    const int TAM = 5; //fijamos el tamaño del vector, siempre ha de tener 5 elementos, no puede variar
    int vec5[TAM] = {1,2,3,4,5};

    cuadrado(vec5, TAM);
    muestra(vec5, TAM);

    return 0;
}

void cuadrado(int vec[], int tam){
    for(int i=0; i<tam; i+=1){
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam){
    for(int i=0; i<tam; i+=1){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}