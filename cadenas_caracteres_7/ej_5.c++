#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){
    char cadena_entero[20], cadena_flotante[20];
    int entero;
    float flotante;

    cout<<"Digite un número entero: "; cin.getline(cadena_entero, 20, '\n');
    cout<<"Digite un número flotante: "; cin.getline(cadena_flotante, 20, '\n');

    atoi(cadena_entero);
    atof(cadena_flotante);

    cout<<cadena_entero<<endl;
    cout<<cadena_flotante<<endl;

    return 0;
}