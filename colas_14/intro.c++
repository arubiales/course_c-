#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_cola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void eliminar_cola(Nodo *&, Nodo *&, int &)

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;
    
    cout<<"Introduzca un número: "; cin>>dato;
    insertar_cola(frente, fin, dato);

    //eliminar los elementos de la cola
    cout<<"\nQuitando los nodos de la cola: ";
    while(frente !=NULL){
        eliminar_cola(frente, fin, dato);

        if(frente !=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<"."
        }
    }

    return 0;
}


void insertar_cola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo(); //Creamos el espacio en memoria
    nuevo_nodo->dato = n; //insertamos el número que el usuario nos da en el nodo
    nuevo_nodo->siguiente = NULL; //apunta hacia Null

    if(cola_vacia(frente)){ //si la cola está vacia, tanto a frete como a fin, le tenemos que asignar "nuevo_nodo"
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo; //si no el fin tiene qwue ser el nuevo nodo
    }
    fin = nuevo_nodo;

    cout<<"Elemento "<<n<<" insertado a cola correctamente.";
}


void eliminar_cola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato; //cojemoss el dato
    Nodo *aux = frente; //creamos nuestro nodo auxiliar

    if(frente == fin){ //si el frente es igual al fin, ambos apuntan a null, puesto que no hay nodos en la cola
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente; //Si no se apunta al siguiente
    }

    delete aux;
}


//función para determinar si la cola está vacia o no
bool cola_vacia(Nodo *frente){
    // esto es lo comentado más abajo en un oneliner
    return (frente == NULL)? true : false;





    // if(frente == NULL){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}