#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_matriz();
void trasponer(int **);
void mostrar();
void liberate_space();

int **matriz, **mtraspuesta, nfila, ncol;

int main(){

    pedir_matriz();
    trasponer(matriz);
    mostrar();
    liberate_space();

    return 0;
}


void pedir_matriz(){
    cout<<"Ingrese un tamaño de la matriz"; cin>>nfila>>ncol;

    matriz = new int*[nfila];
    mtraspuesta = new int*[nfila];

    for(int i=0; i<nfila; i++){
        matriz[i] = new int[ncol];
        mtraspuesta[i] = new int[ncol];
    }


    for(int i=0;i<nfila; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Ingrese un número: "; cin>> *(*(matriz+i)+j);
        }
    }
}


void trasponer(int **matriz){
    for(int i=0; i<nfila; i++){
        for(int j=0; j<ncol; j++){
            *(*(mtraspuesta+i)+j) = *(*(matriz + j)+i);
        }
    }
}

void mostrar(){
    for(int i=0; i<nfila; i++){
        for(int j=0; j<ncol; j++){
            cout<<*(*(mtraspuesta+i)+j)<<' ';
        }
        cout<<endl;
    }
}


void liberate_space(){

    for(int i=0; i<nfila; i++){
        delete[] matriz[i];
        delete[] mtraspuesta[i];
        }

    delete[] matriz;
    delete[] mtraspuesta;
    
    }

