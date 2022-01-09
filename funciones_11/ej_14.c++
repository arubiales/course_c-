#include <iostream>

using namespace std;

void pedir_vector();
void print_impares(int vect[], int);

int vect[100], tam;

int main(){

    pedir_vector();
    print_impares(vect, tam);

    return 0;
}

void pedir_vector(){
    cout<<"Ingrese un tamaño de vector: "; cin>> tam;

    for(int i=0; i<tam; i+=1){
        cout<<"Ingrese un número: "; cin>>vect[i];
    }
}

void print_impares(int vect[], int tam){
    
    for(int i=0; i<tam; i+=1){
        if(vect[i]%2 != 0){
            cout<<vect[i]<<endl;
        }
    }
}