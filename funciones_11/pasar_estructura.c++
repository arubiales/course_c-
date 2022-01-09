#include <iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1; 

void pedir_datos();
void mostrar_datos(Persona);

int main(){
    pedir_datos();
    mostrar_datos(p1);

    return 0;
}


void pedir_datos(){
    cout<<"Digite su nombre: "; cin.getline(p1.nombre, 30, '\n');
    cout<<"Digite su edad: "; cin>>p1.edad;
    
}

void mostrar_datos(Persona p){
    cout<<p.nombre<<endl;
    cout<<p.edad<<endl;

}