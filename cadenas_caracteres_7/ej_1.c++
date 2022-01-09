#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cadena[50];

    cout<<"Introduzca una cadena de caracteres: ";
    cin.getline(cadena, 50, '\n');

    if(strlen(cadena)>10){
        cout<<cadena<<endl;
    }
    else{
        cout<<"La cadena no supera los 10 caracteres: "<<endl;
    }
    


    return 0;
}