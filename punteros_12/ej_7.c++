#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pedir_nombre();
int num_vocales(char *);

char nombre[20];

int main(){
    
    pedir_nombre();
    cout<<"El número de vocales del nombre es: "<<num_vocales(nombre)<<endl;
    return 0;
}


void pedir_nombre(){


    cout<<"Introduzca su nombre: "; cin.getline(nombre, 20, '\n');
}

int num_vocales(char *nombre_a_vocal){
    int conteo;

    while(*nombre_a_vocal){
        switch (*nombre_a_vocal){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': conteo++;
        }
        nombre_a_vocal++;
    }
    
    return conteo;

}