#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main(){
    char cadena[50];
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0, lon_cadena=0;

    cout<<"Introduzca una cadena: "; cin.getline(cadena, 20, '\n');

    lon_cadena = strlen(cadena);

    for(int i=0; i<lon_cadena; i+=1){
        if(cadena[i] == 'a'){
            vocal_a+=1;
        }
        else if(cadena[i] == 'e'){
            vocal_e+=1;
        }
        else if(cadena[i] == 'i'){
            vocal_i += 1;
        }
        else if(cadena[i] == 'o'){
            vocal_o += 1;
        }
        else if(cadena[i] == 'u'){
            vocal_u += 1;
        }
    }

    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;


    return 0;
}