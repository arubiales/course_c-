#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Hola", palabra2[]="Hola";

    if(strcmp(palabra1, palabra2) == 0){
        cout<<"Ambas cadenas son iguales";
    }

    return 0;
}