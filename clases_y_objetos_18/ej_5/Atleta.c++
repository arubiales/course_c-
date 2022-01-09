#include <iostream>
#include "Atleta.h"

using namespace std;

float Atleta::get_tiempo_carrera(){
    return tiempo;
}

void Atleta::mostrar_datos(){
    cout<<"Nº Atleta: "<<numero;
    cout<<"Nombre: "<<nombre;
    cout<<"Tiempo: "<<tiempo;
}

int Atleta::mostrar_ganador(Atleta atletas[], int n){
    float tiempo_carrera;
    int indice = 0;

    tiempo_carrera = atletas[0].get_tiempo_carrera();

    for(int i=1; i<n; i++){
        if(atletas[i].get_tiempo_carrera() < tiempo_carrera){
            tiempo_carrera == atletas[i].get_tiempo_carrera();
            indice = i;
        }
    }

    return indice;
}
