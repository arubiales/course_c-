#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void anadir();

int main(){

    anadir();

    return 0;
}

void anadir(){
    ofstream archivo;
    string file, texto;

    cout<<"Introduzca el nombre del archivo a abrir: "; getline(cin, file);

    archivo.open(file.c_str(), ios::app);

    if(archivo.fail()){
        cout<<"El archivo no se pudo abrir.";
        exit(1);
    }

    cout<<"Introduzca el texto que quiere anadir al archivo", getline(cin, texto);

    archivo<<texto;

    archivo.close();
}