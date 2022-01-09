#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void pedir_cadena();
void contar_vocales(char *);

char cadena[20];


int main(){

    pedir_cadena();
    contar_vocales(cadena);


    return 0;
}


void pedir_cadena(){

    cout<<"Introduzca una cadena de caracteres: "; cin.getline(cadena, 20, '\n');

}

void contar_vocales(char *cadena){
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;

    while(*cadena){
        switch(*cadena){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    cadena++;
    }

    cout<<vocal_a<<endl;
    cout<<vocal_e<<endl;
    cout<<vocal_i<<endl;
    cout<<vocal_o<<endl;
    cout<<vocal_u<<endl;

}