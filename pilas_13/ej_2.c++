#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

void menu();
void agregar_pila(Nodo *&, char);
void sacar_pila(Nodo *&, char &);

int main(){

    menu();


    return 0;
}


void menu(){
    Nodo *pila = NULL;
    int opcion;
    char dato;

    do{
        cout<<"\t:MENU.\n";
        cout<<"1. Insertar un caracter a la pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;

        switch(opcion){
            case 1: cout<<"\nDigite un caracter: ";
                    cin>>dato;
                    agregar_pila(pila, dato);
                    break;
            case 2: cout<<"\nMostrando todos los elementos de la pila:";
                    while(pila != NULL){
                        sacar_pila(pila, dato);
                        if(pila != NULL){
                            cout<<dato<<" , ";
                        }
                        else{
                            cout<<dato<<".";
                        }
                    }
                    system("pause"); //pausamos para que no limpie pantalla
                    break;
            case 3: break;
        }
        system("cls"); //limpiamos pantalla
    }while(opcion != 3);
}



void agregar_pila(Nodo *&pila, char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void sacar_pila(Nodo *&pila, char &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}