#include <iostream>

using namespace std;

void pedirVec();
void comprobar_orden(int vect[], int);

int vect[100], tam;

int main(){

    pedirVec();
    comprobar_orden(vect, tam);

    return 0;
}


void pedirVec(){
    cout<<"Indique el tamño del vector: "; cin>>tam;

    for(int i=0; i<tam; i+=1){
        cout<<"Ingrese un número: ";
        cin>>vect[i]; 
    }
}

void comprobar_orden(int vect[], int tam){
    char band='V';
    int i = 1;

    for(i; i<tam; i+=1){
        if(vect[i-1] > vect[i]){
            band = 'F';
        }
    }

    if(band == 'V'){
        cout<<"El vector está ordenado"<<endl;
    }
    else{
        cout<<"El vector NO está ordenado"<<endl;
    }
}