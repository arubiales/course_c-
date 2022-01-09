#include<iostream>
#include<string.h>

using namespace std;


int main(){
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"Número de letras de la cadena: "<<longitud<<endl;

    return 0;
}