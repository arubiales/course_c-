#include <iostream>

using namespace std;

void mostrarMatriz(int m[][3], int,int); // C++ nos obliga a ponerle el número de columnas
void calcular_cuadrado(int m[][3], int, int);
void mostrar_matriz_elevada(int m[][3], int, int);

int main(){
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1,2,3}, {4,5,6}};

    mostrarMatriz(m, NFILAS, NCOL);
    calcular_cuadrado(m, NFILAS, NCOL);
    mostrarMatriz(m, NFILAS, NCOL);

    return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
    cout<<"Mostrando matriz origianl:\n";
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            cout<<m[i][j]<<" ";
        }
    cout<<"\n";
    }
}

void calcular_cuadrado(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            m[i][j] *= m[i][j];
        }
    }
}

void mostrar_matriz_elevada(int m[][3], int nfilas, int ncol){
    cout<<"\n\nMostrando matriz elevada al cuadrado:\n";
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; i+=1){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
}