#include <iostream>
#include <string.h>

using namespace std;


int main(){
    char cadena1[20], cadena2[20];

    cout<<"Digite la primera cadena de caracteres: "; cin.getline(cadena1, 20, '\n');
    cout<<"Digite la segunda cadena de caracteres: "; cin.getline(cadena2, 20, '\n');

    if(strcmp(cadena1, cadena2) == 0){
        cout<<"Ambas cadenas son iguales";
    }
    else if(strcmp(cadena1, cadena2)<0){
        cout<<cadena1<<" está antes alfabeticamente";
        }
    else{
        cout<<cadena2<<" esta antes alfabeticamente";
    }


    return 0;
}