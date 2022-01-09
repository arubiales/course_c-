#include <iostream>
#include "Materia.h"

using namespace std;


int main(int argc, char** argv){
    Materia <int> obj1("Matematicas", 435, 4);
    Materia <float> obj2("Computacion", 5 , 5.87);
    Materia <char> obj3("Mierda", 4, 'B');

    cout<<"Mostrando el entero."<<endl;
    obj1.mostra_datos();
    cout<<endl;

    cout<<"\nMostrando el float"<<endl;
    obj2.mostra_datos();
    cout<<endl;

    cout<<"\nMostrando el char"<<endl;
    obj3.mostra_datos();
    cout<<endl;

    obj3.set_calificacion('A');

    cout<<"\nCambiamos calificación de B"<<endl;
    cout<<obj3.get_calificacion();

}