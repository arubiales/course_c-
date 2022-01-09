#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3], *puntero_alumno;

void pedir_datos();
void calcular_mejor_promedio(Alumno *);
void clean_stdin();

int main(){
    pedir_datos();
    calcular_mejor_promedio(puntero_alumno);

    return 0;
}


void pedir_datos(){

    for(int i=0; i<3; i++){
        clean_stdin();
        cout<<"Ingrese el nombre del alumno: "; cin.getline((puntero_alumno+i)->nombre, 30, '\n');
        cout<<"Ingrese la edad del alumno: "; cin>>(puntero_alumno+i)->edad;
        cout<<"Ingrese el promedio: "; cin>>(puntero_alumno+i)->promedio;
        cout<<"\n";
    }
}

void calcular_mejor_promedio(Alumno *puntero_alumno){
    float mayor=0.0;
    int pos=0;

    for(int i=0; i<3; i++){
        if((puntero_alumno+i)->promedio > mayor){
            mayor = (puntero_alumno)->promedio;
            pos = i;
        }
    }

    cout<<"\nEl alumno con mejor promedio es: \n";
    cout<<"Nombre: "<<(puntero_alumno + pos)->nombre<<endl;
    cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;

}


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}