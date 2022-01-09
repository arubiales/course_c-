#include <iostream>
#include <stdlib.h>

using namespace std;

//Prototipo de función
void pedir_dato();
void ordenar_arreglo(int *, int);
void mostrar_arreglo(int *, int);

int nElementos, *elemento;

int main(){
    pedirDatos();
    ordenar_arreglo(elemento, nElementos);
    mostrar_arreglo(elemento, nElementos);

    delete[] elemento; //liberamos memoria

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de elemntos del Arreglo: "; cin>>nElementos;

    elemento = new int[nElementos];
    
    for(int i=0;i<nElementos;i++){
        cout<<"Digite un número["<<i<<"]: "; cin>>*(elemento+i); // lo mismo que elemento[i]
    }
}

void ordenarArreglo(int *elemento; int nElementos){
    int aux; 

    for(int i=0; i<nElementos; i++){
        for(int j=0; j<nElementos-1; j++){
            if(*(elemento+j) > *(elemento+j+1)){
                aux = *(elemento +j);
                *(elemento+j) = *(elemento +j + 1);
                *(elemento + j + 1) = aux;
            }
        }
    }
}

void mostrar_arreglo(int *elemento; int nElementos){
    cout<<"\n \nMostrando arreglo ordenado: ";
    for(int i=0; i<nElementos; i++){
        cout<<*(elemento + i);
    }
}