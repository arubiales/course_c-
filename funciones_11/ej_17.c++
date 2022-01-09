#include <iostream>

using namespace std;

struct Complejo{
    float real, imaginaria;
}z1, z2;

void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo x);

int main(){

    pedirDatos();

    Complejo x = suma(z1, z2);

    muestra(x);

    return 0;
}

void pedirDatos(){
    cout<<"Digite los datos para el primer número complejo: "<<endl;
    cout<<"Parte real: "; cin>>z1.real;
    cout<<"Parte imaginaria: "; cin>>z1.imaginaria;

    cout<<"\nDigite los datos para el segundo número complejo: "<<endl;
    cout<<"Parte Real: "; cin>>z2.real;
    cout<<"Parte imaginaria: "; cin>>z2.imaginaria;


}

Complejo suma(Complejo z1, Complejo z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}


void muestra(Complejo x){
    cout<<"\nResultado de la suma:"<<x.real<<" , "<<x.imaginaria<<endl;
}