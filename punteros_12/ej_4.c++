#include <iostream>

using namespace std;



int main(){
    int arreglo[10], *dir_arreglo, menor = 999;

    for(int i=0; i<10; i++){
        cout<<"Introduzca un número en el arrego: "; cin>>arreglo[i];
    }

    dir_arreglo = arreglo;

    for(int i=0; i<10; i++){
        if(*dir_arreglo < menor){
            menor = *dir_arreglo;
        }
        dir_arreglo++;
    }

    cout<<menor<<endl;
    return 0;
}

