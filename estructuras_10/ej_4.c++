#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


struct Atleta{
    char nombre[20];
    char pais[20];
    int medallas;
}atl[10];




int main(){
     int n_atl, mas_medallas = 0, pos;

     for(int i=0; i<n_atl; i+=1){
        fflush(stdin);
        cout<<"Ingrese su nombre: "; cin.getline(atl[i].nombre, 20, '\n');
        cout<<"Ingrese el páis: "; cin.getline(atl[i].pais, 20, '\n');
        cout<<"Ingresar medallas: "; cin>>atl[i].medallas;

        if(atl[i].medallas > mas_medallas){
            mas_medallas = atl[i].medallas;
            pos = i;
          }
     }
    
    cout<<"El atleta con más medallas es: ";
    cout<<atl[pos].nombre<<endl;

    cout<<"su país es: ";
    cout<<atl[pos].pais<<endl;

    cout<<"sus medallas son: ";
    cout<<atl[pos].medallas;



    return 0;
}