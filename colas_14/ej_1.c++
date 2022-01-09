#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void menu();
void insertar_cola(Nodo &*, Nodo&*, char);
bool cola_vacia(Nodo *);
void eliminar_cola(Nodo *&, Nodo&*, char &);

int main(){
    menu();

    return 0;
}


void menu(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un caracter en la cola"<<endl;
        cout<<"2. Mostrar todos los elmentos de la cola"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opción: ";
        cin>>opc;

        switch(opc){
            case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";
                    cin>>dato;
                    insertar_cola(frente, fin, dato;
                    break;
            case 2: cout<<"\nMostrando los elementos de la cola: ";
                    while(frente !=NULL){
                        eliminar_cola(frente, fin, dato);
                        if(fretne !=NULL){
                            cout<<dato<<" , ";
                        }
                        else{
                            cout<<dato<<"."
                        }
                    }
                    system("pause");
                    break;
            case 3: break;
        }
        system("cls") //Nos limpia la pantalla
    }while(opc != 3);
}


// Función para insertar elementos en la cola

void insertar_cola(Nodo *&frente, Nodo *&fin, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

//


// Función para determinar si la cola está vacia
bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;
}

//Función para erliminar cola
void eliminar_cola(Nodo *&frente, Nodo *&fin, char &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(fretne==fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente; //pasamos al siguiente al eliminar
    }
    delete aux;
}