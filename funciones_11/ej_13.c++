#include <iostream>

using namespace std;

void pedirNumeros();
void cambiarSigno(int vect[], int);

int vect[100], tam;


int main(){

    pedirNumeros();
    cambiarSigno(vect, tam);

    return 0;
}


void pedirNumeros(){
    cout<<"Ingrese el tamaño del vector: "; cin>>tam;

    for(int i=0; i<tam; i+=1){
        cout<<"Ingrese un número: "; cin>>vect[i];
    }
}


void cambiarSigno(int vect[], int tam){
    for(int i=0; i<tam; i+=1){
        if(vect[i] > 0){
            vect[i] = vect[i] - vect[i] * 2;
        }
        else{
            vect[i] = vect[i] + vect[i] * -2;
        }
    }

    for(int i=0; i<tam; i+=1){
        cout<<vect[i]<<endl;
    }
}