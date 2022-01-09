#include<iostream>
#include<stdlib.h>

using namespace std;


struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_lista(Nodo *&, int);
void mostrar_lista(Nodo *);
void calc_menor_mayor(Nodo *);

int main(){
    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do{
        cout<<"Digite un número: "; cin>>dato;
        insertar_lista(lista, dato); //agregando un nuevo elemento a la lista

        cout<<"Desea agregar otro nodo(s/n): "; cin>>respuesta;
    }while(respuesta == 's' || respuesta == 'S');

    cout<<"\nElementos de la lista: \n";
    mostrar_lista(lista);

    calc_menor_mayor(lista);

    return 0;
}

void insertar_lista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista == NULL){
        lista = nuevo_nodo; 
    }
    else{
        aux = lista; //auxiliar apunta al inicio de la lista
        while(aux->siguiente != NULL){//recorremos la lista
            aux = aux->siguiente; //avanzamos posicionies en la lista para poder agregar un nuevo nodo al final
        }
        aux->siguiente = nuevo_nodo; //agrego el nuevo nodo a la lista
    }
    
    cout<<"\tElemento "<<n<<" agregado a lista correctamente\n";

}


void mostrar_lista(Nodo *lista){
    while(lista != NULL){
        cout<<lista->dato<<" -> ";
        lista = lista->siguiente; //avanzamos en la lista
    }

}

void calc_menor_mayor(Nodo *lista){
    int mayor = -9999, menor = 9999;

    
    while(lista != NULL){
        if(lista->dato > mayor){
            mayor = lista->dato;
        }
        if(lista->dato < menor){
            menor = lista->dato;
        }
        lista = lista->siguiente;
    }

    cout<<"\nEl mayhor elemento es: "<<mayor<<endl;
    cout<<"\nEl menor elemento es: "<<menor<<endl;

}