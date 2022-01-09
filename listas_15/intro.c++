#include <iostream>
#include <stdlib.h>

using namespace std;


struct Nodo{
    int dato;
    Nodo *siguiente;
};


void insertar_lista(Nodo *&, int);
void mostrar_lista(Nodo *);
void buscar_lista(Nodo *, int);
void eliminar_lista(Nodo *&, int);
void eliminar_todo_lista(Nodo *&, int &);
void menu();



Nodo *lista = NULL;

int main(){

    menu();

    return 0;
}


void menu(){
    int opcion, dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista \n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Buscar un elemento en lista\n";
        cout<<"4. Salir\n";
        cin>>opcion;

        switch(opcion){
            case 1: cout<<"Digite un número: ";
                    cin>>dato;
                    insertar_lista(lista, dato);
                    system("pause");
                    break;
            case 2: 
                    mostrar_lista(lista);
                    system("pause");
                    break;
            case 3:
                    cout<<"\nDigite un número a buscar: "; cin>>dato;
                    buscar_lista(lista, dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 4: 
                    cout<<"\nDigite un número a eliminar: "; cin>>dato;
                    eliminar_lista(lista, dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 5:
                    cout<<"\nDejar vacia la lista:";
                    while(lista != NULL){ //sigue sacando eelementos hasta que no haya más
                    eliminar_todo_lista(lista, dato);
                    cout<<dato<<" -> ";
                    }
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls");
    }while(opcion !=6);
}

void insertar_lista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo(); //Creamos un espacio para el nodo
    nuevo_nodo->dato = n; //insertamos el dato en el nodo

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato <n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;

    }
    
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
    cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
    }



void mostrar_lista(Nodo *lista){
    Nodo *actual =  new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<< " -> ";
        actual = actual->siguiente;
    }
}

void buscar_lista(Nodo *lista, int n){
    bool band = false;
    
    Nodo *actual = new Nodo(); //creamos una nuevo nodo
    actual = lista; //actual es igual al elemento de la lista que queremos buscar

    while((actual != NULL) && (actual->dato <= n)){
        if(actual->dato == n){
            band = true;
        }
        actual = actual->siguiente; //si no encuentra el elemento que actual sea siguiente para seguir buscando
    }


    if(band == true){
        cout<<"Elemento "<<n<<" Sí ha sido encontrado en la lista"<<endl;
    }
    else{
        cout<<"Elemento "<<n<<" NO ha sido encontrado en la lista"<<endl;
    }

}


void eliminar_lista(Nodo *&lista, int n){
    //vemos si la lista no está vacia
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;

        aux_borrar = lista;

        //Recorremos la lista
        while((aux_borrar != NULL) && (aux_borrar->dato !=n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }
        
        //tres caso a la hora de eliminar el nodo
        //1. el elemento no es encontrado
        if(aux_borrar == NULL){
            cout<<"El elemento NO ha sido encontrado";
        }
        //El primer elemento es el que coincide
        else if(anterior == NULL){
            lista = lista->siguiente;
            delete aux_borrar;
        }
        //El elemento está en la lista pero no es el primer Nodo
        else{
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
        }
    }

void eliminar_todo_lista(Nodo *&lista, int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}