#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;


int main(){
    ofstream archivo;
    string frase, nombre_archivo;
    char rpt;

    cout<<"Introduzca el nombre del archivo: "; getline(cin,nombre_archivo);
    cout<<"Introduzca el número de frases que quiere almacenar: "; cin>>num_frases;
    

    archivo.open(nombre_archivo.c_str(), ios::out);


    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    do{
        cout<<"Introduzca una frase: ";
        getline(cin, frase);
        archivo<<frase<<endl;

        cout<<"Desea agregar otra frase? (s/n): "; cin>>rpt;
    }while((rpt=='S') || (rpt=='s'));

    archivo.close();

    return 0;
}