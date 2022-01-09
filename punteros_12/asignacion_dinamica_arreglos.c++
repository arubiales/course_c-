#include <iostream>
#include <stdlib.h> //CON ESTO TENEMOS NEW Y DELETE

using namespace std;

void pedir_notas();
void mostrar_notas();

int num_calif, *calif;

int main(){
    pedir_notas();
    mostrar_notas();


    delete[] calif; //liberar la memoria que hemos reservados

    return 0;
}

void pedir_notas(){
    cout<<"Digite el númeroo de calificaciones: "; cin>>num_calif;

    calif = new int[num_calif]; //creamos el arreglo con el número de datos que queremos almacenar

    for(int i=0; i<num_calif; i++){
        cout<<"Ingrese una nota: "; cin>>calif[i];
    } 
}


void mostrar_notas(){
    cout<<"\n \nMostrando notas del usuario:\n";
    for(int i=0; i<num_calif; i++){
        cout<<calif[i]<<endl;
    }
}