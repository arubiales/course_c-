#include <iostream>
#include <stdlib.h>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv){
    Alumno alumnos[4]; //Creación de un arreglo de objetos estáticos
    Alumno* alumnos2 = new Alumno[3]; //Creación dinámica de un arreglo de objetos dinámico

    for(int i=0; i<3; i++){
        (alumnos2+i)->pedirDatos();
        cout<<endl;
    }
s
    cout<<"Mostrando las notas: "<<endl;

    for(int i=0; i<3; i++){
        (alumnos2+i)->mostrarNotas();
        cout<<endl;
    }

    return 0;
}