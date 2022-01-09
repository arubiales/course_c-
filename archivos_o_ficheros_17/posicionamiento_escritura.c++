#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribir();
void leer();

int main(){
    escribir();
    leer();
    

    return 0;
}

//estas funciones solof funcionan con ofstream
void escribir(){
    ofstream archivo;

    archivo.open("posicion.txt", ios::out);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    
    //mostramos la posición actual en la que está el cursor en un archivo
    cout<<"Posición actual: "<<archivo.tellp()<<endl;

    archivo<<"Hola qué tal?";

    //Posicionamos el cursor en n
    archivo.seekp(5);
    archivo<<"Cómo estás?";
    cout<<"Posición actual: "<<archivo.tellp()<<endl;

    archivo.close();
}

//estas funciones solo funcionan con ifstream
void leer(){
    ifstream archivo;
    string linea;

    archivo.open("posicion.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    //Comenzamos la lectura desde la posición 5 del archivo
    archivo.seekg(5);
    cout<<"Posición actual cursor:"<<archivo.tellg()<<endl;
    getline(archivo, linea);

    cout<<linea<<endl;

    archivo.close();
}