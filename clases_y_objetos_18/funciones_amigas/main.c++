#include<iostream>
#include "Personaje.h"

using namespace std;

//Función para modificar el ataque y defensa que son atributos privados
void modificar(Personaje &p, int at, int def){
    p.ataque = at;
    p.defensa = def;

}

int main(int agrc, char** argv){

    Personaje* principal = new Personaje(100,90);

    principal->mostrar_datos();

    modificar(*principal, 60, 50);

    cout<<endl;
    principal->mostrar_datos();
    
    return 0;
}