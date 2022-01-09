#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregar_pila(Nodo *&, int);
void sacar_pila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato;

    cout<<"Digite un número: "; cin>>dato;
    agregar_pila(pila, dato);

    cout<<"Digite otro número: "; cin>>dato;
    agregar_pila(pila, dato);

    cout<<"\nSacando los elementos de la pila: ";
    
    while(pila != NULL){ //mientras no sea el final de la pila, eliminamos datos
        sacar_pila(pila, dato);
        if(pila !=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<"."<<endl;
        }
    }

    return 0;
}


void agregar_pila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo(); //reservamos memoria para un nodo
    nuevo_nodo -> dato = n; //cargamos valor dentro del nodo
    nuevo_nodo -> siguiente = pila; //Cargamos el puntero dentro del nodo (*siguiente)
    pila = nuevo_nodo; //Asignamos el nuevo nodo pila
} 

void sacar_pila(Nodo *&pila, int &n){
    Nodo *aux = pila; //creamos la variable auxiliar
    n = aux->dato; //le pasamos el dato de auxiliar
    pila = aux->siguiente;
    delete aux;
}