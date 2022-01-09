#include<iostream>
#include "Vehiculo.h"

using namespace std;

int main(int argc, char** argv){
    Vehiculo* coches;
    string marca, modelo;
    float precio;
    int Nvehiculos, indice_barato;

    cout<<"Digite el número de vehiculos: "; cin>>Nvehiculos;

    coches = new Vehiculo[Nvehiculos];


    for(int i=0; i<Nvehiculos; i++){
        cout<<"\nDigite los datos del Vehiculo"<<(i+1)<<": "<<endl;
        cin.ignore(); //ESTO LIBERA TAMBÍEN LA MEMORIA EN EL BUFFER
        cout<<"Introduzca una marca: "; getline(cin, marca);
        cout<<"Introduzca el modelo: "; getline(cin, modelo);
        cout<<"Introduzca un precio: "; cin>>precio;

        coches[i] = Vehiculo(marca, modelo, precio);
    }

    indice_barato = Vehiculo::indiceMBarato(coches, Nvehiculos);

    cout<<"\nEl vehiculo más baratos es: "<<endl;
    (coches+indice_barato)->mostrar_datos();

    delete[] coches;

    return 0;
}