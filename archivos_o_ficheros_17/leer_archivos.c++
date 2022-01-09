#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura();

int main(){

    lectura();
    return 0;
}

void lectura(){
    ifstream archivo; //creamos una variable tipo archivo
    string texto;

    //abrimos el archivo
    archivo.open("programacion.txt", ios::in);

    if(archivo.fail()){//si es true no se puede abrir el archivo
        cout<<"No se ha podido abrir";
        exit(1);
    }

    while(!archivo.eof()){ //mientras no se el final del archivo que siga recorriendo el archivo para leerlo
        getline(archivo, texto);
        cout<<texto<<endl;
    }

    archivo.close();
}