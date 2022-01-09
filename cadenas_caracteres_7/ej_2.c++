#include <iostream>
#include <string.h>

using namespace std;


int main(){
    char cadena1[20], cadena2[20];

    cout<<"Crea una cadena: "; cin.getline(cadena1, 20, '\n');

    strcpy(cadena2, cadena1);

    cout<<cadena2<<endl;


    return 0;
}