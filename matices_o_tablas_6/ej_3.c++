#include<iostream>
 //Estas dos para crear números aleatorios
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int matriz[100][100],dato, nfilas, ncol, matriz_2[100][100];

    cout<<"Introduzca el número de filas: "; cin>>nfilas;
    cout<<"Digite el número de coluumas: "; cin>>ncol;

    srand(time(NULL)); //es algoq ue hay que poner para generar números aleatorios

    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            dato = 1+rand()%(100);
            matriz[i][j] = dato;
        }
    }

    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            matriz_2[i][j] = matriz[i][j];
            cout<<matriz_2[i][j];
        }
        cout<<"\n";
    }

    return 0;

}