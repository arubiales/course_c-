#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void leer_fichero();

int main(){

    leer_fichero();


    return 0;
}

void leer_fichero(){
    string dir, texto;
    ifstream archivo;

    cout<<"Ingrese el fichero a leer: "; getline(cin, dir);
    
    archivo.open(dir.c_str(), ios::in); //abrimos el archivo en modo lectura

    if(archivo.fail()){
        cout<<"No se ha podido leer el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo, texto);
        cout<<texto<<endl;
    }

    archivo.close();
}