#include<iostream>
#include "Perro.h"


using namespace std;

int main(int argc, char** argv){
    Perro perro1("Fido", "Doberman");

    perro1.mostrarDatos();
    perro1.jugar();

    //llamamos al destructor
    perro1.~Perro();

    Perro* perro2 = new Perro("Sasa", "Pitbull");
    cout<<endl;
    perro2->mostrarDatos();
    perro2->jugar();

    //Así destruimos un objeto dinámico.
    delete perro2
}