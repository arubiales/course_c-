#include<iostream>

using namespace std;

int main(){
    int numeros[100][100], filas, columns;

    cout<<"Introduzca el número de filas: "; cin>>filas;
    cout<<"Introduzca el número de columnas: "; cin>>columns;

    //Bule for ANIDADO
    for(int i=0;i<filas;i+=1){
        for(int j=0;j<columns;j+=1){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]"; //mostramos la posición del elemento
            cin>>numeros[i][j]; //LO ALmacenamos
        }
    }

    //Mostrar la matriz con un bucle anidado
    for(int i=0;i<filas;i+=1){
        for(int j=0;j<columns;j+=1){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}