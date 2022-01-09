#include <iostream>
#include "Atleta.h"

using namespace std;

int main(int argc, char** argv){
    Atleta* participantes;
    int Natletas, numero, indice_ganador;
    string nombre;
    float tiempo;

    cout<<"Introduzca el número de participantes en la competición: "; cin>>Natletas;

    participantes = new Atleta[Natletas];

    for(int i=0; i<Natletas; i++){
        cout<<"Introduzca el número del atleta: "; cin>>numero;
        cin.ignore();
        cout<<"Introduzca el nombre del atleta: "; getline(cin, nombre);
        cout<<"Introduzca el tiempo del atleta: "; cin>>tiempo;

        participantes[i] = Atleta(numero, nombre, tiempo);
    }

    indice_ganador = Atleta::mostrar_ganador(participantes, Natletas);


    cout<<"El ganador es: "<<endl;
    (participantes+indice_ganador)->mostrar_datos();
    cout<<endl;

}