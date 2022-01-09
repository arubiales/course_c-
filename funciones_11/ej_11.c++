#include <iostream>

using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

int main(){

    pedirDatos();

    cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vec, tam)<<endl;

}

void pedirDatos(){
    cout<<"Digite el número de elemntos del vector: ";
    cin>>tam; 

    for(int i=0; i<tam; i+=1){
        cout<<i+1<<". Digite un número: "; 
        cin>>vec[i];
    }
}

int calcularSuma(int vec[], int tam){
    int suma;

    for(int i=0; i<tam; i+=1){
        suma += vec[i];
    }
    return suma;
} 