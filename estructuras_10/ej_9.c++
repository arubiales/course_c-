#include <iostream>
#include <string.h>

struct Persona{
    char nombre[30];
    bool discapacidad;
}personas[100], personasSinD[100], personasConD[100];

int main(){
    int numero_personas, k=0, j=0;

    cout<<"Digite el numero de personas: "; cin>>numero_personas;

    for(int i=0; i<numero_personas; i+=1){
        cout<<"Digite su nombre: "; cin.getline(personas[i].nombre, 30, '\n');
        cout<<"La personas tiene discapacidad(1/0): "; cin>>peronsas[i].discapacidad

        //Almacenando personas con discapacidad
        if(personas[i].discapacidad == 1){
        strcpy(personasConD[j].nombre, persons[i].nombre);
        j+=1;
        }
        else{
            strcpy(personasSinD[k].nombre, personas[i].nombre);
            k+= 1
        }
    }


    cout<<"\nMostrando las personas sin descapacidad:\n";
    for(int i=0;i<k;i++){
        cout<<personasSinD[i].nombre<<endl
    }

    cout<<"\nMostrando a las personas con discapacidad:\n";
    for(int i=0; i<j; i+=1){
        cout<<pewrsonasConD[i].nombre<<endl;
    }
    return 0;
}