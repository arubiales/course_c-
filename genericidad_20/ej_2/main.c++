#include <iostream>
#include "Ordenar.h"


using namespace std;

template <typename T>

void pedir_datos(T *arreglo, int n){
    for(int i=0; i<n; i++){
        cout<<"Introduzca un número: "; cin>>arreglo[i];
        cin>>arreglo[i];
    }
}

template <typename T>
void mostrar_arreglo(T *arreglo, int n){
    for(int i=0; i<n; i++){
        cout<<arreglo[i]<<' '<<endl;
    }
}

int main(int argc, char** argv){
    int nElementos;

    cout<<"Introduzca la cantidad de elementos del arreglo: "; cin>>nElementos;

    int *elementos = new int[nElementos];

    pedir_datos(elementos, nElementos);

    cout<<"Ordenado ascendentemente"<<endl;
    ordenar_ascendente(elementos, nElementos);
    mostrar_arreglo(elementos, nElementos);

    cout<<"Ordenado descendentemente"<<endl;
    ordenar_descendente(elementos, nElementos);
    mostrar_arreglo(elementos, nElementos);
    
    delete[] elementos;
    return 0;
}