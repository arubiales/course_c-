//Archivos binarios

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribir();
void leer();

//En los archivos binarios, los strings dan problemas
struct Registro {
    char nombre[20];
    char apellido[20];
};

int main(){

    escribir();
    leer();

    return 0;
}

void escribir(){
    ofstream archivoB;
    Registro persona;

    archivoB.open("prueba.dat", ios::out | ios::binary); //Creamos un archivo de tipo binario

    if(archivoB.fail()){
        cout<<"No se puede crear el archivo";
        exit(1);
    }

    cout<<"Pidiendo datos"<<endl;
    cout<<"Introduzca un nombre: "; cin.getline(persona.nombre, 20, '\n'); //En los archivos binarios, los strings dan problemas
    cout<<"Digite un apellido: "; cin.getline(persona.apellido, 20, '\n');
    
    //escribimos en nuestroa archivo binario
    archivoB.write((char *)&persona, sizeof(Registro));

    archivoB.close();
}

void leer(){
    ifstream archivoB;
    Registro persona;

    archivoB.open("prueba.dat", ios::in | ios::binary);

    if(archivoB.fail()){
        cout<<"No se puede abrir el archivo";
        exit(1);
    }

    archivoB.read((char * )&persona, sizeof(Registro));

    cout<<"\n\nMostrando los datos leidos"<<endl;
    cout<<"Nombre: "<<persona.nombre<<endl;
    cout<<"Apellido: "<<persona.apellido<<endl;

    archivoB.close();  
}