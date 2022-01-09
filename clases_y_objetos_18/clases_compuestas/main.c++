#include<iostream>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv){
    Estudiante* estudiante1 = new Estudiante("34FG", 5.6, 56, "Calle La Gasca");

    estudiante1->mostrarDatos();

    return 0;
}