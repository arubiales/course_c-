#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

void menu();
void escribirPulsacion();
void anadir_pulsacion();
void mostrar_pulsaciones();

struct Registro{
    float hora;
    int pulsaciones;
};

int main(){
    menu();

    return 0;
}

void menu(){
    int opcion;

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
        cout<<"2. Añadir más pulsaciones"<<endl;
        cout<<"3. Mostrar las pulsaciones registradas"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Eliga una opción: "; cin>>opcion;

        switch(opcion){
            case 1: escribirPulsacion();
                    break;
            case 2: anadir_pulsacion();
                    break;
            case 3: mostrar_pulsaciones();
                    break;
            case 4: break;
            defaul: cout<<"Se equivocó de opción de menu"<<endl;
        }
    }while(opcion!=4);
}

void escribirPulsacion(){
    ofstream archivoB;
    Registro pulso;

    archivoB.open("pulsaciones.dat", ios::out | ios::binary);

    if(archivoB.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
        exit(1);
    }

    cout<<"\nIntroduzca la hora:"; cin>>pulso.hora;
    cout<<"Digite la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(Registro));

    archivoB.close();

}

void anadir_pulsacion(){
    ofstream archivoB;
    Registro pulso;

    archivoB.open("pulsaciones.dat", ios::app | ios::binary);

    if(archivoB.fail()){
        cout<<"No se pudo crear el fichero";
        exit(1);
    }

    cout<<"\nIntroduzca la hora:"; cin>>pulso.hora;
    cout<<"Introduzca la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(Registro));
    archivoB.close();
}

void mostrar_pulsaciones(){
    ifstream archivoB;
    Registro pulso;

    archivoB.open("pulsaciones.dat", ios::in | ios::binary);

    if(archivoB.fail()){
        cout<<"No se puede crear el archivo"<<endl;
        exit(1);
    }

    while(!archivoB.eof()){ //mientras que no finalice de recorrer el archivo
        archivoB.read((char *)&pulso, sizeof(Registro));

        if(!archivoB.eof()){
            cout<<"Hora: "<<pulso.hora<<endl;
            cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
        } 
    }

    archivoB.close();

}