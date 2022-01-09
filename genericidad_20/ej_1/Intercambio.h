#include <iostream>

using namespace std;


template <typename T1>

void intercambiar(T1 &dato1, T1 &dato2){
    T1 aux;
    aux = dato1;
    dato1 = dato2;
    dato2 = aux;

    cout<<"Ahora dato1 es: "<<dato1<<endl;
    cout<<"Y dato2 es: "<<dato2<<endl;
}