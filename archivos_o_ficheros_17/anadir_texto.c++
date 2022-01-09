#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>

using namespace std;

void anadir();

int main(){

    anadir();

    return 0;
}

void anadir(){
    ofstream archivo;   
    string texto;

    archivo.open("programacion.txt", ios::app); //con ios::app abrimos el archivo y añadimos texto

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"Introduzca el texto que quiere anadir: "; getline(cin, texto);

    archivo<<texto<<endl;

    archivo.close(); //Cerramos el archivo
}