#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_datos(int **);

int **puntero_matriz, nfilas, ncol; //esto es un puntero apuntando a otro puntero



int main(){

    pedir_datos();
    mostrar_datos(puntero_matriz);

    //LIBERAMOS LA MEMORIA DE LA MATRIZ
    for(int i=0; i<nfilas; i++){ //Liberamos las filas
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;


    return 0;
}

void pedir_datos(){
    cout<<"Introduzca el númerod de filas: "; cin>>nfilas;
    cout<<"Introduzca el número de columnas: "; cin>>ncol;

    puntero_matriz = new int*[nfilas]; //aquí le decimos que esto es un puntero
    for(int i=0;i<nfilas; i++){
        puntero_matriz[i] = new int[ncol]; //reservamos memoría para las columnas
    }

    cout<<"\nDigitando elementos de la matriz: ";
    
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Introduzca un número"; cin>>*(*(puntero_matriz +i)+j); 
        }
    }
}


void mostrar_datos(int **puntero_matriz){
    cout<<"Imprimiendo matriz"<<endl;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<endl;
    }
}