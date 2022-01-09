#include <iostream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro", 20},
persona2 = {"Ruperto", 15};

int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;
}

