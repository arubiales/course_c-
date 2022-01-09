#include<iostream>
#include<stdlib.h>
#include<fstream> //para escribir texto

using namespace std;

void escribir();

int main(){

    escribir();

    return 0;
}

void escribir(){
    ofstream archivo; //este es el tipo de dato, y lo otro el nombre de la variable
    string nombreArchivo, frase;

    cout<<"Introduzca el nombre del archivo"; getline(cin, nombreArchivo); //aplicamos la función getline que es para string, distinta de la de char

    //con el método c_str() cogemos el texto.
    archivo.open(nombreArchivo.c_str(), ios::out);  //abrimos el archivo pero como no existe, lo va a crear, si existiese lo remplazaría. Aquí también se puede poner una ruta

    if(archivo.fail()){//esto envia un true o un false, si esto tiene un true, es que no se ha podido crear el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"\nIntroduzca el testo del archivo: "; getline(cin, frase);

    //agregamos la frase al archivo
    archivo<<frase;

    archivo.close(); //cerramos
 
}