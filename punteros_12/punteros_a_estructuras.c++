#include<iostream>

using namespace std;



struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona; //Creamos un puntero

void pedir_datos(); //Prototipo de Funcion
void mostrar_datos(Persona *);

int main(){
    pedir_datos();
    mostrar_datos(puntero_persona);

    return 0;
}

void pedir_datos(){
    cout<<"Digite su nombre: "; cin.getline(puntero_persona->nombre, 30, '\n'); //Guardamos datos dentros de una estructura usando un puntero.
    cout<<"Digite sue dad: "; cin>>puntero_persona->edad;
}

void mostrar_datos(Persona *puntero_persona){
    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;


}