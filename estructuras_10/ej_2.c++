#include <iostream>
#include <string.h>

using namespace std;

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[1];
    char club[20];
}corredor;


int main(){
    char categoria[20];

    cout<<"Introduzca el nombre del corredor: "; cin.getline(corredor.nombre, 20, '\n');
    cout<<"Introduzca la edad del corredor: "; cin>>corredor.edad;
    cout<<"Introduzca el sexo del corredor: "; cin.getline(corredor.sexo, 20, '\n');
    cout<<"Introduzca el club del corredor: "; cin.getline(corredor.club, 20, '\n');
    
    if(corredor.edad <= 18){
        strcpy(categoria, "Juvenil");
    }
    else if(corredor.edad <= 40){
        strcpy(categoria, "Senior");
    }
    else{
        strcpy(categoria, "Veterano");
    }


    cout<<corredor.nombre<<endl;
    cout<<corredor.edad<<endl;
    cout<<corredor.sexo<<endl;
    cout<<corredor.club<<endl;
    cout<<categoria<<endl;
    
    return 0;
}