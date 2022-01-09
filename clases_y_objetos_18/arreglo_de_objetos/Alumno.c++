#include<iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
    cout<<"Digite la calificación de matemáticas: "; cin>>calMate;
    cout<<"Digite la calificación de Programación: "; cin>>calProgra;

}

void Alumno::mostrarNotas(){
    cout<<"Nota de matemáticas: "<<calMate<<endl;
    cout<<"Nota de programación: "<<calProgra<<endl;
    cout<<"Promedio: "<<(calMate+calProgra)/2<<endl;
    }