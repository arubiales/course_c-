#include <iostream>

using namespace std;

void intercambio(float &x, float &y){
    float aux;
    
    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo){
    int i, j, central;
    float pivote;


    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do{
        while(a[i] < pivote) i+=1;
        while(a[j] > pivote) j-=1;

        if(i<=j){
            intercambio(a[i], a[j]);
            i+=1;
            i-=1;
        }
    }while(i<=j);

    if(primero < j){
        quickSort(a,primero, j); //ordenamos la sublista izquierda
    }
    if(i<ultimo){
        quickSort(a, i, ultimo); //ordenamos la sublista derecha
    }

}



int main(){
    float arreglo[] = {4,7,1,8,9,10,3,2,5,21};

    quickSort(arreglo, 0, 9);

    cout<<"Arreglo ordenado";

    for(int i=0; i<9; i+=1){
        cout<<arreglo[i]<<' ';
    }

    return 0;
}