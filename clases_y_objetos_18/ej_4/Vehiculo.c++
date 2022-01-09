#include<iostream>
#include<iostream>
#include "Vehiculo.h"

using namespace std;

float Vehiculo::get_precio(){
    return precio;
}

void Vehiculo::mostrar_datos(){
    cout<<"Marca: "<<marca<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Precio: "<<precio<<endl;
    
}

int Vehiculo::indiceMBarato(Vehiculo coches[], int n){
    int indice = 0;
    float precio;

    precio = coches[0].get_precio();
    for(int i=1; i<n; i++){
        if(coches[i].get_precio() < precio){
            precio = coches[i].get_precio();
            indice = i;
        }
    }
    
    return indice;
}