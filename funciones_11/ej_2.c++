#include<iostream>

using namespace std;


void pedirDato();
void al_cuadrado(float n);

float n1;

int main(){
    pedirDato();
    al_cuadrado(n1);

    return 0;
}

void pedirDato(){
    cout<<"Ingrese un número: "; cin>> n1;
}

void al_cuadrado(float n){
    cout<<n*n<<endl;
}