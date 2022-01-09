#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


#include <stdio.h>
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumnos[100];

int main(){
    float promedio_alumno[100], mayor = 0;
    int numero_alumnos, posM;

    cout<<"Digite el número de alumnos: "; cin>>numero_alumnos;

    for(int i=0; i<numero_alumnos; i+=1){
        clean_stdin();
        cout<<"Digite su nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<"Digite su sexo: "; cin.getline(alumnos[i].sexo, 10, '\n');
        cout<<"Digite su edad: "; cin>>alumnos[i].edad;

        cout<<"Pedimos las notas: ";
        cout<<"Digite la primera nota: "; cin>>alumnos[i].prom.nota1;
        cout<<"Digite la segunda nota: "; cin>>alumnos[i].prom.nota2;
        cout<<"Digite la tercera nota: "; cin>>alumnos[i].prom.nota3;

        //vamos a sacar el promedio

        promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        if(promedio_alumno[i] > mayor){
            mayor = promedio_alumno[i];
            posM = i;
        }
    }

    cout<<"\nMostrando los datos del alumno con mejor promedio"<<endl;
    cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
    cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
    cout<<"edad: "<<alumnos[posM].edad<<endl;
    cout<<"Promedio: "<<promedio_alumno[posM]<<endl;


    return 0;
}