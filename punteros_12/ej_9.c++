#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void sum_matrix(int **, int **);
void get_free_space();

int **puntero_matriz1, **puntero_matriz2, **resultado_suma, nfila, ncol;


int main(){

    pedir_datos();
    sum_matrix(puntero_matriz1, puntero_matriz2);
    get_free_space();

    return 0;
}

void pedir_datos(){

    cout<<"Introduzca el número de filas: "; cin>>nfila;
    cout<<"Introduzca el número de columnas: "; cin>>ncol;

    //Reservamos memoria
    puntero_matriz1 = new int*[nfila];
    puntero_matriz2 = new int*[nfila];
    resultado_suma = new int*[nfila];


    for(int i=0; i<nfila; i++){
        puntero_matriz1[i] = new int[ncol];
        puntero_matriz2[i] = new int[ncol];
        resultado_suma[i] = new int[ncol];
    }


    cout<<"Matriz 1"<<endl;

    for(int i=0; i<nfila; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Introduzca un número: ";
            cin>> *(*(puntero_matriz1 +i)+j);
        }
    }

    cout<<"Matriz 2"<<endl;

    for(int i=0; i<nfila; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Introduzca un número: ";
            cin>> *(*(puntero_matriz2 +i)+j);
        }
    }

}


void sum_matrix(int **puntero_matriz1, int **puntero_matriz2){
    
    for(int i=0; i<nfila; i++){
        for(int j=0; j<ncol; j++){
            *(*(resultado_suma + i)+j) = *(*(puntero_matriz1+i)+j) + *(*(puntero_matriz2+ i)+j);
            cout<<*(*(resultado_suma + i)+j)<<' ';
        }
        cout<<endl;
    }
}


void get_free_space(){

    for(int i=0; i<nfila; i+=1){
        delete[] puntero_matriz1[i];
        delete[] puntero_matriz2[i];
    }

    delete[] puntero_matriz1;
    delete[] puntero_matriz2;
}